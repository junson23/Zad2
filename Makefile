#Plik Makefile
.PHONY: clean
.SUFFIXES: .c .o .a .so
vpath %.c src
vpath %.h incl
lib%.a: $^
	ar cr $@ $^
lib%.so: $^
	gcc -shared -o $@ $^
%: $^
	gcc -o $@ $^ -Wl,-rpath,. -L./lib -I./incl
zad2: zad2.o libgr.so libjp.a
zad2.o: zad2.c
libjp.a: PoleK.o PoleS.o
libgr.so: ObjS.o ObjK.o
PoleK.o: PoleK.c
PoleS.o: PoleS.c
ObjS.o: ObjS.c
ObjK.o: ObjK.c
clean:
	rm -f zad2 *.o ./lib/*.a ./lib/*.so
