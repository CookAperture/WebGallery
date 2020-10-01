#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Wt::DboMSSQLServer" for configuration "RelWithDebInfo"
set_property(TARGET Wt::DboMSSQLServer APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(Wt::DboMSSQLServer PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/wtdbomssqlserver.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/wtdbomssqlserver.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Wt::DboMSSQLServer )
list(APPEND _IMPORT_CHECK_FILES_FOR_Wt::DboMSSQLServer "${_IMPORT_PREFIX}/lib/wtdbomssqlserver.lib" "${_IMPORT_PREFIX}/bin/wtdbomssqlserver.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
