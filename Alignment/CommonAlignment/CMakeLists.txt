add_subdirectory(test)
add_library(AlignmentCommonAlignment OBJECT 
  src/Utilities.cc
  src/AlignableBeamSpot.cc
  src/AlignableComposite.cc
  src/AlignableIndexer.cc
  src/SurveyResidual.cc
  src/Alignable.cc
  src/AlignableModifier.cc
  src/AlignableCompositeBuilder.cc
  src/AlignableObjectId.cc
  src/AlignableNavigator.cc
  src/AlignTools.cc
  src/AlignmentParametersData.cc
  src/AlignableExtras.cc
  src/AlignableSurface.cc
  src/AlignableDet.cc
  src/SurveyDet.cc
  src/AlignableMap.cc
  src/AlignableDetUnit.cc
  src/MisalignmentScenarioBuilder.cc
  src/AlignableDetOrUnitPtr.cc
  src/AlignmentParameters.cc
)

target_include_directories(AlignmentCommonAlignment PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentCommonAlignment PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentCommonAlignment PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentCommonAlignment PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentCommonAlignment PUBLIC /usr/include/boost/)
target_include_directories(AlignmentCommonAlignment PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentCommonAlignment PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentCommonAlignment PUBLIC /usr/include/root/)
target_include_directories(AlignmentCommonAlignment PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentCommonAlignment PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentCommonAlignment PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentCommonAlignment PUBLIC /usr/include/boost/regex/)

