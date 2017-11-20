add_subdirectory(test)
add_library(CommonToolsUtils OBJECT 
  src/ExpressionSetter.cc
  src/formulaConstantEvaluator.cc
  src/TFileDirectory.cc
  src/ComparisonSetter.cc
  src/formulaEvaluatorBase.cc
  src/TH1AddDirectorySentry.cc
  src/TMVAEvaluator.cc
  src/MethodInvoker.cc
  src/formulaParameterEvaluator.cc
  src/returnType.cc
  src/LogicalBinaryOperator.cc
  src/findDataMember.cc
  src/ExpressionUnaryOperatorSetter.cc
  src/ExpressionFunctionSetter.cc
  src/ExpressionConditionSetter.cc
  src/formulaVariableEvaluator.cc
  src/cutParser.cc
  src/TMVAZipReader.cc
  src/ExpressionVar.cc
  src/expressionParser.cc
  src/ExpressionEvaluator.cc
  src/FormulaEvaluator.cc
  src/ExpressionVarSetter.cc
  src/MethodSetter.cc
  src/popenCPP.cc
  src/findMethod.cc
  src/Abort.cc
)

target_include_directories(CommonToolsUtils PUBLIC /usr/include/boost/python/)
target_include_directories(CommonToolsUtils PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CommonToolsUtils PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CommonToolsUtils PUBLIC /usr/include/python2.7/)
target_include_directories(CommonToolsUtils PUBLIC /usr/include/root/)
target_include_directories(CommonToolsUtils PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CommonToolsUtils PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CommonToolsUtils PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CommonToolsUtils PUBLIC /usr/include/boost/serialization/)
target_include_directories(CommonToolsUtils PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CommonToolsUtils PUBLIC /usr/include/boost/)
target_include_directories(CommonToolsUtils PUBLIC /usr/include/boost/regex/)

