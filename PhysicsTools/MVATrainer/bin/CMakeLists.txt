add_library(mvaTreeTrainer OBJECT 
  mvaTreeTrainer.cpp
)

target_include_directories(mvaTreeTrainer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(mvaTreeTrainer PUBLIC /usr/include/python2.7/)
target_include_directories(mvaTreeTrainer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(mvaTreeTrainer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(mvaTreeTrainer PUBLIC /usr/include/boost/serialization/)
target_include_directories(mvaTreeTrainer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(mvaTreeTrainer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(mvaTreeTrainer PUBLIC /usr/include/boost/)
target_include_directories(mvaTreeTrainer PUBLIC /usr/include/boost/python/)
target_include_directories(mvaTreeTrainer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(mvaTreeTrainer PUBLIC /usr/include/root/)
target_include_directories(mvaTreeTrainer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(mvaTreeTrainer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(mvaTreeTrainer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(mvaTreeTrainer PUBLIC /usr/include/boost/regex/)

add_library(mvaTreeComputer OBJECT 
  mvaTreeComputer.cpp
)

target_include_directories(mvaTreeComputer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(mvaTreeComputer PUBLIC /usr/include/python2.7/)
target_include_directories(mvaTreeComputer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(mvaTreeComputer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(mvaTreeComputer PUBLIC /usr/include/boost/serialization/)
target_include_directories(mvaTreeComputer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(mvaTreeComputer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(mvaTreeComputer PUBLIC /usr/include/boost/)
target_include_directories(mvaTreeComputer PUBLIC /usr/include/boost/python/)
target_include_directories(mvaTreeComputer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(mvaTreeComputer PUBLIC /usr/include/root/)
target_include_directories(mvaTreeComputer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(mvaTreeComputer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(mvaTreeComputer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(mvaTreeComputer PUBLIC /usr/include/boost/regex/)

add_library(mvaExtractor OBJECT 
  mvaExtractor.cpp
)

target_include_directories(mvaExtractor PUBLIC /usr/include/boost/iostreams/)
target_include_directories(mvaExtractor PUBLIC /usr/include/python2.7/)
target_include_directories(mvaExtractor PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(mvaExtractor PUBLIC /usr/include/boost/serialization/)
target_include_directories(mvaExtractor PUBLIC /home/teemperor/cms/md5/)
target_include_directories(mvaExtractor PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(mvaExtractor PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(mvaExtractor PUBLIC /usr/include/boost/)
target_include_directories(mvaExtractor PUBLIC /usr/include/boost/python/)
target_include_directories(mvaExtractor PUBLIC /usr/include/boost/filesystem/)
target_include_directories(mvaExtractor PUBLIC /usr/include/root/)
target_include_directories(mvaExtractor PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(mvaExtractor PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(mvaExtractor PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(mvaExtractor PUBLIC /usr/include/boost/regex/)

