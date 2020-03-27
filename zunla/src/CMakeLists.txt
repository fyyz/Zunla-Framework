set (ZL_SRC_FILES
	#"zl_data_format_base.cpp"
	#"zl_data_format_json.cpp"
	"zl_config.cpp"
	"zl_config_manager.cpp"
	"zl_environment.cpp"
	"main.cpp"
)

# BOOST
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package (Boost 1.66 REQUIRED COMPONENTS system)

# third_party
set (_third_party_INCLUDE_DIRS "../../third_party")
get_filename_component(third_party_INCLUDE_DIRS "${_third_party_INCLUDE_DIRS}" ABSOLUTE)

# DEBUG
#[[
message(STATUS "================================")
get_cmake_property(_variableNames VARIABLES)
foreach (_variableName ${_variableNames})
	message(STATUS "${_variableName}=${${_variableName}}")
endforeach()
message(STATUS "================================")
# ]]

add_executable (zunla ${ZL_SRC_FILES} "zl_config.cpp")
target_include_directories(zunla PUBLIC ${Boost_INCLUDE_DIRS} ${third_party_INCLUDE_DIRS})
target_link_directories(zunla PUBLIC ${Boost_LIBRARY_DIRS})
