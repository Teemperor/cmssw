add_subdirectory(plugins)
add_library(GeometryEcalMapping OBJECT 
  src/ESElectronicsMapper.cc
  src/ES_EcalElectronicsMapping.cc
  src/EcalMappingRcd.cc
  src/EcalElectronicsMapping.cc
)

target_include_directories(GeometryEcalMapping PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryEcalMapping PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryEcalMapping PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryEcalMapping PUBLIC /usr/include/root/)
target_include_directories(GeometryEcalMapping PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryEcalMapping PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryEcalMapping PUBLIC /usr/include/boost/)
target_include_directories(GeometryEcalMapping PUBLIC /usr/include/boost/regex/)

