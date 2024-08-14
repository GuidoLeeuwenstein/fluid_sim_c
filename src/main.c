#include "../lib/raylib.h"
#include <stdio.h>
#include <stdlib.h>

const int WIDTH = 1920;
const int HIGHT = 1080;
const int GRAV = 1;

typedef struct {
  int dir;
  int vel;
} Inertia;

typedef struct {
  int posx;
  int posy;
  Inertia inertia;
} Circle;

void resolveCollision(Circle *circle) {
  if (circle->posx < 0 || circle->posx > WIDTH) {
    printf("X boundry checking not impl");
    exit(1);
  }
  if (circle->posy < 0 || circle->posy > HIGHT) {
    circle->inertia.vel -= 2 * circle->inertia.vel + GRAV;
  }
};

void updatePos(Circle *circle) {
  circle->inertia.vel += GRAV;
  circle->posy += circle->inertia.vel;

  resolveCollision(circle);
}

int main() {
  InitWindow(WIDTH, HIGHT, "This some bullshit");
  SetTargetFPS(60);

  Circle circle = {WIDTH / 2, HIGHT / 2, {1, 1}};

  while (!WindowShouldClose()) {
    updatePos(&circle);

    ClearBackground(BLACK);
    BeginDrawing();
    DrawCircle(circle.posx, circle.posy, 100, RED);

    DrawFPS(10, 10);
    EndDrawing();
  }
}
