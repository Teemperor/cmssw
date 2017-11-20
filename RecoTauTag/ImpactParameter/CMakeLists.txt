add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoTauTagImpactParameter OBJECT 
  src/LagrangeMultipliersFitter.cc
  src/TrackTools.cc
  src/ImpactParameterAlgorithm.cc
  src/Chi2VertexFitter.cc
  src/ErrorMatrixPropagator.cc
  src/TrackHelixVertexFitter.cc
  src/LorentzVectorParticle.cc
  src/TauA1NuConstrainedFitter.cc
  src/ParticleBuilder.cc
  src/TrackParticle.cc
  src/MultiProngTauSolver.cc
)

target_include_directories(RecoTauTagImpactParameter PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTauTagImpactParameter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTauTagImpactParameter PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTauTagImpactParameter PUBLIC /usr/include/root/)
target_include_directories(RecoTauTagImpactParameter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTauTagImpactParameter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTauTagImpactParameter PUBLIC /usr/include/boost/)
target_include_directories(RecoTauTagImpactParameter PUBLIC /usr/include/boost/regex/)

