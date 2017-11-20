add_library(RecoMETMETAlgorithms OBJECT 
  src/METSignificance.cc
  src/HcalNoiseAlgo.cc
  src/EcalHaloAlgo.cc
  src/SignPFSpecificAlgo.cc
  src/HcalHPDRBXMap.cc
  src/significanceAlgo.cc
  src/HcalHaloAlgo.cc
  src/SignCaloSpecificAlgo.cc
  src/PFClusterSpecificAlgo.cc
  src/MuonMETAlgo.cc
  src/CSCHaloAlgo.cc
  src/PFSpecificAlgo.cc
  src/SignAlgoResolutions.cc
  src/GlobalHaloAlgo.cc
  src/TCMETAlgo.cc
  src/HcalNoiseRBXArray.cc
  src/METAlgo.cc
  src/GenSpecificAlgo.cc
  src/CaloSpecificAlgo.cc
)

target_include_directories(RecoMETMETAlgorithms PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoMETMETAlgorithms PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMETMETAlgorithms PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoMETMETAlgorithms PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMETMETAlgorithms PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMETMETAlgorithms PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoMETMETAlgorithms PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoMETMETAlgorithms PUBLIC /usr/include/boost/)
target_include_directories(RecoMETMETAlgorithms PUBLIC /usr/include/eigen3/)
target_include_directories(RecoMETMETAlgorithms PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMETMETAlgorithms PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMETMETAlgorithms PUBLIC /usr/include/root/)
target_include_directories(RecoMETMETAlgorithms PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoMETMETAlgorithms PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMETMETAlgorithms PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoMETMETAlgorithms PUBLIC /usr/include/boost/regex/)

