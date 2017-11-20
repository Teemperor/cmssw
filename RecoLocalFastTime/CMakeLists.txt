add_subdirectory(FTLCommonAlgos)
add_subdirectory(FTLRecProducers)


# Meta-target that builds everything in this subsystem
add_custom_target(RecoLocalFastTime_all)
add_dependencies(RecoLocalFastTime_all
  RecoLocalFastTimeFTLCommonAlgos
  RecoLocalFastTimeFTLCommonAlgosPlugins
  RecoLocalFastTimeFTLRecProducersPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(RecoLocalFastTime_libs)
add_dependencies(RecoLocalFastTime_libs
  RecoLocalFastTimeFTLCommonAlgos
)
