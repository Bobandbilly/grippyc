Compile with:
    cc -fPIC -c src/grippycore.c -o grippycore.o
    cc -shared -o libgrippyc.so.6 grippycore.o