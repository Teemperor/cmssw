add_subdirectory(plugins)
add_library(CommonToolsPileupAlgos OBJECT 
  src/PuppiContainer.cc
  src/PuppiAlgo.cc
)

target_include_directories(CommonToolsPileupAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CommonToolsPileupAlgos PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(CommonToolsPileupAlgos PUBLIC /usr/include/root/)
target_include_directories(CommonToolsPileupAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CommonToolsPileupAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CommonToolsPileupAlgos PUBLIC /usr/include/boost/)
target_include_directories(CommonToolsPileupAlgos PUBLIC /usr/include/boost/regex/)

