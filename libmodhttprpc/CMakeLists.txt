cmake_minimum_required(VERSION 3.5)

project(libmodhttprpc)

include_directories(./)
include_directories(../libmodutil)

set(rpc_src rpc/protocol.cpp
            rpc/server.cpp
            rpc/p2p.cpp)

set(httprpc_src    
                httprpc.cpp
                httpserver.cpp
                )

ADD_LIBRARY(modhttprpc
				  ${rpc_src}
				  ${httprpc_src})

target_link_libraries(modhttprpc  modutil)

