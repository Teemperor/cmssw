add_library(DataFormatsMath_test OBJECT 
  ReadMath.cc
  WriteMath.cc
  SealModule.cc
)

target_include_directories(DataFormatsMath_test PUBLIC /usr/include/boost/python/)
target_include_directories(DataFormatsMath_test PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsMath_test PUBLIC /usr/include/python2.7/)
target_include_directories(DataFormatsMath_test PUBLIC /usr/include/root/)
target_include_directories(DataFormatsMath_test PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsMath_test PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsMath_test PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsMath_test PUBLIC /usr/include/boost/regex/)

add_library(DataFormatsMatrices_t OBJECT 
  Matrices_t.cpp
)

target_include_directories(DataFormatsMatrices_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsMatrices_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsMatrices_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsMatrices_t PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsMatrices_t PUBLIC /usr/include/root/)
target_include_directories(DataFormatsMatrices_t PUBLIC /usr/include/boost/regex/)

add_library(DataFormatsProjectMatrix_t OBJECT 
  ProjectMatrix_t.cpp
)

target_include_directories(DataFormatsProjectMatrix_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsProjectMatrix_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsProjectMatrix_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsProjectMatrix_t PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsProjectMatrix_t PUBLIC /usr/include/root/)
target_include_directories(DataFormatsProjectMatrix_t PUBLIC /usr/include/boost/regex/)

add_library(DataFormatsFastMath_t OBJECT 
  FastMath_t.cpp
)

target_include_directories(DataFormatsFastMath_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsFastMath_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsFastMath_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsFastMath_t PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsFastMath_t PUBLIC /usr/include/root/)
target_include_directories(DataFormatsFastMath_t PUBLIC /usr/include/boost/regex/)

add_library(testMathApproximations OBJECT 
  testApproximations.cpp
)

target_include_directories(testMathApproximations PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testMathApproximations PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testMathApproximations PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testMathApproximations PUBLIC /usr/include/boost/)
target_include_directories(testMathApproximations PUBLIC /usr/include/root/)
target_include_directories(testMathApproximations PUBLIC /usr/include/boost/regex/)

add_library(testMathApproxMath OBJECT 
  testApproxMath.cpp
)

target_include_directories(testMathApproxMath PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testMathApproxMath PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testMathApproxMath PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testMathApproxMath PUBLIC /usr/include/boost/)
target_include_directories(testMathApproxMath PUBLIC /usr/include/root/)
target_include_directories(testMathApproxMath PUBLIC /usr/include/boost/regex/)

add_library(DataFormatsSSEVec_t OBJECT 
  SSEVec_t.cpp
)

target_include_directories(DataFormatsSSEVec_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsSSEVec_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsSSEVec_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsSSEVec_t PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsSSEVec_t PUBLIC /usr/include/root/)
target_include_directories(DataFormatsSSEVec_t PUBLIC /usr/include/boost/regex/)

add_library(DataFormatsSign_t OBJECT 
  sign_t.cpp
)

target_include_directories(DataFormatsSign_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsSign_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsSign_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsSign_t PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsSign_t PUBLIC /usr/include/root/)
target_include_directories(DataFormatsSign_t PUBLIC /usr/include/boost/regex/)

add_library(DataFormatsEta_t OBJECT 
  eta_t.cpp
)

target_include_directories(DataFormatsEta_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsEta_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsEta_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsEta_t PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsEta_t PUBLIC /usr/include/root/)
target_include_directories(DataFormatsEta_t PUBLIC /usr/include/boost/regex/)

add_library(DataFormatsAsin_t OBJECT 
  arc.cpp
)

target_include_directories(DataFormatsAsin_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsAsin_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsAsin_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsAsin_t PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsAsin_t PUBLIC /usr/include/root/)
target_include_directories(DataFormatsAsin_t PUBLIC /usr/include/boost/regex/)

add_library(testAtan2 OBJECT 
  testAtan2.cpp
)

target_include_directories(testAtan2 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testAtan2 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testAtan2 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testAtan2 PUBLIC /usr/include/boost/)
target_include_directories(testAtan2 PUBLIC /usr/include/root/)
target_include_directories(testAtan2 PUBLIC /usr/include/boost/regex/)

add_library(testAtan2FastMath OBJECT 
  testAtan2.cpp
)

target_include_directories(testAtan2FastMath PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testAtan2FastMath PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testAtan2FastMath PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testAtan2FastMath PUBLIC /usr/include/boost/)
target_include_directories(testAtan2FastMath PUBLIC /usr/include/root/)
target_include_directories(testAtan2FastMath PUBLIC /usr/include/boost/regex/)

add_library(testAtan2VDT OBJECT 
  testAtan2.cpp
)

target_include_directories(testAtan2VDT PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testAtan2VDT PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testAtan2VDT PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testAtan2VDT PUBLIC /usr/include/boost/)
target_include_directories(testAtan2VDT PUBLIC /usr/include/root/)
target_include_directories(testAtan2VDT PUBLIC /usr/include/boost/regex/)

add_library(DataFormatsDeltaR_t OBJECT 
  deltaR_t.cpp
)

target_include_directories(DataFormatsDeltaR_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsDeltaR_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsDeltaR_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsDeltaR_t PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsDeltaR_t PUBLIC /usr/include/root/)
target_include_directories(DataFormatsDeltaR_t PUBLIC /usr/include/boost/regex/)

add_library(DataFormatsSimilarity_t OBJECT 
  Similarity_t.cpp
)

target_include_directories(DataFormatsSimilarity_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsSimilarity_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsSimilarity_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsSimilarity_t PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsSimilarity_t PUBLIC /usr/include/root/)
target_include_directories(DataFormatsSimilarity_t PUBLIC /usr/include/boost/regex/)

add_library(DataFormatsSimilarityFast_t OBJECT 
  Similarity_t.cpp
)

target_include_directories(DataFormatsSimilarityFast_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsSimilarityFast_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsSimilarityFast_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsSimilarityFast_t PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsSimilarityFast_t PUBLIC /usr/include/root/)
target_include_directories(DataFormatsSimilarityFast_t PUBLIC /usr/include/boost/regex/)

add_library(DataFormatsMulSymMatrix_t OBJECT 
  MulSymMatrix_t.cpp
)

target_include_directories(DataFormatsMulSymMatrix_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsMulSymMatrix_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsMulSymMatrix_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsMulSymMatrix_t PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsMulSymMatrix_t PUBLIC /usr/include/root/)
target_include_directories(DataFormatsMulSymMatrix_t PUBLIC /usr/include/boost/regex/)

