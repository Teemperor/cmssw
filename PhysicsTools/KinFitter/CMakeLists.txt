add_library(PhysicsToolsKinFitter OBJECT 
  src/TFitConstraintMGaus.cc
  src/TFitParticleMCSpher.cc
  src/TAbsFitParticle.cc
  src/TAbsFitConstraint.cc
  src/TSLToyGen.cc
  src/TFitConstraintEp.cc
  src/TFitParticleCart.cc
  src/TFitParticleMCMomDev.cc
  src/TFitParticleMCPInvSpher.cc
  src/TFitParticleESpher.cc
  src/TFitConstraintM.cc
  src/TFitParticleMCCart.cc
  src/TFitParticleEScaledMomDev.cc
  src/TFitParticleEMomDev.cc
  src/TFitParticleEtThetaPhi.cc
  src/TFitParticleSpher.cc
  src/TKinFitter.cc
  src/TFitParticleEtEtaPhi.cc
  src/TFitParticleECart.cc
  src/TFitParticleMomDev.cc
)

target_include_directories(PhysicsToolsKinFitter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsKinFitter PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsKinFitter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsKinFitter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsKinFitter PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsKinFitter PUBLIC /usr/include/boost/regex/)

