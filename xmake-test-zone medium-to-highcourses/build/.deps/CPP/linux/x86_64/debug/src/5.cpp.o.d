{
    files = {
        "src/5.cpp"
    },
    depfiles_gcc = "5.o: src/5.cpp\
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