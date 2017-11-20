add_subdirectory(VertexAssociation)
add_subdirectory(TrackHistory)
add_subdirectory(TrackTriggerAssociation)
add_subdirectory(Records)
add_subdirectory(TrackerHitAssociation)
add_subdirectory(SiStripDigitizer)
add_subdirectory(SiPhase2Digitizer)
add_subdirectory(Common)
add_subdirectory(TrackAssociation)


# Meta-target that builds everything in this subsystem
add_custom_target(SimTracker_all)
add_dependencies(SimTracker_all
  SimTrackerVertexAssociation
  testVertexAssociator
  SimTrackerTrackHistory
  TrackHistoryPlugins
  SimTrackerTrackTriggerAssociation
  TrackTriggerAssociationPlugins
  SimTrackerRecords
  SimTrackerTrackerHitAssociation
  SimTrackerTrackerHitAssociationTestModules
  SimTrackerTrackerHitAssociationPlugins
  SimTrackerSiStripDigitizer
  SimTrackerSiStripDigitizerPlugins
  Phase2DigiValid
  SiPhase2DigiMon
  SimTrackerSiPhase2DigitizerPlugins
  SimTrackerCommon
  SimTrackerTrackAssociation
  testTrackAssociator
  SimTrackerTrackAssociation_plugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(SimTracker_libs)
add_dependencies(SimTracker_libs
  SimTrackerVertexAssociation
  SimTrackerTrackHistory
  SimTrackerTrackTriggerAssociation
  SimTrackerRecords
  SimTrackerTrackerHitAssociation
  SimTrackerSiStripDigitizer
  SimTrackerCommon
  SimTrackerTrackAssociation
)
