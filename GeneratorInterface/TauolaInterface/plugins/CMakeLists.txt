add_library(TauolappInterface OBJECT 
  Tauolapp/module.cc
  Tauolapp/TauolappInterface.cc
)

target_include_directories(TauolappInterface PUBLIC /usr/include/boost/python/)
target_include_directories(TauolappInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TauolappInterface PUBLIC /usr/include/python2.7/)
target_include_directories(TauolappInterface PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(TauolappInterface PUBLIC /usr/include/root/)
target_include_directories(TauolappInterface PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(TauolappInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TauolappInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TauolappInterface PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(TauolappInterface PUBLIC /usr/include/boost/)
target_include_directories(TauolappInterface PUBLIC /usr/include/boost/regex/)

add_library(TauSpinnerInterface OBJECT 
  TauSpinner/TauSpinnerFilter.cc
  TauSpinner/TauSpinnerCMS.cc
  TauSpinner/read_particles_from_HepMC.cc
)

target_include_directories(TauSpinnerInterface PUBLIC /usr/include/boost/python/)
target_include_directories(TauSpinnerInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TauSpinnerInterface PUBLIC /usr/include/python2.7/)
target_include_directories(TauSpinnerInterface PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(TauSpinnerInterface PUBLIC /usr/include/root/)
target_include_directories(TauSpinnerInterface PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(TauSpinnerInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TauSpinnerInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TauSpinnerInterface PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(TauSpinnerInterface PUBLIC /usr/include/boost/)
target_include_directories(TauSpinnerInterface PUBLIC /usr/include/boost/regex/)

