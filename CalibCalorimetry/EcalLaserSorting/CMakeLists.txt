add_library(CalibCalorimetryEcalLaserSorting OBJECT 
  src/WatcherStreamFileReader.cc
  src/SealModules.cc
  src/LaserSorter.cc
  src/Majority.cc
  src/WatcherSource.cc
  src/LmfSource.cc
)

target_include_directories(CalibCalorimetryEcalLaserSorting PUBLIC /usr/include/python2.7/)
target_include_directories(CalibCalorimetryEcalLaserSorting PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibCalorimetryEcalLaserSorting PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibCalorimetryEcalLaserSorting PUBLIC /usr/include/boost/)
target_include_directories(CalibCalorimetryEcalLaserSorting PUBLIC /usr/include/eigen3/)
target_include_directories(CalibCalorimetryEcalLaserSorting PUBLIC /usr/include/boost/python/)
target_include_directories(CalibCalorimetryEcalLaserSorting PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibCalorimetryEcalLaserSorting PUBLIC /usr/include/root/)
target_include_directories(CalibCalorimetryEcalLaserSorting PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibCalorimetryEcalLaserSorting PUBLIC /usr/include/boost/regex/)

