#include "../raylib.h"

#define WIDTH 1920
#define HIGHT 1080

int main() {
  InitWindow(WIDTH, HIGHT, "This some bullshit");
  SetTargetFPS(60);
  while(!WindowShouldClose()) {

  BeginDrawing();
  
  DrawCircle( WIDTH/2, HIGHT/2, 100, RED);

  EndDrawing();
  }
}
