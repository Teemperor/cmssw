add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoLocalTrackerSiStripRecHitConverter OBJECT 
  src/StripCPE.cc
  src/SiStripRecHitMatcher.cc
  src/VVIObj.cc
  src/StripCPEfromTemplate.cc
  src/CrosstalkInversion.cc
  src/StripCPEfromTrackAngle.cc
  src/SiStripTemplateSplit.cc
  src/SiStripTemplate.cc
  src/SiStripRecHitConverterAlgorithm.cc
  src/StripCPEgeometric.cc
  src/SiStripTemplateReco.cc
)

target_include_directories(RecoLocalTrackerSiStripRecHitConverter PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalTrackerSiStripRecHitConverter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalTrackerSiStripRecHitConverter PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalTrackerSiStripRecHitConverter PUBLIC /usr/include/root/)
target_include_directories(RecoLocalTrackerSiStripRecHitConverter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalTrackerSiStripRecHitConverter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalTrackerSiStripRecHitConverter PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalTrackerSiStripRecHitConverter PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalTrackerSiStripRecHitConverter PUBLIC /usr/include/boost/regex/)

