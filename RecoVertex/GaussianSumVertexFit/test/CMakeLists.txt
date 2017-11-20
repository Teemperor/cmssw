add_library(GaussianSumVertexFitTest OBJECT 
  SealModule.cc
  TrackMix.cc
  GsfTest.cc
)

target_include_directories(GaussianSumVertexFitTest PUBLIC /usr/include/boost/python/)
target_include_directories(GaussianSumVertexFitTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GaussianSumVertexFitTest PUBLIC /usr/include/python2.7/)
target_include_directories(GaussianSumVertexFitTest PUBLIC /usr/include/root/)
target_include_directories(GaussianSumVertexFitTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GaussianSumVertexFitTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GaussianSumVertexFitTest PUBLIC /usr/include/boost/)
target_include_directories(GaussianSumVertexFitTest PUBLIC /usr/include/boost/regex/)

