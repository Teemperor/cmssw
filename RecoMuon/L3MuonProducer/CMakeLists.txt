add_library(RecoMuonL3MuonProducer OBJECT 
  src/SealModule.cc
  src/L3MuonProducer.cc
  src/QuarkoniaTrackSelector.cc
  src/L3MuonCleaner.cc
  src/L3TkMuonProducer.cc
  src/L3MuonCandidateProducer.cc
  src/L3MuonCandidateProducerFromMuons.cc
)

target_include_directories(RecoMuonL3MuonProducer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoMuonL3MuonProducer PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonL3MuonProducer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoMuonL3MuonProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonL3MuonProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonL3MuonProducer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoMuonL3MuonProducer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoMuonL3MuonProducer PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonL3MuonProducer PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonL3MuonProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonL3MuonProducer PUBLIC /usr/include/root/)
target_include_directories(RecoMuonL3MuonProducer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoMuonL3MuonProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonL3MuonProducer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoMuonL3MuonProducer PUBLIC /usr/include/boost/regex/)

