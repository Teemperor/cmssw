add_library(FWCoreSources OBJECT 
  src/VectorInputSourceFactory.cc
  src/ProducerSourceBase.cc
  src/RawInputSource.cc
  src/DaqProvenanceHelper.cc
  src/RawInputSourceFromFiles.cc
  src/ProducerSourceFromFiles.cc
  src/EventSkipperByID.cc
  src/FromFiles.cc
  src/VectorInputSource.cc
)

target_include_directories(FWCoreSources PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreSources PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreSources PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreSources PUBLIC /usr/include/root/)
target_include_directories(FWCoreSources PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreSources PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreSources PUBLIC /usr/include/boost/)
target_include_directories(FWCoreSources PUBLIC /usr/include/boost/regex/)

