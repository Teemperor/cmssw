add_library(HiggsAnalysisSkimming OBJECT 
  src/SealModule.cc
  src/HiggsToWW2LeptonsSkim.cc
  src/HiggsToZZ4LeptonsSkim.cc
  src/HiggsToZZ4LeptonsSkimEff.cc
  src/HiggsTo2GammaSkim.cc
  src/HiggsToZZ4LeptonsPreFilter.cc
  src/HeavyChHiggsToTauNuSkim.cc
)

target_include_directories(HiggsAnalysisSkimming PUBLIC /usr/include/boost/python/)
target_include_directories(HiggsAnalysisSkimming PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HiggsAnalysisSkimming PUBLIC /usr/include/python2.7/)
target_include_directories(HiggsAnalysisSkimming PUBLIC /usr/include/root/)
target_include_directories(HiggsAnalysisSkimming PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HiggsAnalysisSkimming PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HiggsAnalysisSkimming PUBLIC /usr/include/boost/)
target_include_directories(HiggsAnalysisSkimming PUBLIC /usr/include/boost/regex/)

