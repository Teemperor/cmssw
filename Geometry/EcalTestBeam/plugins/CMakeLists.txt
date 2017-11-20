add_library(GeometryEcalTestBeamPlugins OBJECT 
  module.cc
  DDTBH4Algo.cc
  EcalTBHodoscopeGeometryEP.cc
  EcalTBHodoscopeGeometryLoaderFromDDD.cc
  EcalTBGeometryBuilder.cc
)

target_include_directories(GeometryEcalTestBeamPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryEcalTestBeamPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryEcalTestBeamPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryEcalTestBeamPlugins PUBLIC /usr/include/root/)
target_include_directories(GeometryEcalTestBeamPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryEcalTestBeamPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryEcalTestBeamPlugins PUBLIC /usr/include/boost/)
target_include_directories(GeometryEcalTestBeamPlugins PUBLIC /usr/include/boost/regex/)

