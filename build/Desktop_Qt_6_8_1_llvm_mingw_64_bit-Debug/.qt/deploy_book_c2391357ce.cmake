include(C:/Users/USER/Documents/book/build/Desktop_Qt_6_8_1_llvm_mingw_64_bit-Debug/.qt/QtDeploySupport.cmake)
include("${CMAKE_CURRENT_LIST_DIR}/book-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE C:/Users/USER/Documents/book/build/Desktop_Qt_6_8_1_llvm_mingw_64_bit-Debug/book.exe
    GENERATE_QT_CONF
)
