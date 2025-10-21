#include "raylib.h"
#include <vector>
#include <string>
#include <iostream>
#include "player.h" 
#include "cardHandling.h"

using namespace std;

vector<Card> deck() {
    vector<Card> total;

    char seeds[] = {'C', 'F', 'D', 'P'};

    for (char seed : seeds) {
        for (int value = 1; value <= 13; value++) {
            Card c;
            char filename[64];
            sprintf(filename, "src/Cards/%d%c.png", value, seed);
            
            c.texture = LoadTexture(filename);
            c.seed = seed;
            if(value == 13){
                if(c.seed == 'C' || c.seed == 'D') c.value = 0;
                else c.value = 13;
            }
            else c.value = value;

            total.push_back(c);
        }
    }
    Card Jolly1, Jolly2;
    Jolly1.texture = LoadTexture("src/Cards/JOLLY1.png"); Jolly2.texture = LoadTexture("src/Cards/JOLLY2.png");
    Jolly1.seed = 'C'; Jolly2.seed = 'P';
    Jolly1.value = -1; Jolly2.value = -1;

    total.push_back(Jolly1); total.push_back(Jolly2);

    Card Back;
    Back.texture = LoadTexture("/src/Cards/BACK.png");

    return total;
}

