#ifndef PLAYER_H
#define PLAYER_H
#include "raylib.h"
#include <string>
#include <vector>
#include <iostream>
#include "cardHandling.h"
using namespace std;

//Player info
struct Player
{
    vector<Card> hand;
    int points;
};

void playerHand(Player &player, vector<Card> total);

//Displaying player hand
void displayPlayerHand(float scale, float screenWidth, float screenHeight, const Player &player);

#endif