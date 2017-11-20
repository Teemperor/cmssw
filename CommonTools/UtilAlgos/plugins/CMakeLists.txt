add_library(CommonToolsToolsUtilAlgos_plugins OBJECT 
  SealModule.cc
  StopAfterNEvents.cc
  DoubleProducer.cc
  EventCountProducer.cc
  TFileService.cc
)

target_include_directories(CommonToolsToolsUtilAlgos_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(CommonToolsToolsUtilAlgos_plugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CommonToolsToolsUtilAlgos_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CommonToolsToolsUtilAlgos_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(CommonToolsToolsUtilAlgos_plugins PUBLIC /usr/include/root/)
target_include_directories(CommonToolsToolsUtilAlgos_plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CommonToolsToolsUtilAlgos_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CommonToolsToolsUtilAlgos_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CommonToolsToolsUtilAlgos_plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CommonToolsToolsUtilAlgos_plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CommonToolsToolsUtilAlgos_plugins PUBLIC /usr/include/boost/)
target_include_directories(CommonToolsToolsUtilAlgos_plugins PUBLIC /usr/include/boost/regex/)

