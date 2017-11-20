add_library(DataFormatsBasicVector_t OBJECT 
  BasicVector_t.cpp
)

target_include_directories(DataFormatsBasicVector_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsBasicVector_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsBasicVector_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsBasicVector_t PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsBasicVector_t PUBLIC /usr/include/root/)
target_include_directories(DataFormatsBasicVector_t PUBLIC /usr/include/boost/regex/)

add_library(GeomVectPhiLess_t OBJECT 
  phiLess_t.cpp
)

target_include_directories(GeomVectPhiLess_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeomVectPhiLess_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeomVectPhiLess_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeomVectPhiLess_t PUBLIC /usr/include/boost/)
target_include_directories(GeomVectPhiLess_t PUBLIC /usr/include/root/)
target_include_directories(GeomVectPhiLess_t PUBLIC /usr/include/boost/regex/)

add_library(DataFormatsIntervals_t OBJECT 
  Intervals_t.cpp
)

target_include_directories(DataFormatsIntervals_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsIntervals_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsIntervals_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsIntervals_t PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsIntervals_t PUBLIC /usr/include/root/)
target_include_directories(DataFormatsIntervals_t PUBLIC /usr/include/boost/regex/)

