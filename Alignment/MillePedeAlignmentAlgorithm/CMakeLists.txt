add_library(AlignmentMillePedeAlignmentAlgorithm OBJECT 
  src/PedeReader.cc
  src/MillePedeVariablesIORoot.cc
  src/MillePedeFileReader.cc
  src/Mille.cc
  src/PedeLabelerPluginFactory.cc
  src/PedeLabelerBase.cc
  src/MillePedeVariables.cc
  src/PedeSteerer.cc
  src/PedeSteererWeakModeConstraints.cc
  src/MillePedeMonitor.cc
)

target_include_directories(AlignmentMillePedeAlignmentAlgorithm PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentMillePedeAlignmentAlgorithm PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentMillePedeAlignmentAlgorithm PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentMillePedeAlignmentAlgorithm PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentMillePedeAlignmentAlgorithm PUBLIC /usr/include/boost/)
target_include_directories(AlignmentMillePedeAlignmentAlgorithm PUBLIC /usr/include/eigen3/)
target_include_directories(AlignmentMillePedeAlignmentAlgorithm PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentMillePedeAlignmentAlgorithm PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentMillePedeAlignmentAlgorithm PUBLIC /usr/include/root/)
target_include_directories(AlignmentMillePedeAlignmentAlgorithm PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentMillePedeAlignmentAlgorithm PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentMillePedeAlignmentAlgorithm PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentMillePedeAlignmentAlgorithm PUBLIC /usr/include/boost/regex/)

