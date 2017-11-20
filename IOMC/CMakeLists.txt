add_subdirectory(RandomEngine)
add_subdirectory(ParticleGuns)
add_subdirectory(Input)
add_subdirectory(EventVertexGenerators)


# Meta-target that builds everything in this subsystem
add_custom_target(IOMC_all)
add_dependencies(IOMC_all
  IOMCRandomEngine
  IOMCRandomEngineTestRandomNumberServiceAnalyzer
  IOMCRandomEngineTestRandomNumberServiceGlobal
  TestIOMCRandomEngineService
  IOMCRandomEnginePlugins
  IOMCParticleGuns
  IOMCInput
  GeneratorInterfaceHepMCWriter
  IOMCEventVertexGenerators
)
# Meta-target that builds all libs in this subsystem
add_custom_target(IOMC_libs)
add_dependencies(IOMC_libs
  IOMCRandomEngine
  IOMCParticleGuns
  IOMCInput
  IOMCEventVertexGenerators
)
