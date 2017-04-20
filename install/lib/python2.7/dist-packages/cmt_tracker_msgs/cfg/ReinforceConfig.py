## *********************************************************
## 
## File autogenerated for the cmt_tracker_msgs package 
## by the dynamic_reconfigure package.
## Please do not edit.
## 
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 235, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 280, 'description': 'A Decreasing Counter that when it reaches zero removes a tracked instance to temporary tracker', 'max': 1000, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'downgrade', 'edit_method': '', 'default': 500, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 280, 'description': 'The number of DLIB faces that', 'max': 10, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'dlib_count', 'edit_method': '', 'default': 4, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 280, 'description': 'The number of DLIB faces that', 'max': 10, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'open_count', 'edit_method': '', 'default': 6, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 280, 'description': 'The number of DLIB faces that', 'max': 10, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'open_dlib_count', 'edit_method': '', 'default': 6, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 280, 'description': 'Percent of Area to Delete if cmt eaches area', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'area_downgrade', 'edit_method': '', 'default': 0.7, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 280, 'description': 'Number of Frames to count the overlaps', 'max': 50, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'window_size', 'edit_method': '', 'default': 10, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 280, 'description': 'Number of overlaps before adding to Validated Tracker', 'max': 10, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'reinforce_count', 'edit_method': '', 'default': 3, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 280, 'description': 'Difference between x and x1', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'epi_x', 'edit_method': '', 'default': 15, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 280, 'description': 'Difference between y and y1', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'epi_y', 'edit_method': '', 'default': 15, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 280, 'description': 'Difference between width and width_1', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'epi_w', 'edit_method': '', 'default': 15, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 280, 'description': 'Difference between height and height_1', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'epi_h', 'edit_method': '', 'default': 15, 'level': 0, 'min': 1, 'type': 'int'}], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])    
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

