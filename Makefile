build :
	gcc -c src/kybot.c  -I include -o keybot.o

build-program :
	gcc test/main.c -o program keybot.o -I include