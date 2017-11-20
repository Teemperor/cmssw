add_library(GeometryHGCalCommonDataPlugin OBJECT 
  DDAHcalModuleAlgo.cc
  DDHGCalWaferAlgo.cc
  DDHGCalNoTaperEndcap.cc
  DDHGCalEEAlgo.cc
  DDHGCalModuleAlgo.cc
  DDHGCalModule.cc
  DDHGCalTBModule.cc
  DDHGCalHEAlgo.cc
  module.cc
)

target_include_directories(GeometryHGCalCommonDataPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryHGCalCommonDataPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryHGCalCommonDataPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryHGCalCommonDataPlugin PUBLIC /usr/include/root/)
target_include_directories(GeometryHGCalCommonDataPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryHGCalCommonDataPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryHGCalCommonDataPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(GeometryHGCalCommonDataPlugin PUBLIC /usr/include/boost/)
target_include_directories(GeometryHGCalCommonDataPlugin PUBLIC /usr/include/boost/regex/)

add_library(GeometryHGCalCommonDataESModules OBJECT 
  HGCalNumberingInitialization.cc
  HGCalParametersESModule.cc
)

target_include_directories(GeometryHGCalCommonDataESModules PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryHGCalCommonDataESModules PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryHGCalCommonDataESModules PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryHGCalCommonDataESModules PUBLIC /usr/include/root/)
target_include_directories(GeometryHGCalCommonDataESModules PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryHGCalCommonDataESModules PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryHGCalCommonDataESModules PUBLIC /usr/include/boost/serialization/)
target_include_directories(GeometryHGCalCommonDataESModules PUBLIC /usr/include/boost/)
target_include_directories(GeometryHGCalCommonDataESModules PUBLIC /usr/include/boost/regex/)

add_library(GeometryHGCalCommonDataFastTimeESModules OBJECT 
  FastTimeNumberingInitialization.cc
  FastTimeParametersESModule.cc
)

target_include_directories(GeometryHGCalCommonDataFastTimeESModules PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryHGCalCommonDataFastTimeESModules PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryHGCalCommonDataFastTimeESModules PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryHGCalCommonDataFastTimeESModules PUBLIC /usr/include/root/)
target_include_directories(GeometryHGCalCommonDataFastTimeESModules PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryHGCalCommonDataFastTimeESModules PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryHGCalCommonDataFastTimeESModules PUBLIC /usr/include/boost/serialization/)
target_include_directories(GeometryHGCalCommonDataFastTimeESModules PUBLIC /usr/include/boost/)
target_include_directories(GeometryHGCalCommonDataFastTimeESModules PUBLIC /usr/include/boost/regex/)

