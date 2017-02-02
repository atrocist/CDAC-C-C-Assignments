all.out: multi_file.o sum.o square.o
	gcc multi_file.o sum.o square.o -o all.out

multi_file.o: multi_file.c multi.h
	gcc multi_file.c -c -o multi_file.o

sum.o: sum.c multi.h
	gcc sum.c -c -o sum.o

square.o: square.c multi.h
	gcc square.c -c -o square.o


