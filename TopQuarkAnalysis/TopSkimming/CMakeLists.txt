add_subdirectory(plugins)
add_library(TopQuarkAnalysisTopSkimming OBJECT 
  src/TtDecayChannelSelector.cc
)

target_include_directories(TopQuarkAnalysisTopSkimming PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TopQuarkAnalysisTopSkimming PUBLIC /usr/include/root/)
target_include_directories(TopQuarkAnalysisTopSkimming PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TopQuarkAnalysisTopSkimming PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TopQuarkAnalysisTopSkimming PUBLIC /usr/include/boost/)
target_include_directories(TopQuarkAnalysisTopSkimming PUBLIC /usr/include/boost/regex/)

