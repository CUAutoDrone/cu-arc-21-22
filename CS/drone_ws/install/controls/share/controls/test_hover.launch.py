from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='controls',
            executable='test_flight_controller',
        ),
        Node(
            package='controls',
            executable='pid'
        ),
        Node(
            package='controls',
            executable='distance_sensor',
        )
    ])