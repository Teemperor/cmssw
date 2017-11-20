add_library(TestFireworksCore OBJECT 
  unittest_fwconfiguration.cc
  unittest_selectionmanager.cc
  unittest_modelfilter.cc
  unittest_changemanager.cc
  unittest_main.cc
  unittest_fwmodelid.cc
  unittest_parameters.cc
  unittest_modelexpressionselector.cc
  unittest_eventitemsmanager.cc
)

target_include_directories(TestFireworksCore PUBLIC /usr/include/boost/python/)
target_include_directories(TestFireworksCore PUBLIC /usr/include/boost/iostreams/)
target_include_directories(TestFireworksCore PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFireworksCore PUBLIC /usr/include/python2.7/)
target_include_directories(TestFireworksCore PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(TestFireworksCore PUBLIC /usr/include/root/)
target_include_directories(TestFireworksCore PUBLIC /usr/include/boost/program_options/)
target_include_directories(TestFireworksCore PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFireworksCore PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(TestFireworksCore PUBLIC /usr/include/boost/serialization/)
target_include_directories(TestFireworksCore PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFireworksCore PUBLIC /usr/include/boost/)
target_include_directories(TestFireworksCore PUBLIC /usr/include/boost/system/)
target_include_directories(TestFireworksCore PUBLIC /usr/include/boost/regex/)

