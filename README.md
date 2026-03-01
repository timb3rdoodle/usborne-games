# usborne-games
A small C program that uses the old Computer Space Games book by Usborne as reference. This specific project is based on the game Starship Takeoff.

## Description
This is the description of the game in the original book:
"You are a starship captain. You have crashed your ship on a strange planet and must take off again quickly in the alien ship you have captured. The ship's computer tells you the gravity on the planet. You must guess the force required for a successful takeoff. If you guess too low, the ship will not lift off the ground. If you guess too high, the ship's fail-safe mechanism comes into operation to prevent it being burnt up. If you are still on the planet after ten tries, the aliens will capture you."

## How it Works
The program generates two random numbers (g and w), then multiplies those together to generate a number between 1 and 800. The player then has ten attempts to guess that number in order to win.

## Building and Running
This project uses a Makefile for compilation.
The commands in the Makefile are:

```
starshipTakeoff: starshipTakeoff.c
    gcc -ansi starshipTakeoff.c -o starshipTakeoff
run: starshipTakeoff
    ./starshipTakeoff
clear:
    rm -f starshipTakeoff
```

### Or you could compile it manually:

```
gcc -ansi starshipTakeoff.c -o starshipTakeoff
./starshipTakeoff
```

## Notes
- written in C90 (-ansi flag).
- Based on the original BASIC listing (Free PDF from Usborne's official website: https://drive.google.com/file/d/0Bxv0SsvibDMTNlMwTi1PTlVxc2M/view?resourcekey=0-kaU6eyAmIVhT3_H8RkHfHA).
- The book suggests that you could make the game harder by increasing the value of the constants G_MAX and W_MAX, or by lowering the amount of guesses the player gets.
- Handles invalid inputs (letters/symbols won't crash or skip guesses)
