add_subdirectory(plugins)
add_library(SimGeneralMixingModule OBJECT 
  src/DigiAccumulatorMixMod.cc
  src/DigiAccumulatorMixModFactory.cc
)

target_include_directories(SimGeneralMixingModule PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimGeneralMixingModule PUBLIC /usr/include/root/)
target_include_directories(SimGeneralMixingModule PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimGeneralMixingModule PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimGeneralMixingModule PUBLIC /usr/include/boost/)
target_include_directories(SimGeneralMixingModule PUBLIC /usr/include/boost/regex/)

