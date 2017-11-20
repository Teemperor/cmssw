add_subdirectory(plugins)
add_library(CondToolsDQM OBJECT 
  src/DQMSummarySourceHandler.cc
  src/DQMReferenceHistogramRootFileSourceHandler.cc
  src/TestBase.cc
  src/DQMXMLFileSourceHandler.cc
  src/ReadBase.cc
  src/DQMSummaryReader.cc
)

target_include_directories(CondToolsDQM PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsDQM PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CondToolsDQM PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsDQM PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsDQM PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsDQM PUBLIC /usr/include/boost/)
target_include_directories(CondToolsDQM PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsDQM PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsDQM PUBLIC /usr/include/root/)
target_include_directories(CondToolsDQM PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsDQM PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsDQM PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsDQM PUBLIC /usr/include/boost/regex/)

