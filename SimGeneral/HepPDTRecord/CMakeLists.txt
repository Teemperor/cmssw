add_subdirectory(test)
add_library(SimGeneralHepPDTRecord OBJECT 
  src/PdtEntry.cc
  src/ES_ParticleDataTable.cc
  src/PDTRecord.cc
)

target_include_directories(SimGeneralHepPDTRecord PUBLIC /usr/include/boost/python/)
target_include_directories(SimGeneralHepPDTRecord PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimGeneralHepPDTRecord PUBLIC /usr/include/python2.7/)
target_include_directories(SimGeneralHepPDTRecord PUBLIC /usr/include/root/)
target_include_directories(SimGeneralHepPDTRecord PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimGeneralHepPDTRecord PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimGeneralHepPDTRecord PUBLIC /usr/include/boost/)
target_include_directories(SimGeneralHepPDTRecord PUBLIC /usr/include/boost/regex/)

