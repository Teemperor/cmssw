add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_library(DetectorDescriptionRegressionTest OBJECT 
  src/TinyDom.cc
  src/DDCompareTools.cc
  src/SaxToDom2.cc
  src/TinyDomTest2.cc
  src/DDErrorDetection.cc
  src/DDHtmlFormatter.cc
  src/build.cc
  src/TinyDomTest.cc
  src/DDExpandedViewDump.cc
  src/ddstats.cc
  src/SaxToDom.cc
  src/TinyDom2.cc
)

target_include_directories(DetectorDescriptionRegressionTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetectorDescriptionRegressionTest PUBLIC /usr/include/root/)
target_include_directories(DetectorDescriptionRegressionTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetectorDescriptionRegressionTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetectorDescriptionRegressionTest PUBLIC /usr/include/boost/)
target_include_directories(DetectorDescriptionRegressionTest PUBLIC /usr/include/boost/regex/)

