{
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-g",
            "-O0"
        }
    },
    files = {
        "src/main.cpp"
    },
    depfiles_gcc = "main.o: src/main.cpp\
"
}