#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int playerChoice;
    int computerChoice;
    
    srand(time(0));

    cout << "Rock Paper Scissors Game" << endl;
    cout << "1 = Rock, 2 = Paper, 3 = Scissors" << endl;
    
    cout << "Enter your choice: ";
    cin >> playerChoice;
    
    computerChoice = rand() % 3 + 1;
    
    cout << "You chose: " << playerChoice << endl;
    cout << "Computer chose: " << computerChoice << endl;
    
    // FINAL STEP: Decide winner
    if (playerChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if (playerChoice == 1 && computerChoice == 3) {
        cout << "You win! Rock beats Scissors" << endl;
    } else if (playerChoice == 2 && computerChoice == 1) {
        cout << "You win! Paper beats Rock" << endl;
    } else if (playerChoice == 3 && computerChoice == 2) {
        cout << "You win! Scissors beats Paper" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
    
    return 0;
}
