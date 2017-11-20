add_subdirectory(plugins)
add_library(TopQuarkAnalysisTopKinFitter OBJECT 
  src/TtFullHadKinFitter.cc
  src/TtFullLepKinSolver.cc
  src/StKinFitter.cc
  src/CovarianceMatrix.cc
  src/TtSemiLepKinFitter.cc
  src/TopKinFitter.cc
)

target_include_directories(TopQuarkAnalysisTopKinFitter PUBLIC /usr/include/boost/python/)
target_include_directories(TopQuarkAnalysisTopKinFitter PUBLIC /usr/include/boost/iostreams/)
target_include_directories(TopQuarkAnalysisTopKinFitter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TopQuarkAnalysisTopKinFitter PUBLIC /usr/include/python2.7/)
target_include_directories(TopQuarkAnalysisTopKinFitter PUBLIC /usr/include/root/)
target_include_directories(TopQuarkAnalysisTopKinFitter PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(TopQuarkAnalysisTopKinFitter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TopQuarkAnalysisTopKinFitter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TopQuarkAnalysisTopKinFitter PUBLIC /usr/include/boost/serialization/)
target_include_directories(TopQuarkAnalysisTopKinFitter PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(TopQuarkAnalysisTopKinFitter PUBLIC /usr/include/boost/)
target_include_directories(TopQuarkAnalysisTopKinFitter PUBLIC /usr/include/boost/regex/)

