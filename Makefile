CFLAGS=-Wall -g

clean:
	rm -rf ex1 ex3 *.dSYM *.out

all ex:
	make ex1 ex3
