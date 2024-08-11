main:
	clang ./src/main.c -L./lib/ -I./lib/ -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o ./out/main
	./out/main
