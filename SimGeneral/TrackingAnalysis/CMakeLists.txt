add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimGeneralTrackingAnalysissrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimGeneral/TrackingAnalysis/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimGeneralTrackingAnalysissrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimGeneral/TrackingAnalysis/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimGeneral/TrackingAnalysis/src/classes.h /home/teemperor/cms/cmssw/SimGeneral/TrackingAnalysis/src/classes_def.xml
  COMMENT "Generating ROOT dict SimGeneralTrackingAnalysissrcclassesh")

add_library(SimGeneralTrackingAnalysis OBJECT 
  src/PixelPSimHitSelector.cc
  src/EncodedTruthId.cc
  src/PSimHitSelector.cc
  src/TrackerPSimHitSelector.cc
  src/TrackingParticleNumberOfLayers.cc
  src/MuonPSimHitSelector.cc
  ${CMAKE_BINARY_DIR}/SimGeneralTrackingAnalysissrcclassesh_rflx.cpp
)

target_include_directories(SimGeneralTrackingAnalysis PUBLIC /usr/include/boost/python/)
target_include_directories(SimGeneralTrackingAnalysis PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimGeneralTrackingAnalysis PUBLIC /usr/include/python2.7/)
target_include_directories(SimGeneralTrackingAnalysis PUBLIC /usr/include/root/)
target_include_directories(SimGeneralTrackingAnalysis PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimGeneralTrackingAnalysis PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimGeneralTrackingAnalysis PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimGeneralTrackingAnalysis PUBLIC /usr/include/boost/)
target_include_directories(SimGeneralTrackingAnalysis PUBLIC /usr/include/boost/regex/)

