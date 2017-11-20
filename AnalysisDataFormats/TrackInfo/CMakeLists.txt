add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/AnalysisDataFormatsTrackInfosrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/AnalysisDataFormats/TrackInfo/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/AnalysisDataFormatsTrackInfosrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/AnalysisDataFormats/TrackInfo/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/AnalysisDataFormats/TrackInfo/src/classes.h /home/teemperor/cms/cmssw/AnalysisDataFormats/TrackInfo/src/classes_def.xml
  COMMENT "Generating ROOT dict AnalysisDataFormatsTrackInfosrcclassesh")

add_library(AnalysisDataFormatsTrackInfo OBJECT 
  src/RecoTracktoTP.cc
  src/TrackInfo.cc
  src/TPtoRecoTrack.cc
  src/TrackingRecHitInfo.cc
  ${CMAKE_BINARY_DIR}/AnalysisDataFormatsTrackInfosrcclassesh_rflx.cpp
)

target_include_directories(AnalysisDataFormatsTrackInfo PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AnalysisDataFormatsTrackInfo PUBLIC /usr/include/root/)
target_include_directories(AnalysisDataFormatsTrackInfo PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AnalysisDataFormatsTrackInfo PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AnalysisDataFormatsTrackInfo PUBLIC /usr/include/boost/)
target_include_directories(AnalysisDataFormatsTrackInfo PUBLIC /usr/include/boost/regex/)

