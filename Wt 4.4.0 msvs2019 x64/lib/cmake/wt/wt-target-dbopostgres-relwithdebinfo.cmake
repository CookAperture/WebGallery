#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Wt::DboPostgres" for configuration "RelWithDebInfo"
set_property(TARGET Wt::DboPostgres APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(Wt::DboPostgres PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/wtdbopostgres.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/wtdbopostgres.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Wt::DboPostgres )
list(APPEND _IMPORT_CHECK_FILES_FOR_Wt::DboPostgres "${_IMPORT_PREFIX}/lib/wtdbopostgres.lib" "${_IMPORT_PREFIX}/bin/wtdbopostgres.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
