add_subdirectory(test)
add_library(UtilitiesGeneral OBJECT 
  src/Tokenizer.cc
  src/FileInPath.cc
  src/ClassName.cc
)

target_include_directories(UtilitiesGeneral PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(UtilitiesGeneral PUBLIC /home/teemperor/cms/md5/)
target_include_directories(UtilitiesGeneral PUBLIC /usr/include/boost/filesystem/)
target_include_directories(UtilitiesGeneral PUBLIC /usr/include/boost/)
target_include_directories(UtilitiesGeneral PUBLIC /usr/include/root/)
target_include_directories(UtilitiesGeneral PUBLIC /usr/include/boost/regex/)

