add_subdirectory(plugins)
add_library(FWCorePrescaleService OBJECT 
  src/PrescaleService.cc
)

target_include_directories(FWCorePrescaleService PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCorePrescaleService PUBLIC /usr/include/root/)
target_include_directories(FWCorePrescaleService PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCorePrescaleService PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCorePrescaleService PUBLIC /usr/include/boost/)
target_include_directories(FWCorePrescaleService PUBLIC /usr/include/boost/regex/)

