add_library(GeometryCommonTopologiesTestPlugins OBJECT 
  ValidateRadial.cc
)

target_include_directories(GeometryCommonTopologiesTestPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryCommonTopologiesTestPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryCommonTopologiesTestPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryCommonTopologiesTestPlugins PUBLIC /usr/include/root/)
target_include_directories(GeometryCommonTopologiesTestPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryCommonTopologiesTestPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryCommonTopologiesTestPlugins PUBLIC /usr/include/boost/)
target_include_directories(GeometryCommonTopologiesTestPlugins PUBLIC /usr/include/boost/regex/)

add_library(GeometryCommonTopologiesTestDriver OBJECT 
  dummyMain.cpp
)

target_include_directories(GeometryCommonTopologiesTestDriver PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryCommonTopologiesTestDriver PUBLIC /usr/include/root/)
target_include_directories(GeometryCommonTopologiesTestDriver PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryCommonTopologiesTestDriver PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryCommonTopologiesTestDriver PUBLIC /usr/include/boost/)
target_include_directories(GeometryCommonTopologiesTestDriver PUBLIC /usr/include/boost/regex/)

