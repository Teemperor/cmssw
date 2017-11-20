add_subdirectory(test)
add_subdirectory(plugins)
add_library(GeometryHcalTowerAlgo OBJECT 
  src/HcalDDDGeometry.cc
  src/CaloTowerGeometry.cc
  src/CaloTowerHardcodeGeometryLoader.cc
  src/HcalGeometry.cc
  src/HcalTrigTowerGeometry.cc
  src/HcalDDDGeometryLoader.cc
  src/ES_HcalTrigTowerGeometry.cc
  src/HcalFlexiHardcodeGeometryLoader.cc
  src/HcalHardcodeGeometryLoader.cc
)

target_include_directories(GeometryHcalTowerAlgo PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryHcalTowerAlgo PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryHcalTowerAlgo PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryHcalTowerAlgo PUBLIC /usr/include/root/)
target_include_directories(GeometryHcalTowerAlgo PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryHcalTowerAlgo PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryHcalTowerAlgo PUBLIC /usr/include/boost/serialization/)
target_include_directories(GeometryHcalTowerAlgo PUBLIC /usr/include/boost/)
target_include_directories(GeometryHcalTowerAlgo PUBLIC /usr/include/boost/regex/)

