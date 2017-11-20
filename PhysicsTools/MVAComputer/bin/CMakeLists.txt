add_library(mvaConvertTMVAWeights OBJECT 
  mvaConvertTMVAWeights.cpp
)

target_include_directories(mvaConvertTMVAWeights PUBLIC /usr/include/boost/python/)
target_include_directories(mvaConvertTMVAWeights PUBLIC /usr/include/boost/iostreams/)
target_include_directories(mvaConvertTMVAWeights PUBLIC /usr/include/boost/filesystem/)
target_include_directories(mvaConvertTMVAWeights PUBLIC /usr/include/python2.7/)
target_include_directories(mvaConvertTMVAWeights PUBLIC /usr/include/root/)
target_include_directories(mvaConvertTMVAWeights PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(mvaConvertTMVAWeights PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(mvaConvertTMVAWeights PUBLIC /usr/include/boost/serialization/)
target_include_directories(mvaConvertTMVAWeights PUBLIC /home/teemperor/cms/md5/)
target_include_directories(mvaConvertTMVAWeights PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(mvaConvertTMVAWeights PUBLIC /usr/include/boost/)
target_include_directories(mvaConvertTMVAWeights PUBLIC /usr/include/boost/regex/)

add_library(mvaExtractPDFs OBJECT 
  mvaExtractPDFs.cpp
)

target_include_directories(mvaExtractPDFs PUBLIC /usr/include/boost/python/)
target_include_directories(mvaExtractPDFs PUBLIC /usr/include/boost/iostreams/)
target_include_directories(mvaExtractPDFs PUBLIC /usr/include/boost/filesystem/)
target_include_directories(mvaExtractPDFs PUBLIC /usr/include/python2.7/)
target_include_directories(mvaExtractPDFs PUBLIC /usr/include/root/)
target_include_directories(mvaExtractPDFs PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(mvaExtractPDFs PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(mvaExtractPDFs PUBLIC /usr/include/boost/serialization/)
target_include_directories(mvaExtractPDFs PUBLIC /home/teemperor/cms/md5/)
target_include_directories(mvaExtractPDFs PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(mvaExtractPDFs PUBLIC /usr/include/boost/)
target_include_directories(mvaExtractPDFs PUBLIC /usr/include/boost/regex/)

