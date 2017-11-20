add_subdirectory(plugins)
add_library(RecoCTPPSTotemRPLocal OBJECT 
  src/CTPPSDiamondRecHitProducerAlgorithm.cc
  src/TotemRPRecHitProducerAlgorithm.cc
  src/TotemRPLocalTrackFitterAlgorithm.cc
  src/FastLineRecognition.cc
  src/CTPPSDiamondTrackRecognition.cc
  src/TotemRPClusterProducerAlgorithm.cc
)

target_include_directories(RecoCTPPSTotemRPLocal PUBLIC /usr/include/boost/python/)
target_include_directories(RecoCTPPSTotemRPLocal PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoCTPPSTotemRPLocal PUBLIC /usr/include/python2.7/)
target_include_directories(RecoCTPPSTotemRPLocal PUBLIC /usr/include/root/)
target_include_directories(RecoCTPPSTotemRPLocal PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoCTPPSTotemRPLocal PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoCTPPSTotemRPLocal PUBLIC /usr/include/boost/)
target_include_directories(RecoCTPPSTotemRPLocal PUBLIC /usr/include/boost/regex/)

