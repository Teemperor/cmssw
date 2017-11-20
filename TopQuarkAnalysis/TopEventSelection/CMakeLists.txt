add_subdirectory(plugins)
add_library(TopQuarkAnalysisTopEventSelection OBJECT 
  src/TtSemiLepSignalSel.cc
  src/TtDilepLRSignalSelObservables.cc
  src/TtSemiLRSignalSelObservables.cc
  src/TtFullHadSignalSel.cc
  src/TtHadLRSignalSelObservables.cc
  src/TtHadLRSignalSelCalc.cc
  src/TtSemiLRSignalSelCalc.cc
)

target_include_directories(TopQuarkAnalysisTopEventSelection PUBLIC /usr/include/boost/python/)
target_include_directories(TopQuarkAnalysisTopEventSelection PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TopQuarkAnalysisTopEventSelection PUBLIC /usr/include/python2.7/)
target_include_directories(TopQuarkAnalysisTopEventSelection PUBLIC /usr/include/root/)
target_include_directories(TopQuarkAnalysisTopEventSelection PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TopQuarkAnalysisTopEventSelection PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TopQuarkAnalysisTopEventSelection PUBLIC /usr/include/boost/serialization/)
target_include_directories(TopQuarkAnalysisTopEventSelection PUBLIC /usr/include/boost/)
target_include_directories(TopQuarkAnalysisTopEventSelection PUBLIC /usr/include/boost/regex/)

