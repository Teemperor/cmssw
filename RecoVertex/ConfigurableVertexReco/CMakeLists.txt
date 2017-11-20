add_subdirectory(test)
add_library(RecoVertexConfigurableVertexReco OBJECT 
  src/ConfigurableAdaptiveFitter.cc
  src/ConfigurableAdaptiveReconstructor.cc
  src/ConfigurableKalmanFitter.cc
  src/ConfigurableVertexFitter.cc
  src/VertexRecoManager.cc
  src/ConfigurableVertexReconstructor.cc
  src/ReconstructorFromFitter.cc
  src/AbstractConfFitter.cc
  src/VertexFitterManager.cc
  src/ConfigurableAnnealing.cc
  src/ConfigurableMultiVertexFitter.cc
  src/ConfigurableTrimmedKalmanFinder.cc
)

target_include_directories(RecoVertexConfigurableVertexReco PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVertexConfigurableVertexReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVertexConfigurableVertexReco PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVertexConfigurableVertexReco PUBLIC /usr/include/root/)
target_include_directories(RecoVertexConfigurableVertexReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVertexConfigurableVertexReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVertexConfigurableVertexReco PUBLIC /usr/include/boost/)
target_include_directories(RecoVertexConfigurableVertexReco PUBLIC /usr/include/boost/regex/)

