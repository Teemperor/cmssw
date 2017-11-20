add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_library(ElectroWeakAnalysisZMuMu OBJECT 
  src/ZMuStandaloneScaledFunction.cc
  src/ZMuMuFunction.cc
  src/ZMuMuBack.cc
  src/ZMuMuNormalBack.cc
  src/ZMuTrackFunction.cc
  src/ZMuTrackScaledFunction.cc
  src/ZMuTrackScaledNormalBack.cc
  src/ZMuMuBackNorm.cc
  src/ZMuStandaloneFunction.cc
  src/ZMuMuScaledFunction.cc
)

target_include_directories(ElectroWeakAnalysisZMuMu PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ElectroWeakAnalysisZMuMu PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ElectroWeakAnalysisZMuMu PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ElectroWeakAnalysisZMuMu PUBLIC /usr/include/boost/)
target_include_directories(ElectroWeakAnalysisZMuMu PUBLIC /usr/include/root/)
target_include_directories(ElectroWeakAnalysisZMuMu PUBLIC /usr/include/boost/regex/)

