main:
	clang ./src/main.c -L. -I. -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o ./out/main
