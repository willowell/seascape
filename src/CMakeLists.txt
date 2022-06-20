set_target_properties(Lib PROPERTIES CXX_STANDARD ${CXX_STANDARD_VERSION})

target_sources(Lib
  PRIVATE
    lib.cpp
)

add_subdirectory(nested)

target_include_directories(Lib PUBLIC ${CMAKE_CURRENT_LIST_DIR})
