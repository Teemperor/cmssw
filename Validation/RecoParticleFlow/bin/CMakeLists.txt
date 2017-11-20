add_library(HistoData OBJECT 
  HistoData.cpp
)

target_include_directories(HistoData PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HistoData PUBLIC /usr/include/root/)

add_library(PlotCompareUtility OBJECT 
  PlotCompareUtility.cpp
)

target_include_directories(PlotCompareUtility PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PlotCompareUtility PUBLIC /usr/include/root/)

add_library(plotCompare OBJECT 
  plotCompare.cpp
)

target_include_directories(plotCompare PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(plotCompare PUBLIC /usr/include/root/)

