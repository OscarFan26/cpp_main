{
    files = {
        "src/4.cpp"
    },
    depfiles_gcc = "4.o: src/4.cpp\
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