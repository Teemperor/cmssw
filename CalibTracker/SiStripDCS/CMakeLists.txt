add_subdirectory(test)
add_subdirectory(plugins)
add_library(CalibTrackerSiStripDCS OBJECT 
  src/SiStripDetVOffBuilder.cc
  src/SiStripPsuDetIdMap.cc
  src/SiStripCoralIface.cc
)

target_include_directories(CalibTrackerSiStripDCS PUBLIC /usr/include/python2.7/)
target_include_directories(CalibTrackerSiStripDCS PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerSiStripDCS PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibTrackerSiStripDCS PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CalibTrackerSiStripDCS PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerSiStripDCS PUBLIC /usr/include/boost/python/)
target_include_directories(CalibTrackerSiStripDCS PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerSiStripDCS PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerSiStripDCS PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CalibTrackerSiStripDCS PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerSiStripDCS PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CalibTrackerSiStripDCS PUBLIC /usr/include/boost/regex/)
target_include_directories(CalibTrackerSiStripDCS PUBLIC /home/teemperor/cms/ext/misc/)

