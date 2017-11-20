add_library(ExPopConAnalyzer OBJECT 
  stubs/ExSourceHandler.cc
  stubs/ExAnalyzer.cc
)

target_include_directories(ExPopConAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(ExPopConAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ExPopConAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(ExPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(ExPopConAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(ExPopConAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(ExPopConAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ExPopConAnalyzer PUBLIC /usr/include/root/)
target_include_directories(ExPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(ExPopConAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ExPopConAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(ExPopConAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(ExPopConEfficiency OBJECT 
  stubs/EffSourceHandler.cc
)

target_include_directories(ExPopConEfficiency PUBLIC /usr/include/python2.7/)
target_include_directories(ExPopConEfficiency PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ExPopConEfficiency PUBLIC /usr/include/boost/serialization/)
target_include_directories(ExPopConEfficiency PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(ExPopConEfficiency PUBLIC /usr/include/boost/)
target_include_directories(ExPopConEfficiency PUBLIC /usr/include/boost/python/)
target_include_directories(ExPopConEfficiency PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ExPopConEfficiency PUBLIC /usr/include/root/)
target_include_directories(ExPopConEfficiency PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(ExPopConEfficiency PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ExPopConEfficiency PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(ExPopConEfficiency PUBLIC /usr/include/boost/regex/)

