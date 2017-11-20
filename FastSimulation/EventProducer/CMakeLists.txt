add_library(FastSimulationEventProducer OBJECT 
  src/FamosManager.cc
  src/FamosProducer.cc
)

target_include_directories(FastSimulationEventProducer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FastSimulationEventProducer PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationEventProducer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FastSimulationEventProducer PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(FastSimulationEventProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationEventProducer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FastSimulationEventProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(FastSimulationEventProducer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(FastSimulationEventProducer PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationEventProducer PUBLIC /usr/include/Geant4/)
target_include_directories(FastSimulationEventProducer PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationEventProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationEventProducer PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(FastSimulationEventProducer PUBLIC /usr/include/root/)
target_include_directories(FastSimulationEventProducer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(FastSimulationEventProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationEventProducer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(FastSimulationEventProducer PUBLIC /usr/include/boost/regex/)
target_include_directories(FastSimulationEventProducer PUBLIC /usr/include/Pythia8/)

