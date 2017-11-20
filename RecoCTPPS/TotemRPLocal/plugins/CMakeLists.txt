add_library(RecoCTPPSTotemRPLocalPlugins OBJECT 
  CTPPSDiamondLocalTrackFitter.cc
  CTPPSDiamondRecHitProducer.cc
  TotemRPUVPatternFinder.cc
  CTPPSLocalTrackLiteProducer.cc
  TotemRPClusterProducer.cc
  TotemRPLocalTrackFitter.cc
  TotemRPRecHitProducer.cc
)

target_include_directories(RecoCTPPSTotemRPLocalPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoCTPPSTotemRPLocalPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoCTPPSTotemRPLocalPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoCTPPSTotemRPLocalPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoCTPPSTotemRPLocalPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoCTPPSTotemRPLocalPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoCTPPSTotemRPLocalPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoCTPPSTotemRPLocalPlugins PUBLIC /usr/include/boost/regex/)

