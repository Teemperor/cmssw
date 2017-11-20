add_subdirectory(test)
add_subdirectory(plugins)
add_library(GeometryHGCalGeometry OBJECT 
  src/FastTimeGeometryLoader.cc
  src/FastTimeGeometry.cc
  src/HGCalGeometryLoader.cc
  src/HGCalGeometry.cc
)

target_include_directories(GeometryHGCalGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryHGCalGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryHGCalGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryHGCalGeometry PUBLIC /usr/include/root/)
target_include_directories(GeometryHGCalGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryHGCalGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryHGCalGeometry PUBLIC /usr/include/boost/)
target_include_directories(GeometryHGCalGeometry PUBLIC /usr/include/boost/regex/)

