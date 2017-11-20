add_library(L1TriggerConfigL1GeometryProducers OBJECT 
  src/L1CaloGeometryDump.cc
  src/L1CaloGeometryProd.cc
)

target_include_directories(L1TriggerConfigL1GeometryProducers PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerConfigL1GeometryProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerConfigL1GeometryProducers PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerConfigL1GeometryProducers PUBLIC /usr/include/root/)
target_include_directories(L1TriggerConfigL1GeometryProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerConfigL1GeometryProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerConfigL1GeometryProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerConfigL1GeometryProducers PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerConfigL1GeometryProducers PUBLIC /usr/include/boost/regex/)

