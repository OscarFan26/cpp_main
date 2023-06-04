{
    files = {
        "src/2.cpp"
    },
    depfiles_gcc = "2.o: src/2.cpp\
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