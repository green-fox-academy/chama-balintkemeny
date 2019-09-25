#include <iostream>
#include <vector>

#include "pokemon.h"


std::vector<Pokemon> initializePokemons()
{
    std::vector<Pokemon> pokemons;

    pokemons.push_back(Pokemon("Bulbasaur", "leaf", "water"));
    pokemons.push_back(Pokemon("Pikachu", "electric", "water"));
    pokemons.push_back(Pokemon("Charizard", "fire", "leaf"));
    pokemons.push_back(Pokemon("Bulbasaur", "water", "fire"));
    pokemons.push_back(Pokemon("Kingler", "water", "fire"));

    return pokemons;
}

int main(int argc, char* args[])
{
    std::vector<Pokemon> pokemonOfAsh = initializePokemons();

    // Every pokemon has a name and a type.
    // Certain types are effective against others, e.g. water is effective against fire.

    // Ash has a few pokemon.
    // A wild pokemon appeared!

    Pokemon wildPokemon("Oddish", "leaf", "water");

    // Which pokemon should Ash use?
    std::string chosenPoke;
    for (Pokemon i : pokemonOfAsh) {
        if (i.isEffectiveAgainst(wildPokemon)) {
            chosenPoke = i._name;
        }
    }

    std::cout << "I choose You, " << chosenPoke << "!" << std::endl;

    return 0;
}