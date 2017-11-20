add_subdirectory(test)
add_library(GeometryHcalEventSetup OBJECT 
  src/CaloTowerTopologyEP.cc
  src/SealModule.cc
  src/moduleDB.cc
  src/HcalAlignmentEP.cc
  src/HcalDDDGeometryEP.cc
  src/HcalHardcodeGeometryEP.cc
  src/HcalTopologyIdealEP.cc
  src/CaloTowerHardcodeGeometryEP.cc
)

target_include_directories(GeometryHcalEventSetup PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryHcalEventSetup PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryHcalEventSetup PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryHcalEventSetup PUBLIC /usr/include/root/)
target_include_directories(GeometryHcalEventSetup PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryHcalEventSetup PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryHcalEventSetup PUBLIC /usr/include/boost/serialization/)
target_include_directories(GeometryHcalEventSetup PUBLIC /usr/include/boost/)
target_include_directories(GeometryHcalEventSetup PUBLIC /usr/include/boost/regex/)

