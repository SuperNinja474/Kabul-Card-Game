//Matilde
#include "raylib.h"
#include <string>
#include <vector>
#include <iostream>
#include "player.h"
#include "cardHandling.h"
using namespace std;




//Screens
enum GameScreen {MENU, SETTINGS, GAMEPLAY, ENDING};

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    //Window initialization
    const int screenWidth = 1280;
    const int screenHeight = 720;
    InitWindow(screenWidth, screenHeight, "KABUL!"); 

    //Game Loop
    int framesCounter = 0;
    SetTargetFPS(60);
    Player player;
    vector<Card> total = deck();    //Initialising full deck
    playerHand(player, total);      //Initialising initial player hand
    float scale = 1.75f, x, y;         //Card Texture scaling
    int cardWidth;
    int cardHeight;
    

    while (!WindowShouldClose())
    {
        framesCounter++;
        BeginDrawing();
        ClearBackground(DARKGREEN);
        displayPlayerHand(scale, screenWidth, screenHeight, player);
        EndDrawing();
    }  
    
    CloseWindow();  
}






