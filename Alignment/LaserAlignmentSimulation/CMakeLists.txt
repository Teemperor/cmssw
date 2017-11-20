add_subdirectory(test)
add_subdirectory(plugins)
add_library(AlignmentLaserAlignmentSimulation OBJECT 
  src/LaserBeamsTEC1.cc
  src/LaserOpticalPhysicsList.cc
  src/MaterialProperties.cc
  src/LaserSteppingAction.cc
  src/LaserTrackingAction.cc
  src/LaserBeamsBarrel.cc
  src/LaserSteppingVerbose.cc
  src/LaserPrimaryGeneratorAction.cc
  src/LaserBeamsTEC2.cc
)

target_include_directories(AlignmentLaserAlignmentSimulation PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentLaserAlignmentSimulation PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentLaserAlignmentSimulation PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentLaserAlignmentSimulation PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(AlignmentLaserAlignmentSimulation PUBLIC /usr/include/root/)
target_include_directories(AlignmentLaserAlignmentSimulation PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentLaserAlignmentSimulation PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentLaserAlignmentSimulation PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(AlignmentLaserAlignmentSimulation PUBLIC /usr/include/boost/)
target_include_directories(AlignmentLaserAlignmentSimulation PUBLIC /usr/include/Geant4/)
target_include_directories(AlignmentLaserAlignmentSimulation PUBLIC /usr/include/boost/regex/)

