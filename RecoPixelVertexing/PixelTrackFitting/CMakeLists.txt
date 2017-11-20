add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/RecoPixelVertexingPixelTrackFittingsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/RecoPixelVertexing/PixelTrackFitting/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/RecoPixelVertexingPixelTrackFittingsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/RecoPixelVertexing/PixelTrackFitting/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/RecoPixelVertexing/PixelTrackFitting/src/classes.h /home/teemperor/cms/cmssw/RecoPixelVertexing/PixelTrackFitting/src/classes_def.xml
  COMMENT "Generating ROOT dict RecoPixelVertexingPixelTrackFittingsrcclassesh")

add_library(RecoPixelVertexingPixelTrackFitting OBJECT 
  src/PixelTrackErrorParam.cc
  src/CircleFromThreePoints.cc
  src/KFBasedPixelFitter.cc
  src/PixelTrackCleanerBySharedHits.cc
  src/ParabolaFit.cc
  src/PixelTrackFilterByKinematics.cc
  src/ES_PixelTrackCleaner.cc
  src/PixelFitterByHelixProjections.cc
  src/PixelFitterByConformalMappingAndLine.cc
  src/PixelTrackReconstruction.cc
  src/PixelTrackBuilder.cc
  src/ConformalMappingFit.cc
  ${CMAKE_BINARY_DIR}/RecoPixelVertexingPixelTrackFittingsrcclassesh_rflx.cpp
)

target_include_directories(RecoPixelVertexingPixelTrackFitting PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoPixelVertexingPixelTrackFitting PUBLIC /usr/include/python2.7/)
target_include_directories(RecoPixelVertexingPixelTrackFitting PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoPixelVertexingPixelTrackFitting PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoPixelVertexingPixelTrackFitting PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoPixelVertexingPixelTrackFitting PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoPixelVertexingPixelTrackFitting PUBLIC /usr/include/boost/)
target_include_directories(RecoPixelVertexingPixelTrackFitting PUBLIC /usr/include/eigen3/)
target_include_directories(RecoPixelVertexingPixelTrackFitting PUBLIC /usr/include/boost/python/)
target_include_directories(RecoPixelVertexingPixelTrackFitting PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoPixelVertexingPixelTrackFitting PUBLIC /usr/include/root/)
target_include_directories(RecoPixelVertexingPixelTrackFitting PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoPixelVertexingPixelTrackFitting PUBLIC /usr/include/boost/regex/)

