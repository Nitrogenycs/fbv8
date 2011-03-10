#/**********************************************************\ 
#Original Author: Matthias (nitrogenycs)
#
#Created:    Mar 10, 2011
#License:    Dual license model; choose one of two:
#            New BSD License
#            http://www.opensource.org/licenses/bsd-license.php
#            - or -
#            GNU Lesser General Public License, version 2.1
#            http://www.gnu.org/licenses/lgpl-2.1.html
#            
#Copyright 2009 PacketPass, Inc and the Firebreath development team
#\**********************************************************/

# Written to work with cmake 2.6
cmake_minimum_required (VERSION 2.6)
set (CMAKE_BACKWARDS_COMPATIBILITY 2.6)

project(fbv8)

get_target_property(library_target_exists fbv8 TYPE)
if (library_target_exists)
    set(TARGET_ALREADY_EXISTS 1)
else()
    set(TARGET_ALREADY_EXISTS 0)
endif()

include_directories (
	${CMAKE_CURRENT_SOURCE_DIR}/src
	${CMAKE_CURRENT_SOURCE_DIR}/include
)

file (GLOB GENERAL_SRC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    src/*.cpp
    src/*.inl
    include/fbv8/*.h
)

list(APPEND SOURCES
    ${GENERAL_SRC}
)

if (NOT TARGET_ALREADY_EXISTS)
    add_library (fbv8 STATIC ${SOURCES})
    set_target_properties(fbv8 PROPERTIES FOLDER "Libraries")
endif()

if (FIREBREATH)
    append_firebreath_link_library(fbv8)

    append_firebreath_include_dir(${CMAKE_CURRENT_SOURCE_DIR}/include)

    export_project_dependencies()
    export_project_dependencies()
endif()
