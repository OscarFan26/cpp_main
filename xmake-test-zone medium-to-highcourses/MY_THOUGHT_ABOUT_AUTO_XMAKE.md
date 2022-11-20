# 自动化XMAKE

输入：文件路径 文件名 目标名
生成xmake.lua target

target(目标名)
    set_kind("binary")
    add_file(文件路径+文件名)