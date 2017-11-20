add_library(testPhysicsToolsUtilities OBJECT 
  testPolynomial.cc
  testParameter.cc
  testFunctions.cc
  testSimplifications.cc
  testFunctionsIO.cc
  testVariables.cc
  testDerivatives.cc
  testPrimitive.cc
  testIntegral.cc
  testRunner.cpp
  testLumiReweight.cc
)

target_include_directories(testPhysicsToolsUtilities PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testPhysicsToolsUtilities PUBLIC /usr/include/root/)
target_include_directories(testPhysicsToolsUtilities PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testPhysicsToolsUtilities PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testPhysicsToolsUtilities PUBLIC /usr/include/boost/serialization/)
target_include_directories(testPhysicsToolsUtilities PUBLIC /usr/include/boost/)
target_include_directories(testPhysicsToolsUtilities PUBLIC /usr/include/boost/regex/)

add_library(testZMassFit OBJECT 
  testZMassFit.cpp
)

target_include_directories(testZMassFit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testZMassFit PUBLIC /usr/include/root/)
target_include_directories(testZMassFit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testZMassFit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testZMassFit PUBLIC /usr/include/boost/)
target_include_directories(testZMassFit PUBLIC /usr/include/boost/regex/)

add_library(testZMassFitSimple OBJECT 
  testZMassFitSimple.cpp
)

target_include_directories(testZMassFitSimple PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testZMassFitSimple PUBLIC /usr/include/root/)
target_include_directories(testZMassFitSimple PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testZMassFitSimple PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testZMassFitSimple PUBLIC /usr/include/boost/)
target_include_directories(testZMassFitSimple PUBLIC /usr/include/boost/regex/)

add_library(testZMassFitLikelihood OBJECT 
  testZMassFitLikelihood.cpp
)

target_include_directories(testZMassFitLikelihood PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testZMassFitLikelihood PUBLIC /usr/include/root/)
target_include_directories(testZMassFitLikelihood PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testZMassFitLikelihood PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testZMassFitLikelihood PUBLIC /usr/include/boost/)
target_include_directories(testZMassFitLikelihood PUBLIC /usr/include/boost/regex/)

add_library(testZMassFitExtLikelihood OBJECT 
  testZMassFitExtLikelihood.cpp
)

target_include_directories(testZMassFitExtLikelihood PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testZMassFitExtLikelihood PUBLIC /usr/include/root/)
target_include_directories(testZMassFitExtLikelihood PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testZMassFitExtLikelihood PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testZMassFitExtLikelihood PUBLIC /usr/include/boost/)
target_include_directories(testZMassFitExtLikelihood PUBLIC /usr/include/boost/regex/)

add_library(testExpressionFit OBJECT 
  testExpressionFit.cpp
)

target_include_directories(testExpressionFit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testExpressionFit PUBLIC /usr/include/root/)
target_include_directories(testExpressionFit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testExpressionFit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testExpressionFit PUBLIC /usr/include/boost/)
target_include_directories(testExpressionFit PUBLIC /usr/include/boost/regex/)

add_library(testRooFitFunction OBJECT 
  testRooFitFunction.cpp
)

target_include_directories(testRooFitFunction PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testRooFitFunction PUBLIC /usr/include/root/)
target_include_directories(testRooFitFunction PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testRooFitFunction PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testRooFitFunction PUBLIC /usr/include/boost/)
target_include_directories(testRooFitFunction PUBLIC /usr/include/boost/regex/)

add_library(testIntegralTiming OBJECT 
  testIntegralTiming.cpp
)

target_include_directories(testIntegralTiming PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testIntegralTiming PUBLIC /usr/include/root/)
target_include_directories(testIntegralTiming PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testIntegralTiming PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testIntegralTiming PUBLIC /usr/include/boost/)
target_include_directories(testIntegralTiming PUBLIC /usr/include/boost/regex/)

add_library(testSideBandSubtraction OBJECT 
  testSideBandSubtraction.cc
)

target_include_directories(testSideBandSubtraction PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSideBandSubtraction PUBLIC /usr/include/root/)
target_include_directories(testSideBandSubtraction PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSideBandSubtraction PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSideBandSubtraction PUBLIC /usr/include/boost/)
target_include_directories(testSideBandSubtraction PUBLIC /usr/include/boost/regex/)

add_library(test_Poisson OBJECT 
  test_Poisson.cpp
)

target_include_directories(test_Poisson PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_Poisson PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_Poisson PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_Poisson PUBLIC /usr/include/boost/)
target_include_directories(test_Poisson PUBLIC /usr/include/root/)
target_include_directories(test_Poisson PUBLIC /usr/include/boost/regex/)

