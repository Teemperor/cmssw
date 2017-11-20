add_library(ValidationRecoParticleFlow_plugins OBJECT 
  PFFilter.cc
  SealModule.cc
  PFTester.cc
  PFMETFilter.cc
  GenJetClosestMatchSelector.cc
  GenericBenchmarkAnalyzer.cc
  PFMETBenchmarkAnalyzer.cc
  PFJetBenchmarkAnalyzer.cc
  PFJetFilter.cc
  PFTauElecRejectionBenchMarkAnalyzer.cc
)

target_include_directories(ValidationRecoParticleFlow_plugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ValidationRecoParticleFlow_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationRecoParticleFlow_plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ValidationRecoParticleFlow_plugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationRecoParticleFlow_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationRecoParticleFlow_plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(ValidationRecoParticleFlow_plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ValidationRecoParticleFlow_plugins PUBLIC /usr/include/boost/)
target_include_directories(ValidationRecoParticleFlow_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationRecoParticleFlow_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationRecoParticleFlow_plugins PUBLIC /usr/include/root/)
target_include_directories(ValidationRecoParticleFlow_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationRecoParticleFlow_plugins PUBLIC /usr/include/boost/regex/)

