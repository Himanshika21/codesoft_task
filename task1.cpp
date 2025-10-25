#include <iostream>
#include <cstdlib>   
#include <ctime>     

using namespace std;

int main() {
    int numberToGuess, userGuess;

    
    srand(time(0));
    numberToGuess = rand() % 100 + 1; 

    cout << " Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;

    
    while (true) {
        cout << "\nEnter your guess: ";
        cin >> userGuess;

        if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } 
        else if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } 
        else {
            cout << "\n Congratulations! You guessed the correct number: " 
                 << numberToGuess << endl;
            break;
        }
    }

    return 0;
}



