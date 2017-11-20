add_subdirectory(test)
add_library(DQMSiStripCommon OBJECT 
  src/TkHistoMap.cc
  src/SiStripFolderOrganizer.cc
  src/APVShotFinder.cc
  src/ExtractTObject.cc
  src/UpdateTProfile.cc
  src/SiStripHistoId.cc
  src/APVShot.cc
)

target_include_directories(DQMSiStripCommon PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiStripCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiStripCommon PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiStripCommon PUBLIC /usr/include/root/)
target_include_directories(DQMSiStripCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiStripCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiStripCommon PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMSiStripCommon PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMSiStripCommon PUBLIC /usr/include/boost/)
target_include_directories(DQMSiStripCommon PUBLIC /usr/include/boost/regex/)

