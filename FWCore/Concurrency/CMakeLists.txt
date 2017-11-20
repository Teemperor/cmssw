add_subdirectory(test)
add_library(FWCoreConcurrency OBJECT 
  src/ThreadSafeOutputFileStream.cc
  src/Xerces.cc
  src/WaitingTaskList.cc
  src/SerialTaskQueue.cc
  src/SharedResourceNames.cc
)


