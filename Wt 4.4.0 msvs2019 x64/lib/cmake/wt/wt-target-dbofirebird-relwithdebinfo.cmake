#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Wt::DboFirebird" for configuration "RelWithDebInfo"
set_property(TARGET Wt::DboFirebird APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(Wt::DboFirebird PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/wtdbofirebird.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/wtdbofirebird.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Wt::DboFirebird )
list(APPEND _IMPORT_CHECK_FILES_FOR_Wt::DboFirebird "${_IMPORT_PREFIX}/lib/wtdbofirebird.lib" "${_IMPORT_PREFIX}/bin/wtdbofirebird.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
