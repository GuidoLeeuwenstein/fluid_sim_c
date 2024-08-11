#include "../lib/raylib.h"
#include <stdlib.h>

const int WIDTH = 1920;
const int HIGHT = 1080;
const int GRAV = 9;

typedef struct {
    int dir;
    int vel;
  } vec2 ;


typedef struct {
  int posx;
  int posy;
  vec2 enertia;
  } Circle;

void updatePos(Circle* circle) {
  circle->enertia.vel = circle->enertia.vel * GRAV;
  //TODO: left here
  circle->posy = circle->posy; 
}

int main() {
  InitWindow(WIDTH, HIGHT, "This some bullshit");
  SetTargetFPS(60);
  
  Circle * circle = malloc(sizeof(Circle));
  circle->posx = WIDTH/2;
  circle->posy = HIGHT/2;
  circle->enertia.vel = 1;
  circle->enertia.dir = 0;

  while(!WindowShouldClose()) {
    

    BeginDrawing();
    DrawCircle( WIDTH/2, HIGHT/2, 100, RED);
    EndDrawing();
  }
}
