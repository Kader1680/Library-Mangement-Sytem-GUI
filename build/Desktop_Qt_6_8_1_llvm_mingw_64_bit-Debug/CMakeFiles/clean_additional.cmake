# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\book_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\book_autogen.dir\\ParseCache.txt"
  "book_autogen"
  )
endif()
