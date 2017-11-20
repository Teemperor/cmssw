add_subdirectory(Navigation)
add_subdirectory(Selectors)


# Meta-target that builds everything in this subsystem
add_custom_target(RecoCaloTools_all)
add_dependencies(RecoCaloTools_all
  testCaloNavigationAnalyzer
  TestCaloSelectors
)
