add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/RecoPixelVertexingPixelTripletssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/RecoPixelVertexing/PixelTriplets/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/RecoPixelVertexingPixelTripletssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/RecoPixelVertexing/PixelTriplets/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/RecoPixelVertexing/PixelTriplets/src/classes.h /home/teemperor/cms/cmssw/RecoPixelVertexing/PixelTriplets/src/classes_def.xml
  COMMENT "Generating ROOT dict RecoPixelVertexingPixelTripletssrcclassesh")

add_library(RecoPixelVertexingPixelTriplets OBJECT 
  src/CosmicHitTripletGeneratorFromLayerTriplet.cc
  src/HitTripletGenerator.cc
  src/ThirdHitPredictionFromCircle.cc
  src/CosmicLayerTriplets.cc
  src/IntermediateHitTriplets.cc
  src/CosmicHitTripletGenerator.cc
  src/HitQuadrupletGeneratorFromTripletAndLayers.cc
  src/ThirdHitRZPredictionBase.cc
  src/HitQuadrupletGeneratorFromTripletAndLayersFactory.cc
  src/LayerTriplets.cc
  src/HitQuadrupletGenerator.cc
  src/HitTripletGeneratorFromPairAndLayersFactory.cc
  src/HitTripletGeneratorFromPairAndLayers.cc
  src/QuadrupletSeedMerger.cc
  ${CMAKE_BINARY_DIR}/RecoPixelVertexingPixelTripletssrcclassesh_rflx.cpp
)

target_include_directories(RecoPixelVertexingPixelTriplets PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoPixelVertexingPixelTriplets PUBLIC /usr/include/python2.7/)
target_include_directories(RecoPixelVertexingPixelTriplets PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoPixelVertexingPixelTriplets PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoPixelVertexingPixelTriplets PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoPixelVertexingPixelTriplets PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoPixelVertexingPixelTriplets PUBLIC /usr/include/boost/)
target_include_directories(RecoPixelVertexingPixelTriplets PUBLIC /usr/include/eigen3/)
target_include_directories(RecoPixelVertexingPixelTriplets PUBLIC /usr/include/boost/python/)
target_include_directories(RecoPixelVertexingPixelTriplets PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoPixelVertexingPixelTriplets PUBLIC /usr/include/root/)
target_include_directories(RecoPixelVertexingPixelTriplets PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoPixelVertexingPixelTriplets PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/CosmicHitTripletGeneratorFromLayerTriplet.cc
  src/HitTripletGenerator.cc
  src/ThirdHitPredictionFromCircle.cc
  src/CosmicLayerTriplets.cc
  src/IntermediateHitTriplets.cc
  src/CosmicHitTripletGenerator.cc
  src/HitQuadrupletGeneratorFromTripletAndLayers.cc
  src/ThirdHitRZPredictionBase.cc
  src/HitQuadrupletGeneratorFromTripletAndLayersFactory.cc
  src/LayerTriplets.cc
  src/HitQuadrupletGenerator.cc
  src/HitTripletGeneratorFromPairAndLayersFactory.cc
  src/HitTripletGeneratorFromPairAndLayers.cc
  src/QuadrupletSeedMerger.cc
  ${CMAKE_BINARY_DIR}/RecoPixelVertexingPixelTripletssrcclassesh_rflx.cpp
PROPERTIES COMPILE_FLAGS "-Ofast -fno-math-errno")

