add_library(EgammaEGammaAnalysisToolsTest OBJECT 
  CorrectECALIsolation.cc
  ElectronIsoAnalyzer.cc
  ElectronIDValidationAnalyzer.cc
  ElectronTestAnalyzer.cc
  MiniAODElectronIDValidationAnalyzer.cc
)

target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /usr/include/boost/iostreams/)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /usr/include/python2.7/)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /usr/include/boost/)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /usr/include/eigen3/)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /usr/include/boost/python/)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /usr/include/root/)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(EgammaEGammaAnalysisToolsTest PUBLIC /usr/include/boost/regex/)

