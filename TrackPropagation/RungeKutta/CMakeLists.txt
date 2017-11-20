add_subdirectory(test)
add_library(TrackPropagationRungeKutta OBJECT 
  src/RKPropagatorInZ.cc
  src/RK4PreciseStep.cc
  src/RKPropagatorInS.cc
  src/PathToPlane2Order.cc
  src/RKLocalFieldProvider.cc
  src/RKPropagatorInR.cc
  src/CartesianLorentzForce.cc
  src/RK4OneStep.cc
)

target_include_directories(TrackPropagationRungeKutta PUBLIC /usr/include/boost/python/)
target_include_directories(TrackPropagationRungeKutta PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackPropagationRungeKutta PUBLIC /usr/include/python2.7/)
target_include_directories(TrackPropagationRungeKutta PUBLIC /usr/include/root/)
target_include_directories(TrackPropagationRungeKutta PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackPropagationRungeKutta PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackPropagationRungeKutta PUBLIC /usr/include/boost/)
target_include_directories(TrackPropagationRungeKutta PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/RKPropagatorInZ.cc
  src/RK4PreciseStep.cc
  src/RKPropagatorInS.cc
  src/PathToPlane2Order.cc
  src/RKLocalFieldProvider.cc
  src/RKPropagatorInR.cc
  src/CartesianLorentzForce.cc
  src/RK4OneStep.cc
PROPERTIES COMPILE_FLAGS "-O3")

