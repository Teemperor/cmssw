add_library(DQMSiPixelPhase1Common OBJECT 
  src/SummationSpecification.cc
  src/SiPixelPhase1Base.cc
  src/GeometryInterface.cc
  src/SiPixelPhase1Harvester.cc
  src/HistogramManager.cc
  src/SiPixelCoordinates.cc
)

target_include_directories(DQMSiPixelPhase1Common PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /usr/include/boost/)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /usr/include/root/)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMSiPixelPhase1Common PUBLIC /usr/include/boost/regex/)

