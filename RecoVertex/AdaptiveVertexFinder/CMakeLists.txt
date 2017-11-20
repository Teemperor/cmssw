add_subdirectory(plugins)
add_library(RecoVertexAdaptiveVertexFinder OBJECT 
  src/TracksClusteringFromDisplacedSeed.cc
  src/AdaptiveVertexReconstructor.cc
  src/VertexMerging.cc
)

target_include_directories(RecoVertexAdaptiveVertexFinder PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVertexAdaptiveVertexFinder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVertexAdaptiveVertexFinder PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVertexAdaptiveVertexFinder PUBLIC /usr/include/root/)
target_include_directories(RecoVertexAdaptiveVertexFinder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVertexAdaptiveVertexFinder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVertexAdaptiveVertexFinder PUBLIC /usr/include/boost/)
target_include_directories(RecoVertexAdaptiveVertexFinder PUBLIC /usr/include/boost/regex/)

