add_subdirectory(test)
add_subdirectory(plugins)
add_library(CalibTrackerSiPixelConnectivity OBJECT 
  src/PixelToLNKAssociateFromAscii.cc
  src/module.cc
  src/PixelToFEDAssociateFromAscii.cc
  src/PixelEndcapLinkMaker.cc
  src/PixelBarrelLinkMaker.cc
  src/SiPixelFedCablingMapBuilder.cc
)

target_include_directories(CalibTrackerSiPixelConnectivity PUBLIC /usr/include/boost/python/)
target_include_directories(CalibTrackerSiPixelConnectivity PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerSiPixelConnectivity PUBLIC /usr/include/python2.7/)
target_include_directories(CalibTrackerSiPixelConnectivity PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerSiPixelConnectivity PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerSiPixelConnectivity PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerSiPixelConnectivity PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibTrackerSiPixelConnectivity PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerSiPixelConnectivity PUBLIC /usr/include/boost/regex/)

