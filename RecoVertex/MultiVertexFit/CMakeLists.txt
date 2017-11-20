add_library(RecoVertexMultiVertexFit OBJECT 
  src/MultiVertexReconstructor.cc
  src/MultiVertexBSeeder.cc
  src/LinTrackCache.cc
  src/MultiVertexFitter.cc
  src/DefaultMVFAnnealing.cc
  src/LinPtFinderFromAdaptiveFitter.cc
)

target_include_directories(RecoVertexMultiVertexFit PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVertexMultiVertexFit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVertexMultiVertexFit PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVertexMultiVertexFit PUBLIC /usr/include/root/)
target_include_directories(RecoVertexMultiVertexFit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVertexMultiVertexFit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVertexMultiVertexFit PUBLIC /usr/include/boost/)
target_include_directories(RecoVertexMultiVertexFit PUBLIC /usr/include/boost/regex/)

