add_subdirectory(bin)
add_subdirectory(test)
add_library(RecoLuminosityTCPReceiver OBJECT 
  src/TCPReceiver.cc
  src/TimeStamp.cc
)


