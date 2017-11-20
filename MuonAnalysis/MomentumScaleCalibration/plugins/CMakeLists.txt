add_library(MuonAnalysisMomentumScaleCalibrationPlugins OBJECT 
  TestResolution.cc
  MuScleFitFilter.cc
  MuScleFitGenFilter.cc
  MuScleFitMuonProducer.cc
  MuScleFit.cc
  MuScleFitPlotter.cc
  MuScleFitBase.cc
  TestCorrection.cc
  MuScleFitMuonSelector.cc
  ResolutionAnalyzer.cc
  DBReader.cc
  ErrorsAnalyzer.cc
  MuScleFitUtils.cc
  ErrorsPropagationAnalyzer.cc
  TreeSplitter.cc
  DBWriter.cc
)

target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /usr/include/boost/)
target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /usr/include/root/)
target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(MuonAnalysisMomentumScaleCalibrationPlugins PUBLIC /usr/include/boost/regex/)

