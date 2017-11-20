add_library(DetectorDescriptionExprAlgo OBJECT 
  src/ExprEvalSingleton.cc
  src/ClhepEvaluator.cc
)

target_include_directories(DetectorDescriptionExprAlgo PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetectorDescriptionExprAlgo PUBLIC /usr/include/root/)
target_include_directories(DetectorDescriptionExprAlgo PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetectorDescriptionExprAlgo PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetectorDescriptionExprAlgo PUBLIC /usr/include/boost/)
target_include_directories(DetectorDescriptionExprAlgo PUBLIC /usr/include/boost/regex/)

