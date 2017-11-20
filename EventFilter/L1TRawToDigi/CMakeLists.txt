add_library(EventFilterL1TRawToDigi OBJECT 
  src/MP7PacketReader.cc
  src/Block.cc
  src/AMC13Spec.cc
  src/AMCSpec.cc
  src/MP7FileReader.cc
)

target_include_directories(EventFilterL1TRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterL1TRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterL1TRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterL1TRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterL1TRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterL1TRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterL1TRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterL1TRawToDigi PUBLIC /usr/include/boost/regex/)

