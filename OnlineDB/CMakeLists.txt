add_subdirectory(EcalCondDB)
add_subdirectory(Oracle)
add_subdirectory(SiStripESSources)
add_subdirectory(SiStripConfigDb)
add_subdirectory(CSCCondDB)


# Meta-target that builds everything in this subsystem
add_custom_target(OnlineDB_all)
add_dependencies(OnlineDB_all
  OnlineDBEcalCondDB
  cmsecal_rootplot
  cmsecal_write_offline_det_id
  LaserSeqToDB
  TestLMF2010-temp
  GetDelays
  TestLMF2010-write
  TestLMF2010-read
  TestLMF2010-getPrimitives
  DumpLaserDB
  OnlineDBOracle
  OnlineDBSiStripESSources
  testOnlineDBSiStripESSources
  OnlineDBSiStripESSourcesPlugins
  OnlineDBSiStripConfigDb
  testOnlineDBSiStripConfigDbPlugins
  OnlineDBSiStripConfigDbPlugins
  OnlineDBCSCCondDB
  OnlineDBCSCCondDB_TestPlugins
)
# Meta-target that builds all libs in this subsystem
add_custom_target(OnlineDB_libs)
add_dependencies(OnlineDB_libs
  OnlineDBEcalCondDB
  OnlineDBOracle
  OnlineDBSiStripESSources
  OnlineDBSiStripConfigDb
  OnlineDBCSCCondDB
)
