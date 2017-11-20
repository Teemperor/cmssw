add_library(ValidationGlobalRecHits OBJECT 
  src/GlobalRecHitsAnalyzer.cc
  src/SealModule.cc
  src/GlobalRecHitsHistogrammer.cc
  src/GlobalRecHitsProducer.cc
)

target_include_directories(ValidationGlobalRecHits PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationGlobalRecHits PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationGlobalRecHits PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationGlobalRecHits PUBLIC /usr/include/root/)
target_include_directories(ValidationGlobalRecHits PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationGlobalRecHits PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationGlobalRecHits PUBLIC /usr/include/boost/serialization/)
target_include_directories(ValidationGlobalRecHits PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationGlobalRecHits PUBLIC /usr/include/boost/)
target_include_directories(ValidationGlobalRecHits PUBLIC /usr/include/Geant4/)
target_include_directories(ValidationGlobalRecHits PUBLIC /usr/include/boost/regex/)

