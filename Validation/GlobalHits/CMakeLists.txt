add_library(ValidationGlobalHits OBJECT 
  src/SealModule.cc
  src/GlobalHitsTester.cc
  src/GlobalHitsHistogrammer.cc
  src/GlobalHitsProducer.cc
  src/GlobalHitsProdHistStripper.cc
  src/GlobalHitsAnalyzer.cc
  src/GlobalHitsProdHist.cc
)

target_include_directories(ValidationGlobalHits PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationGlobalHits PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationGlobalHits PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationGlobalHits PUBLIC /usr/include/root/)
target_include_directories(ValidationGlobalHits PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationGlobalHits PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationGlobalHits PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationGlobalHits PUBLIC /usr/include/boost/)
target_include_directories(ValidationGlobalHits PUBLIC /usr/include/Geant4/)
target_include_directories(ValidationGlobalHits PUBLIC /usr/include/boost/regex/)

