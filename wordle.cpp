// Heniel Escarez
// Last Updated: October 11, 2026
// Alpha

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <ctime> 
#include <cctype>

using namespace std; 

int main(){
system("cls");
srand(time(0));
 
    while(true){
        system("cls");
        int playerChoice;

        //Heading
        cout << string(30,'=') << endl << right << setw(23) << "WORDLE v.Alpha\n" << string(30,'=') << endl;
        cout << endl << "1. Start\n" << "2. Rules\n" << "3. Exit\n";
        cout << endl << "What would you like to do?: ";
        
        cin >> playerChoice;

        if (playerChoice == 1) {        //Main Game latite logic
            system("cls");

            string words[5] = {"apple", "brave", "crane", "dream", "flame"};
            string secret = words[rand() % 5];               
            string board[6];
            string guess;
            int tries = 0;

            for (int r = 0; r < 6; r++) {
            board[r] = "_____";
            }

            while (true) {
                system("cls");
                cout << string(30,'=') << endl << right << setw(19) << "WORDLE\n" << string(30,'=') << endl;

                for (int r = 0; r < 6; r++) { // the fucking board
                    cout << "   ";
                    for (int c = 0; c < 5; c++) {
                        cout << "[ " << board[r] [c] << " ]";
                    }
                    cout << "\n\n";
                }  

        cout << "Guess: ";
        cin >> guess;

            for  (int i = 0; i < 5; i++) {
                if (guess[i] == secret [i]) {
                    board[tries][i] = toupper(guess[i]);
                } else {
                    for (int j = 0; j < 5; j++) {
                        if (guess[i] == secret[j]) {
                            board[tries][i] = tolower(guess[i]);
                        }
                    }
                }
            }
            tries++;
            
        if (guess == secret) {
                cout << string(30,'=') << endl << right << setw(19) << "YOU GUESSED THE WORDLE!\n" << string(30,'=') << endl;
                break;
            }
            if (tries == 6) {
                cout << "You lose! The word was " << secret << "\n";
                break;
            }
        }   cout << "\nWould you like to go back to the Menu? (0): ";
            int back;
            do {
                cin >> back;
            } while (back != 0);
            
        }

        else if (playerChoice == 2) {       //Rules
            system("cls");

            cout << right << setw(17) << "RULES\n" << string(30,'=') << endl;

            cout << endl << "a.) You have to guess a 5 letter word, just like the traditional Wordle." << endl;
            cout << "b.) Each Input counts as a guess, You only have 6 guesses." << endl;
            cout << "c.) A correct letter in the correct spot Will be displayed as a Capital Letter." << endl;
            cout << "d.) A correct letter in the wrong spot will be displayed as a Small letter." << endl;
            cout << "e.) An incorrect guess will display no Letter at all." << endl;
            
            cout << endl << string(30,'=') << endl << right << setw(23) << "! VERSION NOTES !\n" << string(30,'=') << endl;
            cout << endl << ">> This Version is not complete. It only features the basic functions of traditional Wordle. <<" << endl;
            cout << ">> This version only holds 5 different words to guess. <<" << endl;
            /*cout << ">> Bugs such as entering a guess with two of the same letter (eg. Apple) will not always mean the Correct word has 2 of those letters. <<" << endl;*/
            cout << ">> Update ko nalang sa future yah - H <<" << endl;

            cout << "\nWould you like to go back to the Menu? (0): ";
            int back;
            do {
                cin >> back;
            } while (back != 0);
        } 
        else if (playerChoice == 3) {       //Terminate the bitch
            system("cls");
            break;
        }
    }
return 0; 
} 