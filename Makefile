all: hello

CFLAGS=-Wall -Werror -g

hello: hello.c
	gcc $(CFLAGS) hello.c -o hello

update:
	git checkout master
	git pull https://github.com/comp530-f22/lab0.git master

clean:
	rm -f hello
