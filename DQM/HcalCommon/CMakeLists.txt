add_library(DQMHcalCommon OBJECT 
  src/ElectronicsQuantity.cc
  src/Utilities.cc
  src/DQClient.cc
  src/HashFilter.cc
  src/ElectronicsMap.cc
  src/DetectorQuantity.cc
  src/ContainerSingleProf1D.cc
  src/Container1D.cc
  src/ContainerProf2D.cc
  src/ContainerSingle1D.cc
  src/DQTask.cc
  src/ContainerSingleProf2D.cc
  src/DQHarvester.cc
  src/Container2D.cc
  src/HashFunctions.cc
  src/ContainerSingle2D.cc
  src/DQModule.cc
  src/TrigTowerQuantity.cc
  src/ContainerProf1D.cc
)

target_include_directories(DQMHcalCommon PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMHcalCommon PUBLIC /usr/include/python2.7/)
target_include_directories(DQMHcalCommon PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQMHcalCommon PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMHcalCommon PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMHcalCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMHcalCommon PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMHcalCommon PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMHcalCommon PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMHcalCommon PUBLIC /usr/include/boost/)
target_include_directories(DQMHcalCommon PUBLIC /usr/include/eigen3/)
target_include_directories(DQMHcalCommon PUBLIC /usr/include/boost/python/)
target_include_directories(DQMHcalCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMHcalCommon PUBLIC /usr/include/root/)
target_include_directories(DQMHcalCommon PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMHcalCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMHcalCommon PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMHcalCommon PUBLIC /usr/include/boost/regex/)

