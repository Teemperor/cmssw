add_subdirectory(test)
add_subdirectory(plugins)
add_library(TopQuarkAnalysisTopTools OBJECT 
  src/LRHelpFunctions.cc
  src/MEzCalculator.cc
  src/JetPartonMatching.cc
)

target_include_directories(TopQuarkAnalysisTopTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TopQuarkAnalysisTopTools PUBLIC /usr/include/root/)
target_include_directories(TopQuarkAnalysisTopTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TopQuarkAnalysisTopTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TopQuarkAnalysisTopTools PUBLIC /usr/include/boost/serialization/)
target_include_directories(TopQuarkAnalysisTopTools PUBLIC /usr/include/boost/)
target_include_directories(TopQuarkAnalysisTopTools PUBLIC /usr/include/boost/regex/)

