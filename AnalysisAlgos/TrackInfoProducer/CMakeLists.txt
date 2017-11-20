add_subdirectory(test)
add_library(AnalysisAlgosTrackInfoProducer OBJECT 
  src/TrackInfoProducer.cc
  src/SealModules.cc
  src/TrackInfoProducerAlgorithm.cc
)

target_include_directories(AnalysisAlgosTrackInfoProducer PUBLIC /usr/include/boost/python/)
target_include_directories(AnalysisAlgosTrackInfoProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AnalysisAlgosTrackInfoProducer PUBLIC /usr/include/python2.7/)
target_include_directories(AnalysisAlgosTrackInfoProducer PUBLIC /usr/include/root/)
target_include_directories(AnalysisAlgosTrackInfoProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AnalysisAlgosTrackInfoProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AnalysisAlgosTrackInfoProducer PUBLIC /usr/include/boost/)
target_include_directories(AnalysisAlgosTrackInfoProducer PUBLIC /usr/include/boost/regex/)

