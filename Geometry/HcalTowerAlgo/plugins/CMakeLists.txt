add_library(GeometryHcalTowerAlgoPlugins OBJECT 
  HcalTrigTowerGeometryESProducer.cc
)

target_include_directories(GeometryHcalTowerAlgoPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryHcalTowerAlgoPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryHcalTowerAlgoPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryHcalTowerAlgoPlugins PUBLIC /usr/include/root/)
target_include_directories(GeometryHcalTowerAlgoPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryHcalTowerAlgoPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryHcalTowerAlgoPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(GeometryHcalTowerAlgoPlugins PUBLIC /usr/include/boost/)
target_include_directories(GeometryHcalTowerAlgoPlugins PUBLIC /usr/include/boost/regex/)

