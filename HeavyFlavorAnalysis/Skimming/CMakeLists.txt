add_subdirectory(plugins)
add_library(HeavyFlavorAnalysisSkimming OBJECT 
  src/Tau3MuReco.cc
  src/Combinatorics.cc
)

target_include_directories(HeavyFlavorAnalysisSkimming PUBLIC /usr/include/boost/python/)
target_include_directories(HeavyFlavorAnalysisSkimming PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HeavyFlavorAnalysisSkimming PUBLIC /usr/include/python2.7/)
target_include_directories(HeavyFlavorAnalysisSkimming PUBLIC /usr/include/root/)
target_include_directories(HeavyFlavorAnalysisSkimming PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HeavyFlavorAnalysisSkimming PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HeavyFlavorAnalysisSkimming PUBLIC /usr/include/boost/)
target_include_directories(HeavyFlavorAnalysisSkimming PUBLIC /usr/include/boost/regex/)

