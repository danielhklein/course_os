all:
	gcc -g -c main.c
	gcc -g -c fakelibs.c
	gcc -g -c -I. ../fat16/file.c -o file.o
	gcc -g -c -I. ../open_table.c -o open_table.o
	gcc -g -c -I. ../../data_structures/bitvector.c -o bv.o
	gcc -g main.o fakelibs.o file.o open_table.o bv.o -o buildfs

card.sd:
	dd if=/dev/zero of=card.sd conv=notrunc bs=512 count=250000

clean:
	rm *.o
