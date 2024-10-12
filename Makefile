a.out:
	gcc vetor.c

clean:
	rm a.out

test-all: test1 test2

test1: a.out
	bash ./testes/testa-vazio.sh

test2: a.out
	bash ./testes/testa-5.sh