add_library(AlignmentSurveyAnalysisTest OBJECT 
  Modules.cc
  SurveyInputDummy.cc
  SurveyTest.cc
  SurveyInputTest.cc
  SurveyDBReader.cc
)

target_include_directories(AlignmentSurveyAnalysisTest PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentSurveyAnalysisTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentSurveyAnalysisTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentSurveyAnalysisTest PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentSurveyAnalysisTest PUBLIC /usr/include/boost/)
target_include_directories(AlignmentSurveyAnalysisTest PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentSurveyAnalysisTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentSurveyAnalysisTest PUBLIC /usr/include/root/)
target_include_directories(AlignmentSurveyAnalysisTest PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentSurveyAnalysisTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentSurveyAnalysisTest PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentSurveyAnalysisTest PUBLIC /usr/include/boost/regex/)

add_library(AlignmentSurveyAnalysisTest2 OBJECT 
  TestConverter.cpp
  TestIdealGeometry.cpp
  TestConverter2.cpp
  TestIdealGeometry2.cpp
)

target_include_directories(AlignmentSurveyAnalysisTest2 PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentSurveyAnalysisTest2 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentSurveyAnalysisTest2 PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentSurveyAnalysisTest2 PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentSurveyAnalysisTest2 PUBLIC /usr/include/boost/)
target_include_directories(AlignmentSurveyAnalysisTest2 PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentSurveyAnalysisTest2 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentSurveyAnalysisTest2 PUBLIC /usr/include/root/)
target_include_directories(AlignmentSurveyAnalysisTest2 PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentSurveyAnalysisTest2 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentSurveyAnalysisTest2 PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentSurveyAnalysisTest2 PUBLIC /usr/include/boost/regex/)

