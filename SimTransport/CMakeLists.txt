add_subdirectory(HectorProducer)


# Meta-target that builds everything in this subsystem
add_custom_target(SimTransport_all)
add_dependencies(SimTransport_all
  SimTransportHectorProducer
)
# Meta-target that builds all libs in this subsystem
add_custom_target(SimTransport_libs)
add_dependencies(SimTransport_libs
  SimTransportHectorProducer
)
