# Kabul-Card-Game
🃏 C++ Card Game 🃏 

A strategic memory-based card game developed in **C++**.  
Each player tries to have a hand with a **total value of 4 or less**, using strategy, and memory.

---

## 🎯 Game Objective
The goal is to end the game with **a hand of cards** whose total value is **4 or less**.  
The player who achieves this (or comes closest) wins!

---

## 🧩 Basic Rules

### 👥 Players
- The game can be played by **2 or more players**.
- Each player receives **a predetermined number of cards** (e.g., 4).

### 🎴 Game Start
- At the beginning, **each player knows only 2 of their own cards**.
- The remaining cards are **face down** and can only be revealed via special actions.

### 🔁 Turns
- On their turn, each player **draws a card from the deck**.
- After drawing, they can **replace a card in their hand** or **discard it**.

### 💥 Special Cards
Some cards have **special abilities**:

| Card | Effect |
|------|--------|
| **7** | Allows you to **look at one of your own face-down cards** |
| **8** | Allows you to **look at one of your own face-down cards** |
| **9** | Allows you to **look at one of your opponent's face-down cards** |
| **10** | Allows you to **look at one of your opponent's face-down cards** |
| **Jack** | Allows you to **exchange one of your cards with one of your opponent's face down card** |
| **Queen** | Allows you to **exchange one of your cards with one of your opponent's face down card** |
| **King (black)** | Allows you to **look at one of your own face-down cards and if you like it, you can take it** |
| **King (red)** | Its value is 0 |

---

## 🏁 End of the Game
- The game ends when a player **calls the end by saying "KABUL!"** .
- All players reveal their cards.
- Sum the card values: **the winner is the one with the lowest total** (4 or less is ideal).

---

## ⚙️ Technical Details
- Language: **C++**
- Optional graphics library: [Raylib](https://www.raylib.com/)
- Compilation (MSYS2 – UCRT64):
  ```bash
  g++ kabul.cpp player.cpp cardHandling.cpp -o kabul -lraylib -lopengl32 -lgdi32 -lwinmm

