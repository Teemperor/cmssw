add_subdirectory(plugins)
add_library(RecoRomanPotRecoFP420 OBJECT 
  src/FP420ClusterMain.cc
  src/RecoProducerFP420.cc
  src/FP420TrackMain.cc
  src/FP420RecoMain.cc
  src/ClusterProducerFP420.cc
  src/ClusterNoiseFP420.cc
  src/TrackProducerFP420.cc
)

target_include_directories(RecoRomanPotRecoFP420 PUBLIC /usr/include/boost/python/)
target_include_directories(RecoRomanPotRecoFP420 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoRomanPotRecoFP420 PUBLIC /usr/include/python2.7/)
target_include_directories(RecoRomanPotRecoFP420 PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(RecoRomanPotRecoFP420 PUBLIC /home/teemperor/cms/ext/hector/Hector)
target_include_directories(RecoRomanPotRecoFP420 PUBLIC /usr/include/root/)
target_include_directories(RecoRomanPotRecoFP420 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoRomanPotRecoFP420 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoRomanPotRecoFP420 PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoRomanPotRecoFP420 PUBLIC /usr/include/boost/)
target_include_directories(RecoRomanPotRecoFP420 PUBLIC /usr/include/boost/regex/)

