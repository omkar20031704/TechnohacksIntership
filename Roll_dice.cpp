#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(0));

    char roll;
    
    do {
        int die1 = rollDice();
        int die2 = rollDice();

        cout << "You rolled a " << die1 << " and a " << die2 << ". Total: " << die1 + die2 << endl;

        cout << "Roll again? (y/n): ";
        cin >> roll;
    } while (roll == 'y' || roll == 'Y');

    return 0;
}