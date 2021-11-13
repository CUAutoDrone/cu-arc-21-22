from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='controls',
            executable='transmitter'
        ),
        Node(
            package='controls',
            executable='pid'
        ),
        Node(
            package='controls',
            executable='publishHeight'
        )
    ])