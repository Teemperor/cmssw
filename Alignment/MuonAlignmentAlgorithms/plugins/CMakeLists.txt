add_library(CSCOverlapsAlignmentAlgorithm OBJECT 
  CSCOverlapsAlignmentAlgorithm.cc
  CSCOverlapsTrackPreparation.cc
  CSCOverlapsBeamSplashCut.cc
  CSCPairResidualsConstraint.cc
  CSCChamberFitter.cc
  CSCAlignmentCorrections.cc
)

target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /usr/include/python2.7/)
target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /usr/include/boost/)
target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /usr/include/boost/python/)
target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /usr/include/root/)
target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCOverlapsAlignmentAlgorithm PUBLIC /usr/include/boost/regex/)

add_library(MuonAlignmentFromReference OBJECT 
  MuonAlignmentFromReference.cc
)

target_include_directories(MuonAlignmentFromReference PUBLIC /usr/include/boost/iostreams/)
target_include_directories(MuonAlignmentFromReference PUBLIC /usr/include/python2.7/)
target_include_directories(MuonAlignmentFromReference PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(MuonAlignmentFromReference PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MuonAlignmentFromReference PUBLIC /usr/include/boost/serialization/)
target_include_directories(MuonAlignmentFromReference PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(MuonAlignmentFromReference PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(MuonAlignmentFromReference PUBLIC /usr/include/boost/)
target_include_directories(MuonAlignmentFromReference PUBLIC /usr/include/boost/python/)
target_include_directories(MuonAlignmentFromReference PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MuonAlignmentFromReference PUBLIC /usr/include/root/)
target_include_directories(MuonAlignmentFromReference PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(MuonAlignmentFromReference PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MuonAlignmentFromReference PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(MuonAlignmentFromReference PUBLIC /usr/include/boost/regex/)

add_library(MuonAlignmentPreFilter OBJECT 
  MuonAlignmentPreFilter.cc
)

target_include_directories(MuonAlignmentPreFilter PUBLIC /usr/include/boost/iostreams/)
target_include_directories(MuonAlignmentPreFilter PUBLIC /usr/include/python2.7/)
target_include_directories(MuonAlignmentPreFilter PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(MuonAlignmentPreFilter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MuonAlignmentPreFilter PUBLIC /usr/include/boost/serialization/)
target_include_directories(MuonAlignmentPreFilter PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(MuonAlignmentPreFilter PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(MuonAlignmentPreFilter PUBLIC /usr/include/boost/)
target_include_directories(MuonAlignmentPreFilter PUBLIC /usr/include/boost/python/)
target_include_directories(MuonAlignmentPreFilter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MuonAlignmentPreFilter PUBLIC /usr/include/root/)
target_include_directories(MuonAlignmentPreFilter PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(MuonAlignmentPreFilter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MuonAlignmentPreFilter PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(MuonAlignmentPreFilter PUBLIC /usr/include/boost/regex/)

add_library(MuonMillepedeAlgorithm OBJECT 
  MuonMillepedeAlgorithm.cc
  MuonMillepedeTrackRefitter.cc
)

target_include_directories(MuonMillepedeAlgorithm PUBLIC /usr/include/boost/iostreams/)
target_include_directories(MuonMillepedeAlgorithm PUBLIC /usr/include/python2.7/)
target_include_directories(MuonMillepedeAlgorithm PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(MuonMillepedeAlgorithm PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MuonMillepedeAlgorithm PUBLIC /usr/include/boost/serialization/)
target_include_directories(MuonMillepedeAlgorithm PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(MuonMillepedeAlgorithm PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(MuonMillepedeAlgorithm PUBLIC /usr/include/boost/)
target_include_directories(MuonMillepedeAlgorithm PUBLIC /usr/include/boost/python/)
target_include_directories(MuonMillepedeAlgorithm PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MuonMillepedeAlgorithm PUBLIC /usr/include/root/)
target_include_directories(MuonMillepedeAlgorithm PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(MuonMillepedeAlgorithm PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MuonMillepedeAlgorithm PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(MuonMillepedeAlgorithm PUBLIC /usr/include/boost/regex/)

