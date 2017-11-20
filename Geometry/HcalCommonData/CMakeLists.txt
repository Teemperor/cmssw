add_subdirectory(test)
add_subdirectory(plugins)
add_library(GeometryHcalCommonData OBJECT 
  src/HcalTopologyMode.cc
  src/HcalParametersFromDD.cc
  src/HcalGeomParameters.cc
  src/ES_HcalDDDConstants.cc
  src/HcalHitRelabeller.cc
  src/HcalNumberingFromDDD.cc
  src/HcalCellType.cc
  src/HcalDDDRecConstants.cc
  src/HcalLayerDepthMap.cc
  src/HcalDDDSimConstants.cc
)

target_include_directories(GeometryHcalCommonData PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryHcalCommonData PUBLIC /usr/include/root/)
target_include_directories(GeometryHcalCommonData PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryHcalCommonData PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryHcalCommonData PUBLIC /usr/include/boost/)
target_include_directories(GeometryHcalCommonData PUBLIC /usr/include/boost/regex/)

