# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.
import math


class Node:
    def __init__(self, value, x, y, neighbors):
        self.value = value
        self.x = x
        self.y = y
        self.heuristic_value = -1
        self.distance_from_start = math.inf
        self.neighbors = neighbors
        self.parent = None

    def get_neighbors(self):
        return self.neighbors

class AStar:
    def __init__(self, graph, start_pos, target_pos):
        self.graph = graph
        self.start = graph[start_pos]
        self.target = graph[target_pos]
        self.opened = []
        self.closed = []
        self.num_steps = 0

    def calc_dist(self, parent, child):
        for neighbor in parent.neighbors:
            if neighbor[0] == child:
                dist = parent.dist_from_start + neighbor[1]
                if dist < child.dist_form_start:
                    child.parent = parent
                    return dist

                return child.dist_from_start

    def remove_from_opened(self):
        min = math.inf
        to_remove = None

        for node in self.opened:
            if node.heuristic_value < min:
                min = node.heuristic_value
                to_remove = node

        self.opened.remove(to_remove)
        return to_remove

    def find_heuristic(self, parent, child, target):
        return self.calc_dist(parent, child) + math.sqrt((parent.x - child.x) ** 2 + (parent.y - child.y) ** 2)

    def get_old_node(self, node_val):
        for node in self.opened:
            if node.value == node_val:
                return node
        return None

    def search(self):
        self.start.dist_from_start = 0
        self.start.heuristic_value = math.sqrt((self.start.x - self.target.x) ** 2 + (self.start.y - self.target.y) ** 2)
        self.opened.append(self.start)

        while True:
            self.num_steps += 1

            if len(self.opened) == 0:
                print("No solution found")
                break

            removed = self.remove_from_opened()

            if removed == self.target:
                path = self.calc_path(removed)
                total_cost = self.calculate_cost(path)
                path.reverse()
                return path, total_cost

            new_nodes = removed.get_neighbors()

            if len(new_nodes > 0):
                for new_node in new_nodes:
                    new_node.heuristic_value = self.find_heuristic(removed, new_node, self.target)
                    if new_node not in self.closed and new_node not in self.opened:
                        new_node.parent = removed
                        self.opened.append(new_node)
                    elif new_node in self.opened and new_node.parent != removed:
                        old_node = self.get_old_node(new_node.value)
                        if new_node.heuristic_value < old_node.heuristic_value:
                            new_node.parent = removed
                            self.opened.append(new_node)


node1 = Node(3, 1, 2, [])
node2 = Node(4, 0, 3, [node1])
g = {1: node1, 2: node2}
a_star = AStar(g, [1, 2], [0, 3])
a_star.search()



