add_library(GeometryForwardGeometryPlugins OBJECT 
  SealModule.cc
  moduleDB.cc
  ZdcHardcodeGeometryEP.cc
  CastorHardcodeGeometryEP.cc
)

target_include_directories(GeometryForwardGeometryPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryForwardGeometryPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryForwardGeometryPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryForwardGeometryPlugins PUBLIC /usr/include/root/)
target_include_directories(GeometryForwardGeometryPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryForwardGeometryPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryForwardGeometryPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(GeometryForwardGeometryPlugins PUBLIC /usr/include/boost/)
target_include_directories(GeometryForwardGeometryPlugins PUBLIC /usr/include/boost/regex/)

