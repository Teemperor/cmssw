add_subdirectory(plugins)
add_library(AlignmentCommonAlignmentAlgorithm OBJECT 
  src/AlignmentExtendedCorrelationsStore.cc
  src/AlignableDataIO.cc
  src/AlignmentParameterBuilder.cc
  src/AlignmentParametersIORoot.cc
  src/AlignmentParameterStore.cc
  src/TkModuleGroupSelector.cc
  src/AlignmentAlgorithmPluginFactory.cc
  src/AlignmentUserVariablesIO.cc
  src/AlignmentParametersIO.cc
  src/AlignableDataIORoot.cc
  src/AlignmentExtendedCorrelationsEntry.cc
  src/AlignmentCorrelationsStore.cc
  src/AlignmentIORootBase.cc
  src/IntegratedCalibrationPluginFactory.cc
  src/IntegratedCalibrationBase.cc
  src/AlignmentCorrelationsIORoot.cc
  src/AlignmentIORoot.cc
  src/AlignmentParameterSelector.cc
)

target_include_directories(AlignmentCommonAlignmentAlgorithm PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentCommonAlignmentAlgorithm PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentCommonAlignmentAlgorithm PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentCommonAlignmentAlgorithm PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentCommonAlignmentAlgorithm PUBLIC /usr/include/boost/)
target_include_directories(AlignmentCommonAlignmentAlgorithm PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentCommonAlignmentAlgorithm PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentCommonAlignmentAlgorithm PUBLIC /usr/include/root/)
target_include_directories(AlignmentCommonAlignmentAlgorithm PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentCommonAlignmentAlgorithm PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentCommonAlignmentAlgorithm PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentCommonAlignmentAlgorithm PUBLIC /usr/include/boost/regex/)

