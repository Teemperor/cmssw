add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsHcalIsolatedTracksrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/HcalIsolatedTrack/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsHcalIsolatedTracksrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/HcalIsolatedTrack/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/HcalIsolatedTrack/src/classes.h /home/teemperor/cms/cmssw/DataFormats/HcalIsolatedTrack/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsHcalIsolatedTracksrcclassesh")

add_library(DataFormatsHcalIsolatedTrack OBJECT 
  src/EcalIsolatedParticleCandidate.cc
  src/HcalIsolatedTrackCandidate.cc
  src/IsolatedPixelTrackCandidate.cc
  ${CMAKE_BINARY_DIR}/DataFormatsHcalIsolatedTracksrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsHcalIsolatedTrack PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsHcalIsolatedTrack PUBLIC /usr/include/root/)
target_include_directories(DataFormatsHcalIsolatedTrack PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsHcalIsolatedTrack PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsHcalIsolatedTrack PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsHcalIsolatedTrack PUBLIC /usr/include/boost/regex/)

