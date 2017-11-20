add_library(analyzeTiming OBJECT 
  analyzeTiming.cpp
)

target_include_directories(analyzeTiming PUBLIC /usr/include/python2.7/)
target_include_directories(analyzeTiming PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(analyzeTiming PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(analyzeTiming PUBLIC /home/teemperor/cms/md5/)
target_include_directories(analyzeTiming PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(analyzeTiming PUBLIC /usr/include/boost/)
target_include_directories(analyzeTiming PUBLIC /usr/include/boost/python/)
target_include_directories(analyzeTiming PUBLIC /usr/include/boost/filesystem/)
target_include_directories(analyzeTiming PUBLIC /usr/include/root/)
target_include_directories(analyzeTiming PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(analyzeTiming PUBLIC /usr/include/boost/regex/)

add_library(testChrono OBJECT 
  chrono/test/chrono.cc
  chrono/src/syscall_clock_gettime.cc
  chrono/src/posix_clock_gettime.cc
  chrono/src/mach_clock_get_time.cc
  chrono/src/x86_tsc_tick.cc
  chrono/src/x86_tsc_clock.cc
  chrono/src/mach_absolute_time.cc
  chrono/src/tbb_tick_count.cc
  chrono/src/x86_tsc.cc
  chrono/src/native/x86_tsc_clock.cc
)

target_include_directories(testChrono PUBLIC /usr/include/boost/python/)
target_include_directories(testChrono PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testChrono PUBLIC /usr/include/python2.7/)
target_include_directories(testChrono PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testChrono PUBLIC /usr/include/root/)
target_include_directories(testChrono PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testChrono PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testChrono PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testChrono PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(testChrono PUBLIC /usr/include/boost/)
target_include_directories(testChrono PUBLIC /usr/include/boost/regex/)

