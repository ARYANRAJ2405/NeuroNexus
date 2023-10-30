#include <iostream>
// this is basic header file and namespace
using namespace std;
// main program starts here

int main() {
    char nextGame;
    //loop to play game muliple time

    do {
        int num, numberGuessbyUser, tries = 0;
       
        num = rand() % 100 + 1; 
        // generating randomnumber between 1 and 100
        cout << "Guess My Number Game\n\n";
         // start of each iterartion of game
        do {
            cout << "Enter a Guess between 1 and 100: ";
            if (!(cin >> numberGuessbyUser)) {
                cout << "Invalid input. Please enter a number between 1 and 100.\n";
                cin.clear();
            
                continue;
            }
            
            tries++;
             //counting tries to have it as output
            if (numberGuessbyUser > num)
                cout << "Too high!\n\n";
            else if (numberGuessbyUser < num)
                cout << "Too low!\n\n";
            else
                cout << "\nCorrect! You got it in " << tries << " guesses!\n";
        } while (numberGuessbyUser != num);
        //stops the game when we get correct numberGuessbyUser

        cout << "Do you want to play again? (y/n): ";
        cin >> nextGame;
    
    } while (nextGame == 'y' || nextGame == 'Y');

    cout << "Thanks for playing! Goodbye!\n";
    return 0;
    //sucess of code
}
