add_library(GeometryEcalCommonDataPlugins OBJECT 
  module.cc
)

target_include_directories(GeometryEcalCommonDataPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryEcalCommonDataPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryEcalCommonDataPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryEcalCommonDataPlugins PUBLIC /usr/include/boost/)
target_include_directories(GeometryEcalCommonDataPlugins PUBLIC /usr/include/root/)
target_include_directories(GeometryEcalCommonDataPlugins PUBLIC /usr/include/boost/regex/)

