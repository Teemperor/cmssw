add_library(L1TriggerCSCTriggerPrimitivesAnalyzer OBJECT 
  CSCCathodeLCTAnalyzer.cc
  CSCAnodeLCTAnalyzer.cc
  L1CSCTPEmulatorConfigAnalyzer.cc
)

target_include_directories(L1TriggerCSCTriggerPrimitivesAnalyzer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(L1TriggerCSCTriggerPrimitivesAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerCSCTriggerPrimitivesAnalyzer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(L1TriggerCSCTriggerPrimitivesAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerCSCTriggerPrimitivesAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerCSCTriggerPrimitivesAnalyzer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(L1TriggerCSCTriggerPrimitivesAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerCSCTriggerPrimitivesAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerCSCTriggerPrimitivesAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerCSCTriggerPrimitivesAnalyzer PUBLIC /usr/include/root/)
target_include_directories(L1TriggerCSCTriggerPrimitivesAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerCSCTriggerPrimitivesAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(CSCTriggerPrimitivesReader OBJECT 
  CSCTriggerPrimitivesReader.cc
)

target_include_directories(CSCTriggerPrimitivesReader PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CSCTriggerPrimitivesReader PUBLIC /usr/include/python2.7/)
target_include_directories(CSCTriggerPrimitivesReader PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CSCTriggerPrimitivesReader PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCTriggerPrimitivesReader PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCTriggerPrimitivesReader PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CSCTriggerPrimitivesReader PUBLIC /usr/include/boost/)
target_include_directories(CSCTriggerPrimitivesReader PUBLIC /usr/include/boost/python/)
target_include_directories(CSCTriggerPrimitivesReader PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCTriggerPrimitivesReader PUBLIC /usr/include/root/)
target_include_directories(CSCTriggerPrimitivesReader PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCTriggerPrimitivesReader PUBLIC /usr/include/boost/regex/)

add_library(CSCTriggerPrimitivesDQM OBJECT 
  CSCTriggerPrimitivesDQM.cc
)

target_include_directories(CSCTriggerPrimitivesDQM PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CSCTriggerPrimitivesDQM PUBLIC /usr/include/python2.7/)
target_include_directories(CSCTriggerPrimitivesDQM PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CSCTriggerPrimitivesDQM PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(CSCTriggerPrimitivesDQM PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCTriggerPrimitivesDQM PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCTriggerPrimitivesDQM PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CSCTriggerPrimitivesDQM PUBLIC /usr/include/boost/)
target_include_directories(CSCTriggerPrimitivesDQM PUBLIC /usr/include/boost/python/)
target_include_directories(CSCTriggerPrimitivesDQM PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCTriggerPrimitivesDQM PUBLIC /usr/include/root/)
target_include_directories(CSCTriggerPrimitivesDQM PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCTriggerPrimitivesDQM PUBLIC /usr/include/boost/regex/)

