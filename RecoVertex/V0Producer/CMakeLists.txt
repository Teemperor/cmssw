add_subdirectory(test)
add_library(RecoVertexV0Producer OBJECT 
  src/V0Producer.cc
  src/V0Fitter.cc
)

target_include_directories(RecoVertexV0Producer PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVertexV0Producer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVertexV0Producer PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVertexV0Producer PUBLIC /usr/include/root/)
target_include_directories(RecoVertexV0Producer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVertexV0Producer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVertexV0Producer PUBLIC /usr/include/boost/)
target_include_directories(RecoVertexV0Producer PUBLIC /usr/include/boost/regex/)

