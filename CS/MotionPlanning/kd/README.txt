The KD tree is a data structure organized in such a way that finding the nearest neighbor of a point is an efficient operation.
Assuming the drone flies at a constant height, we can view the field as a 2-D plane.
Therefore, in our KD tree, k will be equal to 2, so it will be a 2-D tree.
Points in the tree will be sorted by x-coordinate at even dimensions, and by y-coordinate at odd dimensions.
For more information on KD trees, see https://en.wikipedia.org/wiki/K-d_tree.
