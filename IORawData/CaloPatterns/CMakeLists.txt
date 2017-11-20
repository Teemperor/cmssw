add_library(IORawDataCaloPatterns OBJECT 
  src/HcalPatternXMLParser.cc
  src/HtrXmlPatternSet.cc
  src/HtrXmlPatternTool.cc
  src/HcalPatternSource.cc
  src/HtrXmlPatternWriter.cc
  src/HtrXmlPattern.cc
  src/Module.cc
  src/HtrXmlPatternToolParameters.cc
  src/HcalFiberPattern.cc
)

target_include_directories(IORawDataCaloPatterns PUBLIC /usr/include/boost/python/)
target_include_directories(IORawDataCaloPatterns PUBLIC /usr/include/boost/filesystem/)
target_include_directories(IORawDataCaloPatterns PUBLIC /usr/include/python2.7/)
target_include_directories(IORawDataCaloPatterns PUBLIC /usr/include/root/)
target_include_directories(IORawDataCaloPatterns PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IORawDataCaloPatterns PUBLIC /usr/include/boost/serialization/)
target_include_directories(IORawDataCaloPatterns PUBLIC /home/teemperor/cms/md5/)
target_include_directories(IORawDataCaloPatterns PUBLIC /usr/include/boost/)
target_include_directories(IORawDataCaloPatterns PUBLIC /usr/include/boost/regex/)

