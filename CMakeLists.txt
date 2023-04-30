cmake_minimum_required(VERSION 3.25)
project(CPP)

set(CMAKE_CXX_STANDARD 23)


add_executable(TRIE_STRUCT_word_prefix csps/TRIE_STRUCT_word_prefix.cpp)
add_executable(hash-cnt-of-longest-cont-str csps/hash-cnt-of-longest-cont-str.cpp)
#add_executable(test-ranges test/test-ranges.cpp)
add_executable(pq-min-k csps/优先队列-找前k小.cpp)
add_executable(dsu-2 csps/并查集-带权值-战舰命令.cpp)
add_executable(dsu-1 csps/并查集-信仰问题.cpp)
add_executable(dsu-3 csps/并查集-弄信息传递.cpp)
add_executable(bzoj2054 csps/疯狂的馒头bzoj2054.cpp)