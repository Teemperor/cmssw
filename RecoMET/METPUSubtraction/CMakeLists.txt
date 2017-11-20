add_subdirectory(plugins)
add_library(RecoMETMETPUSubtraction OBJECT 
  src/PFMETAlgorithmMVA.cc
  src/NoPileUpMEtAuxFunctions.cc
  src/MvaMEtUtilities.cc
  src/PFMEtSignInterfaceBase.cc
  src/NoPileUpMEtUtilities.cc
)

target_include_directories(RecoMETMETPUSubtraction PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /usr/include/boost/)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /usr/include/eigen3/)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /usr/include/root/)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoMETMETPUSubtraction PUBLIC /usr/include/boost/regex/)

