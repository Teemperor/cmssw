add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/AnalysisDataFormatsEWKsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/AnalysisDataFormats/EWK/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/AnalysisDataFormatsEWKsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/AnalysisDataFormats/EWK/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/AnalysisDataFormats/EWK/src/classes.h /home/teemperor/cms/cmssw/AnalysisDataFormats/EWK/src/classes_def.xml
  COMMENT "Generating ROOT dict AnalysisDataFormatsEWKsrcclassesh")

add_library(AnalysisDataFormatsEWK OBJECT 
  src/WMuNuCandidatePtr.cc
  src/WMuNuCandidate.cc
  ${CMAKE_BINARY_DIR}/AnalysisDataFormatsEWKsrcclassesh_rflx.cpp
)

target_include_directories(AnalysisDataFormatsEWK PUBLIC /usr/include/boost/iostreams/)
target_include_directories(AnalysisDataFormatsEWK PUBLIC /usr/include/python2.7/)
target_include_directories(AnalysisDataFormatsEWK PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(AnalysisDataFormatsEWK PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AnalysisDataFormatsEWK PUBLIC /usr/include/boost/serialization/)
target_include_directories(AnalysisDataFormatsEWK PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(AnalysisDataFormatsEWK PUBLIC /usr/include/boost/)
target_include_directories(AnalysisDataFormatsEWK PUBLIC /usr/include/boost/python/)
target_include_directories(AnalysisDataFormatsEWK PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AnalysisDataFormatsEWK PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(AnalysisDataFormatsEWK PUBLIC /usr/include/root/)
target_include_directories(AnalysisDataFormatsEWK PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AnalysisDataFormatsEWK PUBLIC /usr/include/boost/regex/)

