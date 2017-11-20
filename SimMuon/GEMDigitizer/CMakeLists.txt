add_subdirectory(test)
add_subdirectory(plugins)
add_library(SimMuonGEMDigitizer OBJECT 
  src/ME0PreRecoGaussianModel.cc
  src/ME0ReDigiProducer.cc
  src/SealModule.cc
  src/GEMDigiModelFactory.cc
  src/ME0DigiPreRecoModelFactory.cc
  src/GEMDigiModel.cc
  src/GEMPadDigiProducer.cc
  src/ME0DigiPreRecoProducer.cc
  src/GEMSimpleModel.cc
  src/ME0DigiPreRecoModel.cc
  src/ME0PreRecoNoSmearModel.cc
  src/GEMPadDigiClusterProducer.cc
  src/GEMDigiProducer.cc
  src/GEMTrivialModel.cc
  src/ME0PadDigiProducer.cc
)

target_include_directories(SimMuonGEMDigitizer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SimMuonGEMDigitizer PUBLIC /usr/include/python2.7/)
target_include_directories(SimMuonGEMDigitizer PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(SimMuonGEMDigitizer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimMuonGEMDigitizer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimMuonGEMDigitizer PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimMuonGEMDigitizer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimMuonGEMDigitizer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(SimMuonGEMDigitizer PUBLIC /usr/include/boost/)
target_include_directories(SimMuonGEMDigitizer PUBLIC /usr/include/boost/python/)
target_include_directories(SimMuonGEMDigitizer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimMuonGEMDigitizer PUBLIC /usr/include/root/)
target_include_directories(SimMuonGEMDigitizer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(SimMuonGEMDigitizer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimMuonGEMDigitizer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(SimMuonGEMDigitizer PUBLIC /usr/include/boost/regex/)

