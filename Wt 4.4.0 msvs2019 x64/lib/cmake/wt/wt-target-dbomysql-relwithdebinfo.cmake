#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Wt::DboMySQL" for configuration "RelWithDebInfo"
set_property(TARGET Wt::DboMySQL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(Wt::DboMySQL PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/wtdbomysql.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/wtdbomysql.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Wt::DboMySQL )
list(APPEND _IMPORT_CHECK_FILES_FOR_Wt::DboMySQL "${_IMPORT_PREFIX}/lib/wtdbomysql.lib" "${_IMPORT_PREFIX}/bin/wtdbomysql.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
