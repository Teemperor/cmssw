add_subdirectory(plugins)
add_library(CalibTrackerSiStripLorentzAngle OBJECT 
  src/SymmetryFit.cc
  src/LA_Filler.cc
  src/LA_Fitter.cc
  src/LA_Results.cc
)

target_include_directories(CalibTrackerSiStripLorentzAngle PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibTrackerSiStripLorentzAngle PUBLIC /usr/include/root/)
target_include_directories(CalibTrackerSiStripLorentzAngle PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibTrackerSiStripLorentzAngle PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibTrackerSiStripLorentzAngle PUBLIC /usr/include/boost/)
target_include_directories(CalibTrackerSiStripLorentzAngle PUBLIC /usr/include/boost/regex/)

