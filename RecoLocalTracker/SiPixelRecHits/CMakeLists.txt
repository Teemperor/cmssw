add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoLocalTrackerSiPixelRecHits OBJECT 
  src/PixelCPETemplateReco.cc
  src/SiPixelTemplateReco.cc
  src/SealModules.cc
  src/VVIObj.cc
  src/PixelCPEGeneric.cc
  src/SiPixelTemplate2D.cc
  src/SiPixelTemplateSplit.cc
  src/SiPixelGenError.cc
  src/PixelCPEBase.cc
  src/VVIObjF.cc
  src/SiPixelTemplate.cc
)

target_include_directories(RecoLocalTrackerSiPixelRecHits PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalTrackerSiPixelRecHits PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalTrackerSiPixelRecHits PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalTrackerSiPixelRecHits PUBLIC /usr/include/root/)
target_include_directories(RecoLocalTrackerSiPixelRecHits PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalTrackerSiPixelRecHits PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalTrackerSiPixelRecHits PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoLocalTrackerSiPixelRecHits PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalTrackerSiPixelRecHits PUBLIC /usr/include/boost/regex/)

