cmake_minimum_required(VERSION 3.5)

project(libmodutil)

include_directories(./)


set(compat_src  compat/glibc_compat.cpp
                compat/glibc_sanity.cpp
                compat/glibcxx_sanity.cpp
                compat/strnlen.cpp)

set(crypto_src  #crypto/aes.cpp
                crypto/chacha20.cpp
                crypto/hmac_sha256.cpp
                crypto/hmac_sha512.cpp
                crypto/poly1305.c
                crypto/ripemd160.cpp
                crypto/sha1.cpp
                crypto/sha256.cpp
                crypto/sha256_sse4.cpp
                crypto/sha512.cpp
                #crypto/ctaes/ctaes.c
                )

set(support_src support/cleanse.cpp
                support/lockedpool.cpp)

set(util_src    
				arith_uint256.cpp
				base58.cpp
                bech32.cpp
                clientversion.cpp
				fs.cpp
                hash.cpp
                netaddress.cpp
                netbase.cpp           
                random.cpp
                sync.cpp
                scheduler.cpp
                threadinterrupt.cpp
                uint256.cpp
                util.cpp
                utilstrencodings.cpp
                utiltime.cpp
                warnings.cpp
                timedata.cpp
                )

find_package(OpenSSL)
set(basic_link_lib c rt pthread event event_pthreads boost_system boost_chrono boost_program_options boost_filesystem boost_thread ssl crypto)

ADD_LIBRARY(modutil  ${compat_src}
				  ${crypto_src}
				  ${rpc_src}
				  ${support_src}
				  ${util_src})
target_link_libraries(modutil ${basic_link_lib})

