add_library(RecoVertexLinearizationPointFinders OBJECT 
  src/CrossingPtBasedLinearizationPointFinder.cc
  src/SMSLinearizationPointFinder.cc
  src/FallbackLinearizationPointFinder.cc
  src/LinPtException.cc
  src/LMSLinearizationPointFinder.cc
  src/FsmwLinearizationPointFinder.cc
  src/MonteCarloLinearizationPointFinder.cc
  src/ZeroLinearizationPointFinder.cc
  src/DefaultLinearizationPointFinder.cc
  src/HSMLinearizationPointFinder.cc
  src/SubsetHSMLinearizationPointFinder.cc
)

target_include_directories(RecoVertexLinearizationPointFinders PUBLIC /usr/include/boost/python/)
target_include_directories(RecoVertexLinearizationPointFinders PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoVertexLinearizationPointFinders PUBLIC /usr/include/python2.7/)
target_include_directories(RecoVertexLinearizationPointFinders PUBLIC /usr/include/root/)
target_include_directories(RecoVertexLinearizationPointFinders PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoVertexLinearizationPointFinders PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoVertexLinearizationPointFinders PUBLIC /usr/include/boost/)
target_include_directories(RecoVertexLinearizationPointFinders PUBLIC /usr/include/boost/regex/)

