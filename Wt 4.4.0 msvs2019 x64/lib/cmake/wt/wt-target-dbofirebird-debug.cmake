#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Wt::DboFirebird" for configuration "Debug"
set_property(TARGET Wt::DboFirebird APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(Wt::DboFirebird PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/wtdbofirebirdd.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/wtdbofirebirdd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Wt::DboFirebird )
list(APPEND _IMPORT_CHECK_FILES_FOR_Wt::DboFirebird "${_IMPORT_PREFIX}/lib/wtdbofirebirdd.lib" "${_IMPORT_PREFIX}/bin/wtdbofirebirdd.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
