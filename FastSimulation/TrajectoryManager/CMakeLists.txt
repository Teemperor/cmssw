add_library(FastSimulationTrajectoryManager OBJECT 
  src/LocalMagneticField.cc
  src/InsideBoundsMeasurementEstimator.cc
  src/TrajectoryManager.cc
)

target_include_directories(FastSimulationTrajectoryManager PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationTrajectoryManager PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FastSimulationTrajectoryManager PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationTrajectoryManager PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FastSimulationTrajectoryManager PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationTrajectoryManager PUBLIC /usr/include/Geant4/)
target_include_directories(FastSimulationTrajectoryManager PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationTrajectoryManager PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationTrajectoryManager PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(FastSimulationTrajectoryManager PUBLIC /usr/include/root/)
target_include_directories(FastSimulationTrajectoryManager PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationTrajectoryManager PUBLIC /usr/include/boost/regex/)
target_include_directories(FastSimulationTrajectoryManager PUBLIC /usr/include/Pythia8/)

