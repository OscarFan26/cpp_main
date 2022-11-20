-- set_languages("c99", "cxx21")
add_rules("mode.debug", "mode.release")


-- IN CLASS PART

target("深度优先搜索-E1.1")
    set_kind("binary")
    add_files("src/深搜练习1-搜索目标.cpp")
target_end()

target("深度优先搜索-E1.2")
    set_kind("binary")
    add_files("src/深搜练习1-搜索传送门.cpp")
target_end()

target("深度优先搜索-E1.3")
    set_kind("binary")
    add_files("src/深搜练习1-连续块个数.cpp")
target_end()


-- HOMEWORK PART

target("homework-深搜练习1-1.P")
    set_kind("binary")
    add_files("src/homework/深搜练习1-P.cpp")
target_end()
