add_library(testTauEmbeddingProducers OBJECT 
  TestDriver.cpp
)

target_include_directories(testTauEmbeddingProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testTauEmbeddingProducers PUBLIC /usr/include/root/)
target_include_directories(testTauEmbeddingProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testTauEmbeddingProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testTauEmbeddingProducers PUBLIC /usr/include/boost/)
target_include_directories(testTauEmbeddingProducers PUBLIC /usr/include/boost/regex/)

