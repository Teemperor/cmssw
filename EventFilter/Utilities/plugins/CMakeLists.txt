add_library(EventFilterUtilitiesPlugins OBJECT 
  RawEventFileWriterForBU.cc
  SealModule.cc
  FRDStreamSource.cc
  TcdsRawToDigi.cc
  RecoEventWriterForFU.cc
  DaqFakeReader.cc
  ExceptionGenerator.cc
)

target_include_directories(EventFilterUtilitiesPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterUtilitiesPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterUtilitiesPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterUtilitiesPlugins PUBLIC /usr/include/root/)
target_include_directories(EventFilterUtilitiesPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterUtilitiesPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterUtilitiesPlugins PUBLIC /usr/include/boost/)
target_include_directories(EventFilterUtilitiesPlugins PUBLIC /usr/include/boost/regex/)

