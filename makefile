matrix : main.o UI/UI.o action/action.o board/board.o card/card.o position/position.o value/value.o value/random.o other/global.o
	gcc main.o UI/UI.o action/action.o board/board.o card/card.o position/position.o value/value.o value/random.o other/global.o -o 		matrix

main.o : main.c card/card.h other/global.h
	gcc -c main.c -o main.o

UI.o : UI/UI.c UI/UI.h other/global.h
	gcc -c UI/UI.c -o UI/UI.o

action.o : action/action.c action/action.h board/board.h other/global.h
	gcc -c action/action.c -o action/action.o

board.o : board/board.c board/board.h card/card.h other/global.h
	gcc -c board/board.c -o board/board.o

card.o : card/card.c card/card.h position/position.h value/value.h other/global.h
	gcc -c card/card.c -o card/card.o

position.o : position/position.c position/position.h other/global.h
	gcc -c position/position.c -o position/position.o

value.o : value/value.c value/value.h value/random.h other/global.h
	gcc -c value/value.c -o value/value.o

random.o : value/random.c value/random.h other/global.h
	gcc -c value/random.c -o value/random.o

global.o : other/global.c other/global.h
	gcc -c other/global.c -o global.o

clean : 
	rm *.o
