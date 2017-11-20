add_library(RecoVertexVertexPrimitives OBJECT 
  src/CachingVertex.cc
  src/VertexState.cc
  src/VertexTrack.cc
  src/TransientVertex.cc
  src/BasicVertexState.cc
  src/BasicSingleVertexState.cc
)

target_include_directories(RecoVertexVertexPrimitives PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVertexVertexPrimitives PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVertexVertexPrimitives PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVertexVertexPrimitives PUBLIC /usr/include/root/)
target_include_directories(RecoVertexVertexPrimitives PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVertexVertexPrimitives PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVertexVertexPrimitives PUBLIC /usr/include/boost/)
target_include_directories(RecoVertexVertexPrimitives PUBLIC /usr/include/boost/regex/)

