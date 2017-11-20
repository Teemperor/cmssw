add_subdirectory(test)
add_subdirectory(plugins)
add_library(GeneratorInterfaceAlpgenInterface OBJECT 
  src/AlpgenHeader.cc
  src/AlpgenEventRecordFixes.cc
)

target_include_directories(GeneratorInterfaceAlpgenInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceAlpgenInterface PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceAlpgenInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceAlpgenInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceAlpgenInterface PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceAlpgenInterface PUBLIC /usr/include/boost/regex/)

