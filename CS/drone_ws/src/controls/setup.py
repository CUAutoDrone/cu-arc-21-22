from setuptools import setup
from glob import glob
import os

package_name = 'controls'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ubuntu',
    maintainer_email='ubuntu@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'flight_controller = controls.flight_controller:main',
            'test_flight_controller = controls.flight_controller:test_main',
            'distance_sensor = controls.distance_sensor:main',
            'ultrasonic_sensor = controls.ultrasonic:main',
            'pid = controls.pid:main',
            'killswitch = controls.killswitch:main'
        ],
    },
)
