noStringsAttatched: piatkowskiEvanA2.o main.o 
	gcc -Wall -std=c99 piatkowskiEvanA2.o main.o -o bin/noStringsAttatched 

piatkowskiEvanA2.o: src/piatkowskiEvanA2.c include/piatkowskiEvanA2.h 
	gcc -Wall -std=c99 -c src/piatkowskiEvanA2.c 

main.o: src/main.c include/piatkowskiEvanA2.h 
	gcc -Wall -std=c99 -c src/main.c 

clean: 
	rm *.o bin/noStringsAttatched