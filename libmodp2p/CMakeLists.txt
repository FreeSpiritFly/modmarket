cmake_minimum_required(VERSION 3.5)

project(libmodp2p)

include_directories(./)
include_directories(../libmodutil)

set(p2p_src 
			addrdb.cpp	
			addrman.cpp
			net.cpp
			net_processing.cpp
			protocol.cpp)

ADD_LIBRARY(modp2p ${p2p_src})

target_link_libraries(modp2p modutil)

