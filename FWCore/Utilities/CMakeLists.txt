add_subdirectory(bin)
add_subdirectory(test)
add_library(FWCoreUtilities OBJECT 
  src/Exception.cc
  src/CRC32Calculator.cc
  src/IterWithDict.cc
  src/RegexMatch.cc
  src/TimingServiceBase.cc
  src/GlobalIdentifier.cc
  src/CPUTimer.cc
  src/ReleaseVersion.cc
  src/CPUServiceBase.cc
  src/Guid.cc
  src/Digest.cc
  src/MemberWithDict.cc
  src/TestHelper.cc
  src/ObjectWithDict.cc
  src/FriendlyName.cc
  src/OStreamColumn.cc
  src/FunctionWithDict.cc
  src/resolveSymbolicLinks.cc
  src/DebugMacros.cc
  src/DictionaryTools.cc
  src/MallocOpts.cc
  src/Adler32Calculator.cc
  src/TypeDemangler.cc
  src/ConvertException.cc
  src/ExceptionCollector.cc
  src/Presence.cc
  src/typelookup.cc
  src/ExceptionPropagate.cc
  src/InputTag.cc
  src/TypeWithDict.cc
  src/WallclockTimer.cc
  src/SingleConsumerQ.cc
  src/BaseWithDict.cc
  src/LuminosityBlockIndex.cc
  src/UnixSignalHandlers.cc
  src/TypeID.cc
  src/Parse.cc
  src/TimeOfDay.cc
  src/ESInputTag.cc
  src/RunIndex.cc
  src/WrappedClassName.cc
  src/RandomNumberGenerator.cc
  src/EDMException.cc
)

target_include_directories(FWCoreUtilities PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreUtilities PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreUtilities PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreUtilities PUBLIC /usr/include/boost/)
target_include_directories(FWCoreUtilities PUBLIC /usr/include/root/)
target_include_directories(FWCoreUtilities PUBLIC /usr/include/boost/regex/)

