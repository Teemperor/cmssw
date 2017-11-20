add_subdirectory(TopObjects)
add_subdirectory(Egamma)
add_subdirectory(EWK)
add_subdirectory(TrackInfo)
add_subdirectory(SUSYBSMObjects)
add_subdirectory(SiStripClusterInfo)


# Meta-target that builds everything in this subsystem
add_custom_target(AnalysisDataFormats_all)
add_dependencies(AnalysisDataFormats_all
  AnalysisDataFormatsTopObjects
  AnalysisDataFormatsEgamma
  AnalysisDataFormatsEWK
  AnalysisDataFormatsTrackInfo
  AnalysisDataFormatsSUSYBSMObjects
)
# Meta-target that builds all libs in this subsystem
add_custom_target(AnalysisDataFormats_libs)
add_dependencies(AnalysisDataFormats_libs
  AnalysisDataFormatsTopObjects
  AnalysisDataFormatsEgamma
  AnalysisDataFormatsEWK
  AnalysisDataFormatsTrackInfo
  AnalysisDataFormatsSUSYBSMObjects
)
