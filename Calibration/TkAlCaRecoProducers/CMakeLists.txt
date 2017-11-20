add_subdirectory(test)
add_subdirectory(plugins)
add_library(CalibrationTkAlCaRecoProducers OBJECT 
  src/AlcaBeamSpotManager.cc
  src/CalibrationTrackSelector.cc
)

target_include_directories(CalibrationTkAlCaRecoProducers PUBLIC /usr/include/boost/python/)
target_include_directories(CalibrationTkAlCaRecoProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibrationTkAlCaRecoProducers PUBLIC /usr/include/python2.7/)
target_include_directories(CalibrationTkAlCaRecoProducers PUBLIC /usr/include/root/)
target_include_directories(CalibrationTkAlCaRecoProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibrationTkAlCaRecoProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibrationTkAlCaRecoProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibrationTkAlCaRecoProducers PUBLIC /usr/include/boost/)
target_include_directories(CalibrationTkAlCaRecoProducers PUBLIC /usr/include/boost/regex/)

