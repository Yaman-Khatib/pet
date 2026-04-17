#include <iostream>
#include <string>

using namespace std;

class Pet {
public:
    string name;
    int energy_level;

    // Constructor
    Pet(string n, int energy) {
        name = n;
        energy_level = energy;
    }

    // Method: play with pet
    void play_with_pet() {
        cout << name << " is playing..." << endl;
        energy_level -= 10;
        if (energy_level < 0) energy_level = 0;
    }

    // Method: feed pet
    void eat() {
        energy_level += 20;
        cout << name << " ate some food! Energy is now " << energy_level << endl;
    }
};

int main() {
    // Create one Pet object
    Pet my_pet("Buddy", 100);

    my_pet.play_with_pet();

    // Print the pet name and energy level
    cout << "Pet Name: " << my_pet.name << endl;
    cout << "Energy Level: " << my_pet.energy_level << endl;

    return 0;
}