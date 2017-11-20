add_library(TestDataFormatsHistogramsMEtoEDMFormat OBJECT 
  metoedmformat_t.cc
)

target_include_directories(TestDataFormatsHistogramsMEtoEDMFormat PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestDataFormatsHistogramsMEtoEDMFormat PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestDataFormatsHistogramsMEtoEDMFormat PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestDataFormatsHistogramsMEtoEDMFormat PUBLIC /usr/include/boost/)
target_include_directories(TestDataFormatsHistogramsMEtoEDMFormat PUBLIC /usr/include/root/)
target_include_directories(TestDataFormatsHistogramsMEtoEDMFormat PUBLIC /usr/include/boost/regex/)

