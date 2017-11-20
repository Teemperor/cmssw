add_library(JetMETCorrectionsAlgorithms OBJECT 
  src/LXXXCorrector.cc
  src/LXXXCorrectorImpl.cc
  src/L1FastjetCorrectorImpl.cc
  src/L1FastjetCorrector.cc
  src/L1JPTOffsetCorrector.cc
  src/L1JPTOffsetCorrectorImpl.cc
  src/JetCorrectorImplMakerBase.cc
  src/L6SLBCorrector.cc
  src/L1OffsetCorrector.cc
  src/L1OffsetCorrectorImpl.cc
  src/L6SLBCorrectorImpl.cc
)

target_include_directories(JetMETCorrectionsAlgorithms PUBLIC /usr/include/boost/python/)
target_include_directories(JetMETCorrectionsAlgorithms PUBLIC /usr/include/boost/iostreams/)
target_include_directories(JetMETCorrectionsAlgorithms PUBLIC /usr/include/boost/filesystem/)
target_include_directories(JetMETCorrectionsAlgorithms PUBLIC /usr/include/python2.7/)
target_include_directories(JetMETCorrectionsAlgorithms PUBLIC /usr/include/root/)
target_include_directories(JetMETCorrectionsAlgorithms PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(JetMETCorrectionsAlgorithms PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(JetMETCorrectionsAlgorithms PUBLIC /home/teemperor/cms/md5/)
target_include_directories(JetMETCorrectionsAlgorithms PUBLIC /usr/include/boost/serialization/)
target_include_directories(JetMETCorrectionsAlgorithms PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(JetMETCorrectionsAlgorithms PUBLIC /usr/include/boost/)
target_include_directories(JetMETCorrectionsAlgorithms PUBLIC /usr/include/boost/regex/)

