add_library(testSimG4CoreNotifications OBJECT 
  simactivityregistry_t.cppunit.cpp
)

target_include_directories(testSimG4CoreNotifications PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSimG4CoreNotifications PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSimG4CoreNotifications PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSimG4CoreNotifications PUBLIC /usr/include/boost/)
target_include_directories(testSimG4CoreNotifications PUBLIC /usr/include/Geant4/)
target_include_directories(testSimG4CoreNotifications PUBLIC /usr/include/root/)
target_include_directories(testSimG4CoreNotifications PUBLIC /usr/include/boost/regex/)

