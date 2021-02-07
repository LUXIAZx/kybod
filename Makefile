build :
	gcc -c src/linux.c  -I include -o keybot.o

build-program :
	gcc test/main.c  keybot.o -I include -o program