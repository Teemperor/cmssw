add_library(PhysicsToolsTagAndProbe_plugins OBJECT 
  TagProbeFitTreeAnalyzer.cc
  DeltaRNearestObjectComputer.cc
  AnythingToValueMap.cc
  ProbeTreeProducer.cc
  RecoChargedCandidateRefSelector.cc
  NearbyCandCountComputer.cc
  OtherObjectVariableComputer.cc
  TagProbeFitTreeProducer.cc
  ElectronConversionRejectionVars.cc
  ObjectViewCleaner.cc
  ObjectMultiplicityCounter.cc
  ElectronMatchedCandidateProducer.cc
  RecoEcalCandidateSelector.cc
  ColinsSoperVariablesComputer.cc
  ProbeMulteplicityProducer.cc
  TrgMatchedObjectProducer.cc
  ObjectViewMatcher.cc
)

target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /usr/include/eigen3/)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(PhysicsToolsTagAndProbe_plugins PUBLIC /usr/include/boost/regex/)

