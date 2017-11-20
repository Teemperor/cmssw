add_subdirectory(test)
add_library(RecoTrackerTkMSParametrization OBJECT 
  src/PixelRecoUtilities.cc
  src/MSLayersAtAngle.cc
  src/MultipleScatteringX0Data.cc
  src/MSLayersKeeperX0DetLayer.cc
  src/MSLayer.cc
  src/MultipleScatteringParametrisation.cc
  src/MSLayersKeeperX0AtEta.cc
  src/MultipleScatteringGeometry.cc
  src/MSLayersKeeperX0Averaged.cc
)

target_include_directories(RecoTrackerTkMSParametrization PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerTkMSParametrization PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerTkMSParametrization PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerTkMSParametrization PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerTkMSParametrization PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerTkMSParametrization PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerTkMSParametrization PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerTkMSParametrization PUBLIC /usr/include/boost/regex/)

