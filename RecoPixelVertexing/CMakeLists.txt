add_subdirectory(PixelTrackFitting)
add_subdirectory(PixelVertexFinding)
add_subdirectory(PixelTriplets)
add_subdirectory(PixelLowPtUtilities)


# Meta-target that builds everything in this subsystem
add_custom_target(RecoPixelVertexing_all)
add_dependencies(RecoPixelVertexing_all
  RecoPixelVertexingPixelTrackFitting
  PixelTrackTest
  RecoPixelVertexingPixelTrackFittingPlugins
  RecoPixelVertexingPixelVertexFinding
  RecoPixelVertexingPixelTriplets
  HitTripletProducer
  PixelTriplets_InvPrbl_t
  PixelTriplets_InvPrbl_prec
  RecoPixelVertexingPixelTripletsPlugins
  RecoPixelVertexingPixelLowPtUtilities
  ClusterShapeExtractor
  clusterShapeAnalyzer
  LowPtGlobalDir_t
  ClusterShapeHitFilter_t
  RecoPixelVertexingPixelLowPtUtilitiesPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(RecoPixelVertexing_libs)
add_dependencies(RecoPixelVertexing_libs
  RecoPixelVertexingPixelTrackFitting
  RecoPixelVertexingPixelVertexFinding
  RecoPixelVertexingPixelTriplets
  RecoPixelVertexingPixelLowPtUtilities
)
