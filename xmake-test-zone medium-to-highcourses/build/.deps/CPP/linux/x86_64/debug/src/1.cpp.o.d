{
    files = {
        "src/1.cpp"
    },
    depfiles_gcc = "1.o: src/1.cpp\
",
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-g",
            "-O0"
        }
    }
}