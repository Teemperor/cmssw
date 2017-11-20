add_library(printEvent OBJECT 
  printEvent.cc
)

target_include_directories(printEvent PUBLIC /usr/include/boost/python/)
target_include_directories(printEvent PUBLIC /usr/include/boost/filesystem/)
target_include_directories(printEvent PUBLIC /usr/include/python2.7/)
target_include_directories(printEvent PUBLIC /usr/include/root/)
target_include_directories(printEvent PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(printEvent PUBLIC /home/teemperor/cms/md5/)
target_include_directories(printEvent PUBLIC /usr/include/boost/)
target_include_directories(printEvent PUBLIC /usr/include/boost/regex/)

add_library(jetMatch OBJECT 
  jetMatch.cc
)

target_include_directories(jetMatch PUBLIC /usr/include/boost/python/)
target_include_directories(jetMatch PUBLIC /usr/include/boost/filesystem/)
target_include_directories(jetMatch PUBLIC /usr/include/python2.7/)
target_include_directories(jetMatch PUBLIC /usr/include/root/)
target_include_directories(jetMatch PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(jetMatch PUBLIC /home/teemperor/cms/md5/)
target_include_directories(jetMatch PUBLIC /usr/include/boost/)
target_include_directories(jetMatch PUBLIC /usr/include/boost/regex/)

add_library(matchOneToOne OBJECT 
  matchOneToOne.cc
)

target_include_directories(matchOneToOne PUBLIC /usr/include/boost/python/)
target_include_directories(matchOneToOne PUBLIC /usr/include/boost/filesystem/)
target_include_directories(matchOneToOne PUBLIC /usr/include/python2.7/)
target_include_directories(matchOneToOne PUBLIC /usr/include/root/)
target_include_directories(matchOneToOne PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(matchOneToOne PUBLIC /home/teemperor/cms/md5/)
target_include_directories(matchOneToOne PUBLIC /usr/include/boost/)
target_include_directories(matchOneToOne PUBLIC /usr/include/boost/regex/)

add_library(matchGenHFHadrons OBJECT 
  matchGenHFHadrons.cc
)

target_include_directories(matchGenHFHadrons PUBLIC /usr/include/boost/python/)
target_include_directories(matchGenHFHadrons PUBLIC /usr/include/boost/iostreams/)
target_include_directories(matchGenHFHadrons PUBLIC /usr/include/boost/filesystem/)
target_include_directories(matchGenHFHadrons PUBLIC /usr/include/python2.7/)
target_include_directories(matchGenHFHadrons PUBLIC /usr/include/root/)
target_include_directories(matchGenHFHadrons PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(matchGenHFHadrons PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(matchGenHFHadrons PUBLIC /home/teemperor/cms/md5/)
target_include_directories(matchGenHFHadrons PUBLIC /usr/include/boost/serialization/)
target_include_directories(matchGenHFHadrons PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(matchGenHFHadrons PUBLIC /usr/include/boost/)
target_include_directories(matchGenHFHadrons PUBLIC /usr/include/boost/regex/)

