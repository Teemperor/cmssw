add_library(GeometryTrackerNumberingBuilderPlugins OBJECT 
  CmsTrackerPixelPhase1EndcapBuilder.cc
  CmsTrackerLayerBuilder.cc
  CmsTrackerOTDiscBuilder.cc
  CmsTrackerDiskBuilder.cc
  CmsTrackerWheelBuilder.cc
  CmsTrackerPixelPhase2DiskBuilder.cc
  CmsTrackerPhase2TPDiskBuilder.cc
  DDDCmsTrackerContruction.cc
  CmsTrackerRingBuilder.cc
  CmsTrackerStringBuilder.cc
  CmsTrackerSubStrctBuilder.cc
  CmsTrackerPixelPhase2EndcapBuilder.cc
  CmsTrackerPanelBuilder.cc
  CondDBCmsTrackerConstruction.cc
  TrackerGeometricDetESModule.cc
  CmsTrackerOTRingBuilder.cc
  TrackerGeometricDetExtraESModule.cc
  CmsTrackerBuilder.cc
  CmsTrackerOTLayerBuilder.cc
  ExtractStringFromDDD.cc
  CmsTrackerPetalBuilder.cc
  CmsTrackerRodBuilder.cc
  CmsTrackerPhase1DiskBuilder.cc
  CmsTrackerLadderBuilder.cc
  CmsTrackerDetIdBuilder.cc
  CmsTrackerPixelPhase2RingBuilder.cc
  CmsDetConstruction.cc
  CmsTrackerLevelBuilder.cc
  TrackerTopologyEP.cc
)

target_include_directories(GeometryTrackerNumberingBuilderPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryTrackerNumberingBuilderPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryTrackerNumberingBuilderPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryTrackerNumberingBuilderPlugins PUBLIC /usr/include/root/)
target_include_directories(GeometryTrackerNumberingBuilderPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryTrackerNumberingBuilderPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryTrackerNumberingBuilderPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(GeometryTrackerNumberingBuilderPlugins PUBLIC /usr/include/boost/)
target_include_directories(GeometryTrackerNumberingBuilderPlugins PUBLIC /usr/include/boost/regex/)

