add_library(SyncCalibTrackerSiStripDCSPlugins OBJECT 
  Synchronization/SealModules.cc
  Synchronization/SyncDCSO2O.cc
)

target_include_directories(SyncCalibTrackerSiStripDCSPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(SyncCalibTrackerSiStripDCSPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SyncCalibTrackerSiStripDCSPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(SyncCalibTrackerSiStripDCSPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(SyncCalibTrackerSiStripDCSPlugins PUBLIC /usr/include/boost/)
target_include_directories(SyncCalibTrackerSiStripDCSPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(SyncCalibTrackerSiStripDCSPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SyncCalibTrackerSiStripDCSPlugins PUBLIC /usr/include/root/)
target_include_directories(SyncCalibTrackerSiStripDCSPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(SyncCalibTrackerSiStripDCSPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SyncCalibTrackerSiStripDCSPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(SyncCalibTrackerSiStripDCSPlugins PUBLIC /usr/include/boost/regex/)
target_include_directories(SyncCalibTrackerSiStripDCSPlugins PUBLIC /home/teemperor/cms/ext/misc/)

add_library(TestSiStripDCS OBJECT 
  UnitTests/TestSiStripDCS.cc
  UnitTests/MasterTestSiStripDCS.cpp
)

target_include_directories(TestSiStripDCS PUBLIC /usr/include/boost/python/)
target_include_directories(TestSiStripDCS PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestSiStripDCS PUBLIC /usr/include/python2.7/)
target_include_directories(TestSiStripDCS PUBLIC /usr/include/root/)
target_include_directories(TestSiStripDCS PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(TestSiStripDCS PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestSiStripDCS PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestSiStripDCS PUBLIC /usr/include/boost/serialization/)
target_include_directories(TestSiStripDCS PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(TestSiStripDCS PUBLIC /usr/include/boost/)
target_include_directories(TestSiStripDCS PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(TestSiStripDCS PUBLIC /usr/include/boost/regex/)
target_include_directories(TestSiStripDCS PUBLIC /home/teemperor/cms/ext/misc/)

