add_library(AlignmentSurveyAnalysisPlugins OBJECT 
  SurveyInputTrackerFromDB.cc
  CreateSurveyRcds.cc
  SurveyDataConverter.cc
  SurveyInputCSCfromPins.cc
  SurveyMisalignmentInput.cc
  SurveyDBUploader.cc
  DTSurveyConvert.cc
  SurveyAlignmentAlgorithm.cc
)

target_include_directories(AlignmentSurveyAnalysisPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentSurveyAnalysisPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentSurveyAnalysisPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentSurveyAnalysisPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentSurveyAnalysisPlugins PUBLIC /usr/include/boost/)
target_include_directories(AlignmentSurveyAnalysisPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentSurveyAnalysisPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentSurveyAnalysisPlugins PUBLIC /usr/include/root/)
target_include_directories(AlignmentSurveyAnalysisPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentSurveyAnalysisPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentSurveyAnalysisPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentSurveyAnalysisPlugins PUBLIC /usr/include/boost/regex/)

