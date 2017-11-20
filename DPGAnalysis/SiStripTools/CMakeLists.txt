add_subdirectory(bin)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DPGAnalysisSiStripToolssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DPGAnalysis/SiStripTools/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DPGAnalysisSiStripToolssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DPGAnalysis/SiStripTools/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DPGAnalysis/SiStripTools/src/classes.h /home/teemperor/cms/cmssw/DPGAnalysis/SiStripTools/src/classes_def.xml
  COMMENT "Generating ROOT dict DPGAnalysisSiStripToolssrcclassesh")

add_library(DPGAnalysisSiStripTools OBJECT 
  src/DigiVertexCorrHistogramMaker.cc
  src/MultiplicityCorrelatorHistogramMaker.cc
  src/RunHistogramManager.cc
  src/CommonAnalyzer.cc
  src/TSOSHistogramMaker.cc
  src/DigiInvestigatorHistogramMaker.cc
  src/SiStripTKNumbers.cc
  src/DigiPileupCorrHistogramMaker.cc
  src/EventShape.cc
  src/TinyEvent.cc
  src/APVCyclePhaseCollection.cc
  src/DigiBXCorrHistogramMaker.cc
  src/DigiLumiCorrHistogramMaker.cc
  src/EventWithHistory.cc
  src/EventWithHistoryFilter.cc
  src/Multiplicities.cc
  src/DigiVtxPosCorrHistogramMaker.cc
  ${CMAKE_BINARY_DIR}/DPGAnalysisSiStripToolssrcclassesh_rflx.cpp
)

target_include_directories(DPGAnalysisSiStripTools PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DPGAnalysisSiStripTools PUBLIC /usr/include/python2.7/)
target_include_directories(DPGAnalysisSiStripTools PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DPGAnalysisSiStripTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DPGAnalysisSiStripTools PUBLIC /usr/include/boost/serialization/)
target_include_directories(DPGAnalysisSiStripTools PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DPGAnalysisSiStripTools PUBLIC /usr/include/boost/)
target_include_directories(DPGAnalysisSiStripTools PUBLIC /usr/include/boost/python/)
target_include_directories(DPGAnalysisSiStripTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DPGAnalysisSiStripTools PUBLIC /usr/include/root/)
target_include_directories(DPGAnalysisSiStripTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DPGAnalysisSiStripTools PUBLIC /usr/include/boost/regex/)

