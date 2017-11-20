add_subdirectory(test)
add_library(TrackingToolsAnalyticalJacobians OBJECT 
  src/JacobianCartesianToCurvilinear.cc
  src/JacobianCartesianToLocal.cc
  src/JacobianLocalToCurvilinear.cc
  src/AnalyticalCurvilinearJacobian.cc
  src/JacobianCurvilinearToLocal.cc
  src/JacobianLocalToCartesian.cc
  src/JacobianCurvilinearToCartesian.cc
)

target_include_directories(TrackingToolsAnalyticalJacobians PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsAnalyticalJacobians PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsAnalyticalJacobians PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsAnalyticalJacobians PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsAnalyticalJacobians PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsAnalyticalJacobians PUBLIC /usr/include/boost/regex/)

