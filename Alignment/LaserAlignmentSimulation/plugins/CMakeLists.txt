add_library(LaserAlignmentSimulationPlugins OBJECT 
  LaserAlignmentSimulation.cc
)

target_include_directories(LaserAlignmentSimulationPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(LaserAlignmentSimulationPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(LaserAlignmentSimulationPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(LaserAlignmentSimulationPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(LaserAlignmentSimulationPlugins PUBLIC /usr/include/root/)
target_include_directories(LaserAlignmentSimulationPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(LaserAlignmentSimulationPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(LaserAlignmentSimulationPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(LaserAlignmentSimulationPlugins PUBLIC /usr/include/boost/)
target_include_directories(LaserAlignmentSimulationPlugins PUBLIC /usr/include/Geant4/)
target_include_directories(LaserAlignmentSimulationPlugins PUBLIC /usr/include/boost/regex/)

add_library(LaserAlignmentProducer OBJECT 
  LaserAlignmentProducer.cc
)

target_include_directories(LaserAlignmentProducer PUBLIC /usr/include/boost/python/)
target_include_directories(LaserAlignmentProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(LaserAlignmentProducer PUBLIC /usr/include/python2.7/)
target_include_directories(LaserAlignmentProducer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(LaserAlignmentProducer PUBLIC /usr/include/root/)
target_include_directories(LaserAlignmentProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(LaserAlignmentProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(LaserAlignmentProducer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(LaserAlignmentProducer PUBLIC /usr/include/boost/)
target_include_directories(LaserAlignmentProducer PUBLIC /usr/include/Geant4/)
target_include_directories(LaserAlignmentProducer PUBLIC /usr/include/boost/regex/)

add_library(LaserOpticalPhysics OBJECT 
  LaserOpticalPhysics.cc
)

target_include_directories(LaserOpticalPhysics PUBLIC /usr/include/boost/python/)
target_include_directories(LaserOpticalPhysics PUBLIC /usr/include/boost/filesystem/)
target_include_directories(LaserOpticalPhysics PUBLIC /usr/include/python2.7/)
target_include_directories(LaserOpticalPhysics PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(LaserOpticalPhysics PUBLIC /usr/include/root/)
target_include_directories(LaserOpticalPhysics PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(LaserOpticalPhysics PUBLIC /home/teemperor/cms/md5/)
target_include_directories(LaserOpticalPhysics PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(LaserOpticalPhysics PUBLIC /usr/include/boost/)
target_include_directories(LaserOpticalPhysics PUBLIC /usr/include/Geant4/)
target_include_directories(LaserOpticalPhysics PUBLIC /usr/include/boost/regex/)

