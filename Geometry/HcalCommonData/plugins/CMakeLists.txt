add_library(GeometryHcalCommonDataPlugins OBJECT 
  HcalParametersESModule.cc
  HcalDDDRecConstantsESMoudle.cc
  HcalDDDSimConstantsESModule.cc
)

target_include_directories(GeometryHcalCommonDataPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryHcalCommonDataPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryHcalCommonDataPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryHcalCommonDataPlugins PUBLIC /usr/include/root/)
target_include_directories(GeometryHcalCommonDataPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryHcalCommonDataPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryHcalCommonDataPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(GeometryHcalCommonDataPlugins PUBLIC /usr/include/boost/)
target_include_directories(GeometryHcalCommonDataPlugins PUBLIC /usr/include/boost/regex/)

