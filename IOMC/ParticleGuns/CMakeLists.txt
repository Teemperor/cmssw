add_library(IOMCParticleGuns OBJECT 
  src/FlatBaseThetaGunProducer.cc
  src/BaseRandomtXiGunProducer.cc
  src/SealModule.cc
  src/GaussRandomPThetaGunProducer.cc
  src/RandomtXiGunProducer.cc
  src/FlatRandomEThetaGunProducer.cc
  src/FlatRandomOneOverPtGunProducer.cc
  src/MultiParticleInConeGunProducer.cc
  src/FlatEGunASCIIWriter.cc
  src/FileRandomKEThetaGunProducer.cc
  src/BaseFlatGunProducer.cc
  src/FlatRandomPtAndDxyGunProducer.cc
  src/ExpoRandomPGunProducer.cc
  src/FlatRandomPtThetaGunProducer.cc
  src/FlatRandomPtGunProducer.cc
  src/ExpoRandomPtGunProducer.cc
  src/FlatRandomEGunProducer.cc
  src/FlatRandomMultiParticlePGunProducer.cc
)

target_include_directories(IOMCParticleGuns PUBLIC /usr/include/boost/python/)
target_include_directories(IOMCParticleGuns PUBLIC /usr/include/boost/filesystem/)
target_include_directories(IOMCParticleGuns PUBLIC /usr/include/python2.7/)
target_include_directories(IOMCParticleGuns PUBLIC /usr/include/root/)
target_include_directories(IOMCParticleGuns PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IOMCParticleGuns PUBLIC /home/teemperor/cms/md5/)
target_include_directories(IOMCParticleGuns PUBLIC /usr/include/boost/)
target_include_directories(IOMCParticleGuns PUBLIC /usr/include/boost/regex/)

