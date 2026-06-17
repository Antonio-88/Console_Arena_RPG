#Console Arena RPG
Welcome to Console Arena RPG, a turn-based, text-driven battle simulator built entirely in C++. This project features data-driven character configurations, ASCII art visual feedback, an upgrade system, and both singleplayer and local multiplayer modes. 
## Features
- Two Game Modes: Tackle a gauntlet of monsters alone or challenge a friend to local 1v1 PvP.
- Data-Driven Design: Character classes and enemy stats are dynamically loaded from an external text file (Types.txt).
- ASCII Art Graphics: Custom text-based graphics render unique designs for your character choices, enemies, and combat actions (hits, misses, and heals).
- RPG Upgrade System: Defeating enemies in Singleplayer rewards you with stat boosts to customize your character's progression.
- RNG Combat Mechanics: Attacks rely on calculated accuracy percentages, making every turn a gamble.
###How to Play
When prompted by the console, type the following commands exactly (in ALL CAPS):
- Game Modes: SINGLEPLAYER or MULTIPLAYER
- Combat Actions: ATTACK or HEAL
- Singleplayer Upgrades: ATTACK (+4), HEAL (+3), or ACCURACY (+5%)
Singleplayer Upgrade Mechanic: Every time you defeat an enemy, you heal by 10 points and receive 3 upgrade points to distribute among your stats as you see fit.
###Setup & Compilation
To compile and run this game, you only need a standard C++ compiler (like g++). Ensure your repository files are organized together in the same directory
Open your terminal or command prompt, navigate to the project folder, and run:
g++ main.cpp -o ConsoleRPG
Run the game
./ConsoleRPG
## Retro Project Notes
This project stands as a great snapshot of foundational programming principles. It showcases file I/O handling, structural arrays (struct), procedural game loops, and string manipulations using classic C-string libraries (<cstring>).
