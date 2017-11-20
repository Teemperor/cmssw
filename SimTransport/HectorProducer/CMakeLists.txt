add_library(SimTransportHectorProducer OBJECT 
  src/CTPPSHectorProducer.cc
  src/HectorProducer.cc
  src/CTPPSHector.cc
  src/Hector.cc
)

target_include_directories(SimTransportHectorProducer PUBLIC /usr/include/boost/python/)
target_include_directories(SimTransportHectorProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimTransportHectorProducer PUBLIC /usr/include/python2.7/)
target_include_directories(SimTransportHectorProducer PUBLIC /home/teemperor/cms/ext/hector/Hector)
target_include_directories(SimTransportHectorProducer PUBLIC /usr/include/root/)
target_include_directories(SimTransportHectorProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimTransportHectorProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimTransportHectorProducer PUBLIC /usr/include/boost/)
target_include_directories(SimTransportHectorProducer PUBLIC /usr/include/boost/regex/)

