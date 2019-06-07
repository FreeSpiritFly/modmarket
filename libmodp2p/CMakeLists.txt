cmake_minimum_required(VERSION 2.8)

project(libmodp2p)

include_directories(./)
include_directories(../libmodutil)

set(p2p_src   
                net.cpp
                net_processing.cpp
                )

ADD_LIBRARY(modp2p
					${p2p_src})

target_link_libraries(modp2p modutil)

