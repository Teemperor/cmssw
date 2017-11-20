add_library(CalibTrackerSiStripFakeESProducersPlugins OBJECT 
  fake/modules.cc
  fake/SiStripPedestalsFakeESSource.cc
  fake/SiStripBadModuleConfigurableFakeESSource.cc
  fake/SiStripConfObjectFakeESSource.cc
  fake/SiStripLatencyFakeESSource.cc
  fake/SiStripNoisesFakeESSource.cc
  fake/SiStripLorentzAngleFakeESSource.cc
  fake/Phase2TrackerCablingCfgESSource.cc
  fake/SiStripNoiseNormalizedWithApvGainBuilder.cc
  fake/SiStripQualityFakeESSource.cc
  fake/SiStripApvGainFakeESSource.cc
  fake/SiStripFedCablingFakeESSource.cc
  fake/SiStripThresholdFakeESSource.cc
  fake/SiStripBackPlaneCorrectionFakeESSource.cc
  fake/SiStripApvGainBuilderFromTag.cc
  fake/SiStripHashedDetIdFakeESSource.cc
  fake/SiStripBaseDelayFakeESSource.cc
)

target_include_directories(CalibTrackerSiStripFakeESProducersPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(CalibTrackerSiStripFakeESProducersPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CalibTrackerSiStripFakeESProducersPlugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(CalibTrackerSiStripFakeESProducersPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerSiStripFakeESProducersPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibTrackerSiStripFakeESProducersPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CalibTrackerSiStripFakeESProducersPlugins PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerSiStripFakeESProducersPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(CalibTrackerSiStripFakeESProducersPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerSiStripFakeESProducersPlugins PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerSiStripFakeESProducersPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CalibTrackerSiStripFakeESProducersPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerSiStripFakeESProducersPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CalibTrackerSiStripFakeESProducersPlugins PUBLIC /usr/include/boost/regex/)

add_library(CalibTrackerSiStripRealESProducersPlugins OBJECT 
  real/modules.cc
  real/SiStripDelayESProducer.cc
  real/SiStripBadModuleFedErrESSource.cc
  real/SiStripLorentzAngleDepESProducer.cc
  real/SiStripBackPlaneCorrectionDepESProducer.cc
  real/SiStripQualityESProducer.cc
)

target_include_directories(CalibTrackerSiStripRealESProducersPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(CalibTrackerSiStripRealESProducersPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerSiStripRealESProducersPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(CalibTrackerSiStripRealESProducersPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CalibTrackerSiStripRealESProducersPlugins PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerSiStripRealESProducersPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerSiStripRealESProducersPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerSiStripRealESProducersPlugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(CalibTrackerSiStripRealESProducersPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibTrackerSiStripRealESProducersPlugins PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerSiStripRealESProducersPlugins PUBLIC /usr/include/boost/regex/)

add_library(CalibTrackerSiStripGeomESProducersPlugins OBJECT 
  geom/SiStripConnectivity.cc
  geom/modules.cc
  geom/SiStripHashedDetIdESModule.cc
  geom/SiStripRegionConnectivity.cc
)

target_include_directories(CalibTrackerSiStripGeomESProducersPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(CalibTrackerSiStripGeomESProducersPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerSiStripGeomESProducersPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(CalibTrackerSiStripGeomESProducersPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CalibTrackerSiStripGeomESProducersPlugins PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerSiStripGeomESProducersPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerSiStripGeomESProducersPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerSiStripGeomESProducersPlugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(CalibTrackerSiStripGeomESProducersPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibTrackerSiStripGeomESProducersPlugins PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerSiStripGeomESProducersPlugins PUBLIC /usr/include/boost/regex/)

add_library(CalibTrackerSiStripESProducersDBWriterPlugins OBJECT 
  DBWriter/modules.cc
  DBWriter/SiStripFedCablingManipulator.cc
)

target_include_directories(CalibTrackerSiStripESProducersDBWriterPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(CalibTrackerSiStripESProducersDBWriterPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CalibTrackerSiStripESProducersDBWriterPlugins PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(CalibTrackerSiStripESProducersDBWriterPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerSiStripESProducersDBWriterPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibTrackerSiStripESProducersDBWriterPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CalibTrackerSiStripESProducersDBWriterPlugins PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerSiStripESProducersDBWriterPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(CalibTrackerSiStripESProducersDBWriterPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerSiStripESProducersDBWriterPlugins PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerSiStripESProducersDBWriterPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CalibTrackerSiStripESProducersDBWriterPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerSiStripESProducersDBWriterPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CalibTrackerSiStripESProducersDBWriterPlugins PUBLIC /usr/include/boost/regex/)

