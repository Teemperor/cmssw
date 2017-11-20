add_subdirectory(test)
add_subdirectory(plugins)
add_library(AlignmentSurveyAnalysis OBJECT 
  src/SurveyParameters.cc
  src/Chi2.cc
  src/SurveyInputBase.cc
  src/SurveyAlignmentPoints.cc
  src/DTSurvey.cc
  src/DTSurveyChamber.cc
  src/SurveyPxbImageLocalFit.cc
  src/SurveyOutput.cc
  src/SurveyPxbDicer.cc
  src/SurveyPxbImage.cc
  src/SurveyDataReader.cc
  src/SurveyInputTextReader.cc
  src/SurveyAlignmentSensor.cc
  src/SurveyAlignment.cc
)

target_include_directories(AlignmentSurveyAnalysis PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentSurveyAnalysis PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentSurveyAnalysis PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentSurveyAnalysis PUBLIC /usr/include/root/)
target_include_directories(AlignmentSurveyAnalysis PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentSurveyAnalysis PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentSurveyAnalysis PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentSurveyAnalysis PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentSurveyAnalysis PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentSurveyAnalysis PUBLIC /usr/include/boost/)
target_include_directories(AlignmentSurveyAnalysis PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentSurveyAnalysis PUBLIC /usr/include/boost/regex/)

