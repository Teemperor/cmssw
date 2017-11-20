add_subdirectory(bin)
add_subdirectory(test)
add_library(FWCoreParameterSet OBJECT 
  src/Entry.cc
  src/ParameterSetDescription.cc
  src/DocFormatHelper.cc
  src/types.cc
  src/IfExistsDescription.cc
  src/ParameterWildcardBase.cc
  src/FileInPath.cc
  src/ParameterDescription.cc
  src/ProcessDesc.cc
  src/ParameterSetDescriptionFillerBase.cc
  src/ParameterDescriptionNode.cc
  src/VParameterSetEntry.cc
  src/ParameterSwitchBase.cc
  src/Registry.cc
  src/AllowedLabelsDescription.cc
  src/ParameterDescriptionCases.cc
  src/ParameterSetConverter.cc
  src/ParameterWildcard.cc
  src/ParameterSet.cc
  src/ParameterSetEntry.cc
  src/ConfigurationDescriptions.cc
  src/ParameterDescriptionBase.cc
  src/IllegalParameters.cc
  src/ParameterSetDescriptionFillerPluginFactory.cc
  src/EmptyGroupDescription.cc
  src/AllowedLabelsDescriptionBase.cc
  src/ANDGroupDescription.cc
  src/FillDescriptionFromPSet.cc
  src/XORGroupDescription.cc
  src/ORGroupDescription.cc
)

target_include_directories(FWCoreParameterSet PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreParameterSet PUBLIC /usr/include/root/)
target_include_directories(FWCoreParameterSet PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreParameterSet PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreParameterSet PUBLIC /usr/include/boost/)
target_include_directories(FWCoreParameterSet PUBLIC /usr/include/boost/regex/)

