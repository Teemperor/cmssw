add_library(cmsScimark2 OBJECT 
  scimark2.c
  array.c
  FFT.c
  kernel.c
  LU.c
  MonteCarlo.c
  Random.c
  SOR.c
  SparseCompRow.c
  Stopwatch.c
)

target_include_directories(cmsScimark2 PUBLIC /usr/include/boost/python/)
target_include_directories(cmsScimark2 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(cmsScimark2 PUBLIC /usr/include/python2.7/)
target_include_directories(cmsScimark2 PUBLIC /usr/include/root/)
target_include_directories(cmsScimark2 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(cmsScimark2 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(cmsScimark2 PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(cmsScimark2 PUBLIC /usr/include/boost/)
target_include_directories(cmsScimark2 PUBLIC /usr/include/boost/regex/)

