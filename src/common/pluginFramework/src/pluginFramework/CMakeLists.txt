# C++ project of PluginFramework

CMAKE_MINIMUM_REQUIRED(VERSION 3.9)

PROJECT(pluginFramework)

IF(NOT CMAKE_BUILD_TYPE) 
    SET(CMAKE_BUILD_TYPE Debug)
ENDIF(NOT CMAKE_BUILD_TYPE)
SET(CMAKE_DEBUG_POSTFIX d)

SET(CMAKE_CXX_STANDARD 14)

SET(CMAKE_CXX_FLAGS "-Wall -Wno-overloaded-virtual -Wdeprecated-declarations -fmax-errors=5")
SET(CMAKE_CXX_FLAGS_DEBUG " -Og -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE " -O3 -DNDEBUG")

string(REPLACE "\\" "/" MDE4CPP_HOME $ENV{MDE4CPP_HOME})

SET(SOURCE_FILES
	PluginFramework.cpp
	impl/PluginFrameworkImpl.cpp
)

INCLUDE_DIRECTORIES(
	../
	${MDE4CPP_HOME}/application/include
)
# Apple specific stuff
IF(APPLE)
  SET(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -undefined dynamic_lookup")
  SET(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -undefined dynamic_lookup")
ENDIF(APPLE)

ADD_LIBRARY(${PROJECT_NAME} SHARED ${SOURCE_FILES})
SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES PREFIX "")

TARGET_LINK_LIBRARIES(${PROJECT_NAME} 	
	${CMAKE_DL_LIBS}
)

#-----------------------------------------------------
# DELIVERING binaries and header to ${MDE4CPP_HOME}
#-----------------------------------------------------

INSTALL(TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION ${MDE4CPP_HOME}/application/bin
    LIBRARY DESTINATION ${MDE4CPP_HOME}/application/bin
    ARCHIVE DESTINATION ${MDE4CPP_HOME}/application/lib
)

INSTALL(DIRECTORY . DESTINATION ${MDE4CPP_HOME}/application/include/${PROJECT_NAME}
	FILES_MATCHING PATTERN "*.hpp"
	PATTERN ".cmake" EXCLUDE
	PATTERN "impl" EXCLUDE
)