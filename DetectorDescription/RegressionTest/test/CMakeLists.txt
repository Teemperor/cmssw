add_library(DetectorDescriptionRegressionTestDDErrorReport OBJECT 
  TestIntegration.cpp
)

target_include_directories(DetectorDescriptionRegressionTestDDErrorReport PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetectorDescriptionRegressionTestDDErrorReport PUBLIC /usr/include/root/)
target_include_directories(DetectorDescriptionRegressionTestDDErrorReport PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetectorDescriptionRegressionTestDDErrorReport PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetectorDescriptionRegressionTestDDErrorReport PUBLIC /usr/include/boost/)
target_include_directories(DetectorDescriptionRegressionTestDDErrorReport PUBLIC /usr/include/boost/regex/)

add_library(DetectorDescriptionRegressionTestDOMCount OBJECT 
  TestIntegration.cpp
)

target_include_directories(DetectorDescriptionRegressionTestDOMCount PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetectorDescriptionRegressionTestDOMCount PUBLIC /usr/include/root/)
target_include_directories(DetectorDescriptionRegressionTestDOMCount PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetectorDescriptionRegressionTestDOMCount PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetectorDescriptionRegressionTestDOMCount PUBLIC /usr/include/boost/)
target_include_directories(DetectorDescriptionRegressionTestDOMCount PUBLIC /usr/include/boost/regex/)

add_library(DDCompareCPV OBJECT 
  DDCompareCPV.cpp
)

target_include_directories(DDCompareCPV PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DDCompareCPV PUBLIC /usr/include/root/)
target_include_directories(DDCompareCPV PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DDCompareCPV PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DDCompareCPV PUBLIC /usr/include/boost/program_options/)
target_include_directories(DDCompareCPV PUBLIC /usr/include/boost/)
target_include_directories(DDCompareCPV PUBLIC /usr/include/boost/regex/)

add_library(html_ddd OBJECT 
  html_ddd.cpp
)

target_include_directories(html_ddd PUBLIC /usr/include/boost/filesystem/)
target_include_directories(html_ddd PUBLIC /usr/include/root/)
target_include_directories(html_ddd PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(html_ddd PUBLIC /home/teemperor/cms/md5/)
target_include_directories(html_ddd PUBLIC /usr/include/boost/)
target_include_directories(html_ddd PUBLIC /usr/include/boost/regex/)

add_library(simple_dom_parser OBJECT 
  simple_dom_parser.cpp
)

target_include_directories(simple_dom_parser PUBLIC /usr/include/boost/filesystem/)
target_include_directories(simple_dom_parser PUBLIC /usr/include/root/)
target_include_directories(simple_dom_parser PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(simple_dom_parser PUBLIC /home/teemperor/cms/md5/)
target_include_directories(simple_dom_parser PUBLIC /usr/include/boost/)
target_include_directories(simple_dom_parser PUBLIC /usr/include/boost/regex/)

add_library(simple_dom_parser2 OBJECT 
  simple_dom_parser2.cpp
)

target_include_directories(simple_dom_parser2 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(simple_dom_parser2 PUBLIC /usr/include/root/)
target_include_directories(simple_dom_parser2 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(simple_dom_parser2 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(simple_dom_parser2 PUBLIC /usr/include/boost/)
target_include_directories(simple_dom_parser2 PUBLIC /usr/include/boost/regex/)

add_library(named_types OBJECT 
  named_types.cpp
)

target_include_directories(named_types PUBLIC /usr/include/boost/filesystem/)
target_include_directories(named_types PUBLIC /usr/include/root/)
target_include_directories(named_types PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(named_types PUBLIC /home/teemperor/cms/md5/)
target_include_directories(named_types PUBLIC /usr/include/boost/)
target_include_directories(named_types PUBLIC /usr/include/boost/regex/)

add_library(DetectorDescriptionTestAlgorithmPlugins OBJECT 
  test_module.cc
)

target_include_directories(DetectorDescriptionTestAlgorithmPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetectorDescriptionTestAlgorithmPlugins PUBLIC /usr/include/root/)
target_include_directories(DetectorDescriptionTestAlgorithmPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetectorDescriptionTestAlgorithmPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetectorDescriptionTestAlgorithmPlugins PUBLIC /usr/include/boost/)
target_include_directories(DetectorDescriptionTestAlgorithmPlugins PUBLIC /usr/include/boost/regex/)

add_library(algorithm_plugin_test OBJECT 
  algorithm_plugin_test.cpp
)

target_include_directories(algorithm_plugin_test PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(algorithm_plugin_test PUBLIC /home/teemperor/cms/md5/)
target_include_directories(algorithm_plugin_test PUBLIC /usr/include/boost/filesystem/)
target_include_directories(algorithm_plugin_test PUBLIC /usr/include/boost/)
target_include_directories(algorithm_plugin_test PUBLIC /usr/include/root/)
target_include_directories(algorithm_plugin_test PUBLIC /usr/include/boost/regex/)

add_library(testrot OBJECT 
  testrot.cpp
)

target_include_directories(testrot PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testrot PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testrot PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testrot PUBLIC /usr/include/boost/)
target_include_directories(testrot PUBLIC /usr/include/root/)
target_include_directories(testrot PUBLIC /usr/include/boost/regex/)

add_library(reg_ddcore OBJECT 
  reg_ddcore.cpp
)

target_include_directories(reg_ddcore PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(reg_ddcore PUBLIC /home/teemperor/cms/md5/)
target_include_directories(reg_ddcore PUBLIC /usr/include/boost/filesystem/)
target_include_directories(reg_ddcore PUBLIC /usr/include/boost/)
target_include_directories(reg_ddcore PUBLIC /usr/include/root/)
target_include_directories(reg_ddcore PUBLIC /usr/include/boost/regex/)

add_library(reg_ddparser OBJECT 
  reg_ddparser.cpp
)

target_include_directories(reg_ddparser PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(reg_ddparser PUBLIC /home/teemperor/cms/md5/)
target_include_directories(reg_ddparser PUBLIC /usr/include/boost/filesystem/)
target_include_directories(reg_ddparser PUBLIC /usr/include/boost/)
target_include_directories(reg_ddparser PUBLIC /usr/include/root/)
target_include_directories(reg_ddparser PUBLIC /usr/include/boost/regex/)

add_library(const_dump OBJECT 
  const_dump.cpp
)

target_include_directories(const_dump PUBLIC /usr/include/boost/python/)
target_include_directories(const_dump PUBLIC /usr/include/boost/filesystem/)
target_include_directories(const_dump PUBLIC /usr/include/python2.7/)
target_include_directories(const_dump PUBLIC /usr/include/root/)
target_include_directories(const_dump PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(const_dump PUBLIC /home/teemperor/cms/md5/)
target_include_directories(const_dump PUBLIC /usr/include/boost/)
target_include_directories(const_dump PUBLIC /usr/include/boost/regex/)

add_library(DetectorDescriptionTutorial OBJECT 
  tutorial.cc
)

target_include_directories(DetectorDescriptionTutorial PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetectorDescriptionTutorial PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetectorDescriptionTutorial PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetectorDescriptionTutorial PUBLIC /usr/include/boost/)
target_include_directories(DetectorDescriptionTutorial PUBLIC /usr/include/root/)
target_include_directories(DetectorDescriptionTutorial PUBLIC /usr/include/boost/regex/)

