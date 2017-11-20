add_subdirectory(test)
add_library(RecoTrackerTkDetLayers OBJECT 
  src/TECPetal.cc
  src/PixelForwardLayerPhase1.cc
  src/Phase2EndcapRingBuilder.cc
  src/SimpleTECWedge.cc
  src/PixelForwardLayer.cc
  src/TBLayer.cc
  src/TIDRing.cc
  src/modules.cc
  src/Phase2OTBarrelRod.cc
  src/CompatibleDetToGroupAdder.cc
  src/DiskSectorBounds.cc
  src/Phase2OTBarrelLayerBuilder.cc
  src/TOBLayerBuilder.cc
  src/TIDLayer.cc
  src/TIDLayerBuilder.cc
  src/TIDRingBuilder.cc
  src/PixelRodBuilder.cc
  src/Phase1PixelBlade.cc
  src/TECLayerBuilder.cc
  src/TECWedgeBuilder.cc
  src/Phase2EndcapRing.cc
  src/CompositeTECPetal.cc
  src/TIBLayerBuilder.cc
  src/TkDetUtil.cc
  src/Phase2OTBarrelRodBuilder.cc
  src/PixelBlade.cc
  src/TIBRing.cc
  src/Phase2OTtiltedBarrelLayer.cc
  src/TBPLayer.cc
  src/TECPetalBuilder.cc
  src/PixelBarrelLayerBuilder.cc
  src/Phase2EndcapLayerBuilder.cc
  src/PixelRod.cc
  src/TIBLayer.cc
  src/CompositeTECWedge.cc
  src/Phase2EndcapLayer.cc
  src/TIBRingBuilder.cc
  src/TOBRod.cc
  src/ForwardDiskSectorBuilderFromWedges.cc
  src/BoundDiskSector.cc
  src/TECWedge.cc
  src/GlobalDetRodRangeZPhi.cc
  src/TOBRodBuilder.cc
  src/BladeShapeBuilderFromDet.cc
  src/GeometricSearchTracker.cc
  src/GeometricSearchTrackerBuilder.cc
  src/ForwardDiskSectorBuilderFromDet.cc
  src/DetGroupMerger.cc
  src/TECLayer.cc
)

target_include_directories(RecoTrackerTkDetLayers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerTkDetLayers PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerTkDetLayers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerTkDetLayers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerTkDetLayers PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerTkDetLayers PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/TECPetal.cc
  src/PixelForwardLayerPhase1.cc
  src/Phase2EndcapRingBuilder.cc
  src/SimpleTECWedge.cc
  src/PixelForwardLayer.cc
  src/TBLayer.cc
  src/TIDRing.cc
  src/modules.cc
  src/Phase2OTBarrelRod.cc
  src/CompatibleDetToGroupAdder.cc
  src/DiskSectorBounds.cc
  src/Phase2OTBarrelLayerBuilder.cc
  src/TOBLayerBuilder.cc
  src/TIDLayer.cc
  src/TIDLayerBuilder.cc
  src/TIDRingBuilder.cc
  src/PixelRodBuilder.cc
  src/Phase1PixelBlade.cc
  src/TECLayerBuilder.cc
  src/TECWedgeBuilder.cc
  src/Phase2EndcapRing.cc
  src/CompositeTECPetal.cc
  src/TIBLayerBuilder.cc
  src/TkDetUtil.cc
  src/Phase2OTBarrelRodBuilder.cc
  src/PixelBlade.cc
  src/TIBRing.cc
  src/Phase2OTtiltedBarrelLayer.cc
  src/TBPLayer.cc
  src/TECPetalBuilder.cc
  src/PixelBarrelLayerBuilder.cc
  src/Phase2EndcapLayerBuilder.cc
  src/PixelRod.cc
  src/TIBLayer.cc
  src/CompositeTECWedge.cc
  src/Phase2EndcapLayer.cc
  src/TIBRingBuilder.cc
  src/TOBRod.cc
  src/ForwardDiskSectorBuilderFromWedges.cc
  src/BoundDiskSector.cc
  src/TECWedge.cc
  src/GlobalDetRodRangeZPhi.cc
  src/TOBRodBuilder.cc
  src/BladeShapeBuilderFromDet.cc
  src/GeometricSearchTracker.cc
  src/GeometricSearchTrackerBuilder.cc
  src/ForwardDiskSectorBuilderFromDet.cc
  src/DetGroupMerger.cc
  src/TECLayer.cc
PROPERTIES COMPILE_FLAGS "-Ofast")

