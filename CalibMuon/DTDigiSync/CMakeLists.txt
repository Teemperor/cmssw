add_library(CalibMuonDTDigiSync OBJECT 
  src/DTTTrigSyncT0Only.cc
  src/DTTTrigSyncTOFCorr.cc
  src/DTTTrigSyncFactory.cc
  src/DTTTrigSyncFromDB.cc
  src/DTTTrigBaseSync.cc
)

target_include_directories(CalibMuonDTDigiSync PUBLIC /usr/include/boost/python/)
target_include_directories(CalibMuonDTDigiSync PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibMuonDTDigiSync PUBLIC /usr/include/python2.7/)
target_include_directories(CalibMuonDTDigiSync PUBLIC /usr/include/root/)
target_include_directories(CalibMuonDTDigiSync PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibMuonDTDigiSync PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibMuonDTDigiSync PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibMuonDTDigiSync PUBLIC /usr/include/boost/)
target_include_directories(CalibMuonDTDigiSync PUBLIC /usr/include/boost/regex/)

