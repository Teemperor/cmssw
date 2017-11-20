add_subdirectory(Streamer)
add_subdirectory(Output)
add_subdirectory(Input)
add_subdirectory(Common)
add_subdirectory(TFileAdaptor)


# Meta-target that builds everything in this subsystem
add_custom_target(IOPool_all)
add_dependencies(IOPool_all
  IOPoolStreamer
  IOPoolStreamerPlugins
  IOPoolOutput
  IOPoolOutputPlugins
  IOPoolInput
  IOPoolCommon
  edmProvDump
  edmFileUtil
  edmCopyUtil
  IOPoolTFileAdaptor
  test_TFileAdaptor_TFile
)
# Meta-target that builds all libs in this subsystem
add_custom_target(IOPool_libs)
add_dependencies(IOPool_libs
  IOPoolStreamer
  IOPoolOutput
  IOPoolInput
  IOPoolCommon
  IOPoolTFileAdaptor
)
