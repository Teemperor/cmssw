add_library(HLTriggerHLTanalyzers OBJECT 
  src/HLTrigReport.cc
  src/HLTGetRaw.cc
  src/SealModule.cc
  src/HLTInfo.cc
  src/HLTGetDigi.cc
  src/RECOVertex.cc
  src/HLTMessages.cc
  src/HLTMCtruth.cc
  src/HLTBitAnalyzer.cc
  src/EventHeader.cc
)

target_include_directories(HLTriggerHLTanalyzers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /usr/include/python2.7/)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /usr/include/boost/serialization/)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /usr/include/boost/)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /usr/include/eigen3/)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /usr/include/boost/python/)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /usr/include/root/)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(HLTriggerHLTanalyzers PUBLIC /usr/include/boost/regex/)

