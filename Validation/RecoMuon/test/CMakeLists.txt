add_library(multiPlotter OBJECT 
  multiPlotter.cpp
)

target_include_directories(multiPlotter PUBLIC /usr/include/boost/iostreams/)
target_include_directories(multiPlotter PUBLIC /usr/include/python2.7/)
target_include_directories(multiPlotter PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(multiPlotter PUBLIC /usr/include/boost/program_options/)
target_include_directories(multiPlotter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(multiPlotter PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(multiPlotter PUBLIC /usr/include/boost/serialization/)
target_include_directories(multiPlotter PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(multiPlotter PUBLIC /usr/include/boost/)
target_include_directories(multiPlotter PUBLIC /usr/include/boost/python/)
target_include_directories(multiPlotter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(multiPlotter PUBLIC /usr/include/root/)
target_include_directories(multiPlotter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(multiPlotter PUBLIC /usr/include/boost/regex/)

add_library(makePlot OBJECT 
  makePlot.cpp
)

target_include_directories(makePlot PUBLIC /usr/include/boost/iostreams/)
target_include_directories(makePlot PUBLIC /usr/include/python2.7/)
target_include_directories(makePlot PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(makePlot PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(makePlot PUBLIC /home/teemperor/cms/md5/)
target_include_directories(makePlot PUBLIC /usr/include/boost/serialization/)
target_include_directories(makePlot PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(makePlot PUBLIC /usr/include/boost/)
target_include_directories(makePlot PUBLIC /usr/include/boost/python/)
target_include_directories(makePlot PUBLIC /usr/include/boost/filesystem/)
target_include_directories(makePlot PUBLIC /usr/include/root/)
target_include_directories(makePlot PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(makePlot PUBLIC /usr/include/boost/regex/)

