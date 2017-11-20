add_library(GeneratorInterfacePomwigFilter OBJECT 
  PomwigGeneratorFilter.cc
  hwudat.F
)

target_include_directories(GeneratorInterfacePomwigFilter PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfacePomwigFilter PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfacePomwigFilter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfacePomwigFilter PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfacePomwigFilter PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfacePomwigFilter PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfacePomwigFilter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfacePomwigFilter PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfacePomwigFilter PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfacePomwigFilter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfacePomwigFilter PUBLIC /usr/include/boost/regex/)

