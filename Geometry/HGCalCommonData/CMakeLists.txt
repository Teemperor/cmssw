add_subdirectory(test)
add_subdirectory(plugins)
add_library(GeometryHGCalCommonData OBJECT 
  src/HGCalDDDConstants.cc
  src/FastTimeParameters.cc
  src/HGCalParameters.cc
  src/HGCalParametersFromDD.cc
  src/FastTimeParametersFromDD.cc
  src/FastTimeDDDConstants.cc
  src/HGCalGeometryMode.cc
  src/HGCalGeomParameters.cc
)

target_include_directories(GeometryHGCalCommonData PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryHGCalCommonData PUBLIC /usr/include/root/)
target_include_directories(GeometryHGCalCommonData PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryHGCalCommonData PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryHGCalCommonData PUBLIC /usr/include/boost/)
target_include_directories(GeometryHGCalCommonData PUBLIC /usr/include/boost/regex/)

