add_library(RecoPixelVertexingPixelTripletsPlugins OBJECT 
  PixelTripletHLTGenerator.cc
  CAHitNtupletEDProducerT.cc
  ThirdHitPredictionFromInvParabola.cc
  SealModule.cc
  CombinedHitTripletGenerator.cc
  CellularAutomaton.cc
  MatchedHitRZCorrectionFromBending.cc
  CombinedHitQuadrupletGenerator.cc
  ThirdHitCorrection.cc
  PixelQuadrupletMergerEDProducer.cc
  PixelQuadrupletGenerator.cc
  PixelTripletNoTipGenerator.cc
  CAHitTripletGenerator.cc
  PixelQuadrupletEDProducer.cc
  CAHitQuadrupletGenerator.cc
  LayerQuadruplets.cc
  ThirdHitZPrediction.cc
  ThirdHitPredictionFromInvLine.cc
  PixelTripletLargeTipGenerator.cc
)

target_include_directories(RecoPixelVertexingPixelTripletsPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoPixelVertexingPixelTripletsPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoPixelVertexingPixelTripletsPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoPixelVertexingPixelTripletsPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoPixelVertexingPixelTripletsPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoPixelVertexingPixelTripletsPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoPixelVertexingPixelTripletsPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoPixelVertexingPixelTripletsPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(RecoPixelVertexingPixelTripletsPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoPixelVertexingPixelTripletsPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoPixelVertexingPixelTripletsPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoPixelVertexingPixelTripletsPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoPixelVertexingPixelTripletsPlugins PUBLIC /usr/include/boost/regex/)

