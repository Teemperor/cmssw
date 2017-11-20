add_library(testFeldmanCousinsBinomial.exe OBJECT 
  testFeldmanCousinsBinomial.cpp
)

target_include_directories(testFeldmanCousinsBinomial.exe PUBLIC /usr/include/boost/python/)
target_include_directories(testFeldmanCousinsBinomial.exe PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testFeldmanCousinsBinomial.exe PUBLIC /usr/include/python2.7/)
target_include_directories(testFeldmanCousinsBinomial.exe PUBLIC /usr/include/root/)
target_include_directories(testFeldmanCousinsBinomial.exe PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testFeldmanCousinsBinomial.exe PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testFeldmanCousinsBinomial.exe PUBLIC /usr/include/boost/)
target_include_directories(testFeldmanCousinsBinomial.exe PUBLIC /usr/include/boost/regex/)

add_library(testCrabToyMC.exe OBJECT 
  testCrabToyMC.cpp
)

target_include_directories(testCrabToyMC.exe PUBLIC /usr/include/boost/python/)
target_include_directories(testCrabToyMC.exe PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCrabToyMC.exe PUBLIC /usr/include/python2.7/)
target_include_directories(testCrabToyMC.exe PUBLIC /usr/include/root/)
target_include_directories(testCrabToyMC.exe PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCrabToyMC.exe PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCrabToyMC.exe PUBLIC /usr/include/boost/program_options/)
target_include_directories(testCrabToyMC.exe PUBLIC /usr/include/boost/)
target_include_directories(testCrabToyMC.exe PUBLIC /usr/include/boost/regex/)

