add_library(testCommonToolsUtil OBJECT 
  testSelectors.cc
  testSelectIterator.cc
  testComparators.cc
  testCutParser.cc
  testExpressionParser.cc
  testAssociationMapFilterValues.cc
  testFormulaEvaluator.cc
  testRunner.cpp
)

target_include_directories(testCommonToolsUtil PUBLIC /usr/include/boost/python/)
target_include_directories(testCommonToolsUtil PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testCommonToolsUtil PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCommonToolsUtil PUBLIC /usr/include/python2.7/)
target_include_directories(testCommonToolsUtil PUBLIC /usr/include/root/)
target_include_directories(testCommonToolsUtil PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testCommonToolsUtil PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCommonToolsUtil PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCommonToolsUtil PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCommonToolsUtil PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testCommonToolsUtil PUBLIC /usr/include/boost/)
target_include_directories(testCommonToolsUtil PUBLIC /usr/include/boost/regex/)

add_library(testCommonToolsUtilThreaded OBJECT 
  testCutParserThreaded.cc
)

target_include_directories(testCommonToolsUtilThreaded PUBLIC /usr/include/boost/python/)
target_include_directories(testCommonToolsUtilThreaded PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testCommonToolsUtilThreaded PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCommonToolsUtilThreaded PUBLIC /usr/include/python2.7/)
target_include_directories(testCommonToolsUtilThreaded PUBLIC /usr/include/root/)
target_include_directories(testCommonToolsUtilThreaded PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testCommonToolsUtilThreaded PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCommonToolsUtilThreaded PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCommonToolsUtilThreaded PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCommonToolsUtilThreaded PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testCommonToolsUtilThreaded PUBLIC /usr/include/boost/)
target_include_directories(testCommonToolsUtilThreaded PUBLIC /usr/include/boost/regex/)

add_library(testExpressionEvaluator OBJECT 
  testExpressionEvaluator.cc
  testRunner.cpp
)

target_include_directories(testExpressionEvaluator PUBLIC /usr/include/boost/python/)
target_include_directories(testExpressionEvaluator PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testExpressionEvaluator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testExpressionEvaluator PUBLIC /usr/include/python2.7/)
target_include_directories(testExpressionEvaluator PUBLIC /usr/include/root/)
target_include_directories(testExpressionEvaluator PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testExpressionEvaluator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testExpressionEvaluator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testExpressionEvaluator PUBLIC /usr/include/boost/serialization/)
target_include_directories(testExpressionEvaluator PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testExpressionEvaluator PUBLIC /usr/include/boost/)
target_include_directories(testExpressionEvaluator PUBLIC /usr/include/boost/regex/)

add_library(ExprEvalPopen_t OBJECT 
  ExprEvalPopen_t.cpp
)

target_include_directories(ExprEvalPopen_t PUBLIC /usr/include/boost/python/)
target_include_directories(ExprEvalPopen_t PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ExprEvalPopen_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ExprEvalPopen_t PUBLIC /usr/include/python2.7/)
target_include_directories(ExprEvalPopen_t PUBLIC /usr/include/root/)
target_include_directories(ExprEvalPopen_t PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ExprEvalPopen_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ExprEvalPopen_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ExprEvalPopen_t PUBLIC /usr/include/boost/serialization/)
target_include_directories(ExprEvalPopen_t PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ExprEvalPopen_t PUBLIC /usr/include/boost/)
target_include_directories(ExprEvalPopen_t PUBLIC /usr/include/boost/regex/)

add_library(ExpressionEvaluatorUnitTest OBJECT 
  ExpressionEvaluatorUnitTest.cpp
)

target_include_directories(ExpressionEvaluatorUnitTest PUBLIC /usr/include/boost/python/)
target_include_directories(ExpressionEvaluatorUnitTest PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ExpressionEvaluatorUnitTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ExpressionEvaluatorUnitTest PUBLIC /usr/include/python2.7/)
target_include_directories(ExpressionEvaluatorUnitTest PUBLIC /usr/include/root/)
target_include_directories(ExpressionEvaluatorUnitTest PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ExpressionEvaluatorUnitTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ExpressionEvaluatorUnitTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ExpressionEvaluatorUnitTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(ExpressionEvaluatorUnitTest PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ExpressionEvaluatorUnitTest PUBLIC /usr/include/boost/)
target_include_directories(ExpressionEvaluatorUnitTest PUBLIC /usr/include/boost/regex/)

add_library(testDynArray OBJECT 
  testDynArray.cpp
)

target_include_directories(testDynArray PUBLIC /usr/include/boost/python/)
target_include_directories(testDynArray PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testDynArray PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDynArray PUBLIC /usr/include/python2.7/)
target_include_directories(testDynArray PUBLIC /usr/include/root/)
target_include_directories(testDynArray PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testDynArray PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDynArray PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDynArray PUBLIC /usr/include/boost/serialization/)
target_include_directories(testDynArray PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testDynArray PUBLIC /usr/include/boost/)
target_include_directories(testDynArray PUBLIC /usr/include/boost/regex/)

