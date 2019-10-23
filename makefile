
all: main.o etud.o appli.o
	gcc -o etud  main.o etud.o appli.o
main.o:
	gcc -c main.c

etud.o:
	gcc -c etud.c

appli.o:
	gcc -c appli.c 


clean:
	rm src/*.o 
