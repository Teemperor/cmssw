add_subdirectory(plugins)
add_library(IOPoolStreamer OBJECT 
  src/InitMessage.cc
  src/StreamerOutputFile.cc
  src/StreamSerializer.cc
  src/FRDEventMessage.cc
  src/StreamerInputSource.cc
  src/EventMsgBuilder.cc
  src/StreamerFileReader.cc
  src/InitMsgBuilder.cc
  src/StreamerFileIO.cc
  src/StreamerFileWriter.cc
  src/ClassFiller.cc
  src/StreamerInputFile.cc
  src/DumpTools.cc
  src/EventMessage.cc
  src/StreamerOutputModuleBase.cc
)

target_include_directories(IOPoolStreamer PUBLIC /usr/include/boost/python/)
target_include_directories(IOPoolStreamer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(IOPoolStreamer PUBLIC /usr/include/python2.7/)
target_include_directories(IOPoolStreamer PUBLIC /usr/include/root/)
target_include_directories(IOPoolStreamer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IOPoolStreamer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(IOPoolStreamer PUBLIC /usr/include/boost/)
target_include_directories(IOPoolStreamer PUBLIC /usr/include/boost/regex/)

