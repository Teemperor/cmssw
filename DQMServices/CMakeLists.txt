add_subdirectory(Examples)
add_subdirectory(StreamerIO)
add_subdirectory(Diagnostic)
add_subdirectory(ClientConfig)
add_subdirectory(Components)
add_subdirectory(Core)


# Meta-target that builds everything in this subsystem
add_custom_target(DQMServices_all)
add_dependencies(DQMServices_all
  DQMServicesExamples
  DQMServicesExamplesPlugins
  DQMServicesStreamerIOTestPlugins
  DQMServicesStreamerIOPlugins
  DQMServicesDiagnostic
  MakeDeanHTML
  DQMServicesDiagnosticPlugins
  DQMServicesClientConfig
  DQMServicesClientConfigPlugins
  DQMServicesComponents
  fastHadd
  TestDQMToolsPlugins
  DQMServicesComponentsPlugins
  DQMServicesCore
  DQMCollector
  DQMDumpFile
  DQMMergeFile
  DQMServicesCoreROOTExample
  DQMServicesCoreROOTReadFileExample
  DQMServicesCoreROOTQTestsExample
  DQMServicesUIStandaloneExample
  DQMServicesCoreSourceExample
  DQMTestMultiThread
  DQMQualityTestsExample
  DQMFastMatchTest
  DQMTestStandaloneBuildOfDQMStore
  DQMServicesCorePlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(DQMServices_libs)
add_dependencies(DQMServices_libs
  DQMServicesExamples
  DQMServicesDiagnostic
  DQMServicesClientConfig
  DQMServicesComponents
  DQMServicesCore
)
