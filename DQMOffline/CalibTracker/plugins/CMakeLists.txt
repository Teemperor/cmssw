add_library(DQMOfflineCalibTrackerplugins OBJECT 
  SiStripBadComponentsDQMServiceReader.cc
  SealModules.cc
  SiStripFEDErrorsDQM.cc
  SiStripBadComponentsDQMService.cc
  SiStripQualityHotStripIdentifierRoot.cc
  SiStripNoisesDQMService.cc
  SiStripPedestalsDQMService.cc
)

target_include_directories(DQMOfflineCalibTrackerplugins PUBLIC /usr/include/python2.7/)
target_include_directories(DQMOfflineCalibTrackerplugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMOfflineCalibTrackerplugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMOfflineCalibTrackerplugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMOfflineCalibTrackerplugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMOfflineCalibTrackerplugins PUBLIC /usr/include/boost/)
target_include_directories(DQMOfflineCalibTrackerplugins PUBLIC /usr/include/boost/python/)
target_include_directories(DQMOfflineCalibTrackerplugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMOfflineCalibTrackerplugins PUBLIC /usr/include/root/)
target_include_directories(DQMOfflineCalibTrackerplugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMOfflineCalibTrackerplugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMOfflineCalibTrackerplugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMOfflineCalibTrackerplugins PUBLIC /usr/include/boost/regex/)

