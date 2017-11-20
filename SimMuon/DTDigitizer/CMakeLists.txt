add_subdirectory(test)
add_subdirectory(plugins)
add_library(SimMuonDTDigitizer OBJECT 
  src/SealModule.cc
  src/DTDigiSyncTOFCorr.cc
  src/DTNeutronWriter.cc
  src/DTDigitizer.cc
  src/DTDigiSyncFromTable.cc
  src/DTDriftTimeParametrization.cc
  src/DTDigiSyncFactory.cc
  src/DTDigiReader.cc
)

target_include_directories(SimMuonDTDigitizer PUBLIC /usr/include/boost/python/)
target_include_directories(SimMuonDTDigitizer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimMuonDTDigitizer PUBLIC /usr/include/python2.7/)
target_include_directories(SimMuonDTDigitizer PUBLIC /usr/include/root/)
target_include_directories(SimMuonDTDigitizer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimMuonDTDigitizer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimMuonDTDigitizer PUBLIC /usr/include/boost/)
target_include_directories(SimMuonDTDigitizer PUBLIC /usr/include/boost/regex/)

