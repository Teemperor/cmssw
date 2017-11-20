add_subdirectory(TrackInfoProducer)


# Meta-target that builds everything in this subsystem
add_custom_target(AnalysisAlgos_all)
add_dependencies(AnalysisAlgos_all
  AnalysisAlgosTrackInfoProducer
  TrackInfoAnalyzer
  TrackInfoAnalyzerExample
)
# Meta-target that builds all libs in this subsystem
add_custom_target(AnalysisAlgos_libs)
add_dependencies(AnalysisAlgos_libs
  AnalysisAlgosTrackInfoProducer
)
