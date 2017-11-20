add_library(cmerge OBJECT 
  cmerge.cc
)

target_include_directories(cmerge PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(cmerge PUBLIC /home/teemperor/cms/md5/)
target_include_directories(cmerge PUBLIC /usr/include/boost/filesystem/)
target_include_directories(cmerge PUBLIC /usr/include/boost/)
target_include_directories(cmerge PUBLIC /usr/include/root/)
target_include_directories(cmerge PUBLIC /usr/include/boost/regex/)

add_library(crecover OBJECT 
  crecover.cc
)

target_include_directories(crecover PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(crecover PUBLIC /home/teemperor/cms/md5/)
target_include_directories(crecover PUBLIC /usr/include/boost/filesystem/)
target_include_directories(crecover PUBLIC /usr/include/boost/)
target_include_directories(crecover PUBLIC /usr/include/root/)
target_include_directories(crecover PUBLIC /usr/include/boost/regex/)

add_library(print_items OBJECT 
  print_items.cc
)

target_include_directories(print_items PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(print_items PUBLIC /home/teemperor/cms/md5/)
target_include_directories(print_items PUBLIC /usr/include/boost/filesystem/)
target_include_directories(print_items PUBLIC /usr/include/boost/)
target_include_directories(print_items PUBLIC /usr/include/root/)
target_include_directories(print_items PUBLIC /usr/include/boost/regex/)

add_library(gssa_dump OBJECT 
  gssa_dump.cc
)

target_include_directories(gssa_dump PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(gssa_dump PUBLIC /home/teemperor/cms/md5/)
target_include_directories(gssa_dump PUBLIC /usr/include/boost/filesystem/)
target_include_directories(gssa_dump PUBLIC /usr/include/boost/)
target_include_directories(gssa_dump PUBLIC /usr/include/root/)
target_include_directories(gssa_dump PUBLIC /usr/include/boost/regex/)

add_library(cdump OBJECT 
  cdump.cc
)

target_include_directories(cdump PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(cdump PUBLIC /home/teemperor/cms/md5/)
target_include_directories(cdump PUBLIC /usr/include/boost/filesystem/)
target_include_directories(cdump PUBLIC /usr/include/boost/)
target_include_directories(cdump PUBLIC /usr/include/root/)
target_include_directories(cdump PUBLIC /usr/include/boost/regex/)

add_library(GenersTestHelper_t OBJECT 
  GenersTestHelper_t.cc
)

target_include_directories(GenersTestHelper_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GenersTestHelper_t PUBLIC /usr/include/root/)
target_include_directories(GenersTestHelper_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GenersTestHelper_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GenersTestHelper_t PUBLIC /usr/include/boost/)
target_include_directories(GenersTestHelper_t PUBLIC /usr/include/boost/regex/)

