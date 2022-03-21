Benchmark: main.o
	cc -o Benchmark main.o -O3

main.o : Benchmark.c Benchmark.hh
	cc -c Benchmark.c -o main.o

clean : 
	rm Benchmark *.o
