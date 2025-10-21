#include "raylib.h"
#include <string>
#include <vector>
#include <iostream>
#include "cardHandling.h"
#include "player.h"
using namespace std;


Player player;  //Player declaration
 
//Starting playerHand with random cards
void playerHand(Player &player, vector<Card> total){
    Card card;
    int nCards = 7;
    for (int i = 0; i < nCards; i++)
    {
        int n = GetRandomValue(0, total.size()-1);
        card = total[n];
        player.hand.push_back(card);
    }
}

//Displaying player hand
void displayPlayerHand(float scale, float screenWidth, float screenHeight, const Player &player){
        int numCards = player.hand.size(), spacing = 10, n = 0; 
        for (Card c : player.hand)
        {
            float cardWidth = c.texture.width*scale;
            float cardHeight = c.texture.height*scale;
            float totalWidth = numCards * cardWidth + (numCards - 1) * spacing;
            float startX = (screenWidth-totalWidth) / 2.0f;

            float y = (screenHeight/1.3);
            float x = startX + n * (cardWidth + spacing);

            Vector2 position = {x, y};  //where to draw the cards
            DrawTextureEx(c.texture, position, 0.0f, scale, WHITE);
            DrawLine(screenWidth/2, 0, screenWidth/2, screenHeight, BLACK);
            
            n++;
        }
}