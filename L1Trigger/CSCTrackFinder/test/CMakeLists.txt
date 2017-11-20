add_library(CSCMakeSRLUT OBJECT 
  analysis/CSCMakeSRLUT.cc
)

target_include_directories(CSCMakeSRLUT PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CSCMakeSRLUT PUBLIC /usr/include/python2.7/)
target_include_directories(CSCMakeSRLUT PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CSCMakeSRLUT PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCMakeSRLUT PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCMakeSRLUT PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CSCMakeSRLUT PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCMakeSRLUT PUBLIC /usr/include/boost/)
target_include_directories(CSCMakeSRLUT PUBLIC /usr/include/boost/python/)
target_include_directories(CSCMakeSRLUT PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCMakeSRLUT PUBLIC /usr/include/root/)
target_include_directories(CSCMakeSRLUT PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCMakeSRLUT PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCMakeSRLUT PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCMakeSRLUT PUBLIC /usr/include/boost/regex/)

add_library(CSCMakePTLUT OBJECT 
  analysis/CSCMakePTLUT.cc
)

target_include_directories(CSCMakePTLUT PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CSCMakePTLUT PUBLIC /usr/include/python2.7/)
target_include_directories(CSCMakePTLUT PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CSCMakePTLUT PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCMakePTLUT PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCMakePTLUT PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CSCMakePTLUT PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCMakePTLUT PUBLIC /usr/include/boost/)
target_include_directories(CSCMakePTLUT PUBLIC /usr/include/boost/python/)
target_include_directories(CSCMakePTLUT PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCMakePTLUT PUBLIC /usr/include/root/)
target_include_directories(CSCMakePTLUT PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCMakePTLUT PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCMakePTLUT PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCMakePTLUT PUBLIC /usr/include/boost/regex/)

add_library(CSCTFAnaHelpers OBJECT 
  src/TFTrack.cc
  src/Track.cc
  src/MultiplicityHistogramList.cc
  src/ResolutionHistogramList.cc
  src/RefTrack.cc
  src/RunSRLUTs.cc
  src/StatisticsFile.cc
  src/EffHistogramList.cc
  src/RHistogram.cc
  src/TrackHistogramList.cc
)

target_include_directories(CSCTFAnaHelpers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CSCTFAnaHelpers PUBLIC /usr/include/python2.7/)
target_include_directories(CSCTFAnaHelpers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CSCTFAnaHelpers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCTFAnaHelpers PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCTFAnaHelpers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CSCTFAnaHelpers PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCTFAnaHelpers PUBLIC /usr/include/boost/)
target_include_directories(CSCTFAnaHelpers PUBLIC /usr/include/boost/python/)
target_include_directories(CSCTFAnaHelpers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCTFAnaHelpers PUBLIC /usr/include/root/)
target_include_directories(CSCTFAnaHelpers PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCTFAnaHelpers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCTFAnaHelpers PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCTFAnaHelpers PUBLIC /usr/include/boost/regex/)

add_library(CSCTFEfficiency OBJECT 
  analysis/CSCTFEfficiency.cc
)

target_include_directories(CSCTFEfficiency PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CSCTFEfficiency PUBLIC /usr/include/python2.7/)
target_include_directories(CSCTFEfficiency PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CSCTFEfficiency PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCTFEfficiency PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCTFEfficiency PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CSCTFEfficiency PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCTFEfficiency PUBLIC /usr/include/boost/)
target_include_directories(CSCTFEfficiency PUBLIC /usr/include/boost/python/)
target_include_directories(CSCTFEfficiency PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCTFEfficiency PUBLIC /usr/include/root/)
target_include_directories(CSCTFEfficiency PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCTFEfficiency PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCTFEfficiency PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCTFEfficiency PUBLIC /usr/include/boost/regex/)

add_library(CSCTFLCTAna OBJECT 
  analysis/LCTPrinter.cc
  analysis/LCTOccupancies.cc
)

target_include_directories(CSCTFLCTAna PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CSCTFLCTAna PUBLIC /usr/include/python2.7/)
target_include_directories(CSCTFLCTAna PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CSCTFLCTAna PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCTFLCTAna PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCTFLCTAna PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CSCTFLCTAna PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCTFLCTAna PUBLIC /usr/include/boost/)
target_include_directories(CSCTFLCTAna PUBLIC /usr/include/boost/python/)
target_include_directories(CSCTFLCTAna PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCTFLCTAna PUBLIC /usr/include/root/)
target_include_directories(CSCTFLCTAna PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCTFLCTAna PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCTFLCTAna PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCTFLCTAna PUBLIC /usr/include/boost/regex/)

add_library(CSCTFFilter OBJECT 
  analysis/CSCTFFilter.cc
)

target_include_directories(CSCTFFilter PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CSCTFFilter PUBLIC /usr/include/python2.7/)
target_include_directories(CSCTFFilter PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CSCTFFilter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CSCTFFilter PUBLIC /usr/include/boost/serialization/)
target_include_directories(CSCTFFilter PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CSCTFFilter PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CSCTFFilter PUBLIC /usr/include/boost/)
target_include_directories(CSCTFFilter PUBLIC /usr/include/boost/python/)
target_include_directories(CSCTFFilter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CSCTFFilter PUBLIC /usr/include/root/)
target_include_directories(CSCTFFilter PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CSCTFFilter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CSCTFFilter PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CSCTFFilter PUBLIC /usr/include/boost/regex/)

