add_subdirectory(test)
add_subdirectory(plugins)
add_library(CondCoreDBOutputService OBJECT 
  src/PoolDBOutputService.cc
)

target_include_directories(CondCoreDBOutputService PUBLIC /usr/include/boost/python/)
target_include_directories(CondCoreDBOutputService PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondCoreDBOutputService PUBLIC /usr/include/python2.7/)
target_include_directories(CondCoreDBOutputService PUBLIC /usr/include/root/)
target_include_directories(CondCoreDBOutputService PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondCoreDBOutputService PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondCoreDBOutputService PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondCoreDBOutputService PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondCoreDBOutputService PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondCoreDBOutputService PUBLIC /usr/include/boost/)
target_include_directories(CondCoreDBOutputService PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondCoreDBOutputService PUBLIC /usr/include/boost/regex/)

