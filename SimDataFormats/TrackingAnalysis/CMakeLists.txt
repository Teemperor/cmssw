add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsTrackingAnalysissrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/TrackingAnalysis/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsTrackingAnalysissrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/TrackingAnalysis/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/TrackingAnalysis/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/TrackingAnalysis/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsTrackingAnalysissrcclassesh")

add_library(SimDataFormatsTrackingAnalysis OBJECT 
  src/TrackingVertex.cc
  src/TrackingParticle.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsTrackingAnalysissrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsTrackingAnalysis PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsTrackingAnalysis PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsTrackingAnalysis PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsTrackingAnalysis PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsTrackingAnalysis PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsTrackingAnalysis PUBLIC /usr/include/boost/regex/)

