add_library(EgammaAnalysisCSA07Skims OBJECT 
  src/SealModule.cc
  src/EgammaProbeSelector.cc
)

target_include_directories(EgammaAnalysisCSA07Skims PUBLIC /usr/include/boost/python/)
target_include_directories(EgammaAnalysisCSA07Skims PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EgammaAnalysisCSA07Skims PUBLIC /usr/include/python2.7/)
target_include_directories(EgammaAnalysisCSA07Skims PUBLIC /usr/include/root/)
target_include_directories(EgammaAnalysisCSA07Skims PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EgammaAnalysisCSA07Skims PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EgammaAnalysisCSA07Skims PUBLIC /usr/include/boost/)
target_include_directories(EgammaAnalysisCSA07Skims PUBLIC /usr/include/boost/regex/)

