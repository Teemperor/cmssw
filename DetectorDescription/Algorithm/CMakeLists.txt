add_subdirectory(plugins)
add_library(DetectorDescriptionAlgorithm OBJECT 
  src/DDAngular.cc
  src/DDAlgorithmHandler.cc
  src/DDAlgorithm.cc
  src/DDAlgorithmFactory.cc
  src/DDLinear.cc
)

target_include_directories(DetectorDescriptionAlgorithm PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetectorDescriptionAlgorithm PUBLIC /usr/include/root/)
target_include_directories(DetectorDescriptionAlgorithm PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetectorDescriptionAlgorithm PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetectorDescriptionAlgorithm PUBLIC /usr/include/boost/)
target_include_directories(DetectorDescriptionAlgorithm PUBLIC /usr/include/boost/regex/)

