add_library(EcnaGuiEB OBJECT 
  EcnaGuiEB.cc
)

target_include_directories(EcnaGuiEB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EcnaGuiEB PUBLIC /usr/include/root/)

add_library(EcnaGuiEE OBJECT 
  EcnaGuiEE.cc
)

target_include_directories(EcnaGuiEE PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EcnaGuiEE PUBLIC /usr/include/root/)

add_library(EcnaHistosExample1 OBJECT 
  EcnaHistosExample1.cc
)

target_include_directories(EcnaHistosExample1 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EcnaHistosExample1 PUBLIC /usr/include/root/)

add_library(EcnaHistosExample2 OBJECT 
  EcnaHistosExample2.cc
)

target_include_directories(EcnaHistosExample2 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EcnaHistosExample2 PUBLIC /usr/include/root/)

add_library(EcnaCalculationsExample OBJECT 
  EcnaCalculationsExample.cc
)

target_include_directories(EcnaCalculationsExample PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EcnaCalculationsExample PUBLIC /usr/include/root/)

