add_subdirectory(test)
add_library(RecoVertexGaussianSumVertexFit OBJECT 
  src/GsfVertexMerger.cc
  src/VertexGaussianStateConversions.cc
  src/GsfVertexUpdator.cc
  src/GsfVertexSmoother.cc
  src/BasicMultiVertexState.cc
  src/GsfVertexFitter.cc
  src/MultiPerigeeLTSFactory.cc
  src/GsfVertexTrackCompatibilityEstimator.cc
  src/MultiVertexStateCombiner.cc
  src/GsfVertexWeightCalculator.cc
  src/MultiRefittedTS.cc
  src/AdaptiveGsfVertexFitter.cc
  src/PerigeeMultiLTS.cc
)

target_include_directories(RecoVertexGaussianSumVertexFit PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVertexGaussianSumVertexFit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVertexGaussianSumVertexFit PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVertexGaussianSumVertexFit PUBLIC /usr/include/root/)
target_include_directories(RecoVertexGaussianSumVertexFit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVertexGaussianSumVertexFit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVertexGaussianSumVertexFit PUBLIC /usr/include/boost/)
target_include_directories(RecoVertexGaussianSumVertexFit PUBLIC /usr/include/boost/regex/)

