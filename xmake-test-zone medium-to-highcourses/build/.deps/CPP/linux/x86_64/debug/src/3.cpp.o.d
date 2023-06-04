{
    files = {
        "src/3.cpp"
    },
    depfiles_gcc = "3.o: src/3.cpp\
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