add_library(ReadPixelRecHit OBJECT 
  ReadPixelRecHit.cc
)

target_include_directories(ReadPixelRecHit PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ReadPixelRecHit PUBLIC /usr/include/python2.7/)
target_include_directories(ReadPixelRecHit PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ReadPixelRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ReadPixelRecHit PUBLIC /usr/include/boost/serialization/)
target_include_directories(ReadPixelRecHit PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ReadPixelRecHit PUBLIC /usr/include/boost/)
target_include_directories(ReadPixelRecHit PUBLIC /usr/include/boost/python/)
target_include_directories(ReadPixelRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ReadPixelRecHit PUBLIC /usr/include/root/)
target_include_directories(ReadPixelRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ReadPixelRecHit PUBLIC /usr/include/boost/regex/)

add_library(CPEAccessTester OBJECT 
  CPEAccessTester.cc
)

target_include_directories(CPEAccessTester PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CPEAccessTester PUBLIC /usr/include/python2.7/)
target_include_directories(CPEAccessTester PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CPEAccessTester PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CPEAccessTester PUBLIC /usr/include/boost/serialization/)
target_include_directories(CPEAccessTester PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CPEAccessTester PUBLIC /usr/include/boost/)
target_include_directories(CPEAccessTester PUBLIC /usr/include/boost/python/)
target_include_directories(CPEAccessTester PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CPEAccessTester PUBLIC /usr/include/root/)
target_include_directories(CPEAccessTester PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CPEAccessTester PUBLIC /usr/include/boost/regex/)

