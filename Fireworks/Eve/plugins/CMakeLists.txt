add_library(FireworksEveEveServicePlugin OBJECT 
  EveServicePlugin.cc
)

target_include_directories(FireworksEveEveServicePlugin PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksEveEveServicePlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksEveEveServicePlugin PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksEveEveServicePlugin PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(FireworksEveEveServicePlugin PUBLIC /usr/include/root/)
target_include_directories(FireworksEveEveServicePlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksEveEveServicePlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksEveEveServicePlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksEveEveServicePlugin PUBLIC /usr/include/boost/)
target_include_directories(FireworksEveEveServicePlugin PUBLIC /usr/include/boost/regex/)

add_library(FireworksEveDummyEvelyserPlugin OBJECT 
  DummyEvelyser.cc
)

target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /usr/include/boost/)
target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /usr/include/root/)
target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksEveDummyEvelyserPlugin PUBLIC /usr/include/boost/regex/)

