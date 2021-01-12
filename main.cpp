#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    string checkPlayAgain;
    bool playAgain = true;
    do
        {
            // Set seed for random number.

            srand((unsigned int)time(NULL));

            const int randNum = rand() % 100; // Get number between 1 and 99
            string choice;

            cout << "Wild guess time! Do you think the number randomly generated is above 50? \n";

            cin >> choice;

            if(choice != "Y" && choice != "n") {
                cout << "You need to supply Y or n (cAsE sEnSiTiVe) \n";
                return 0;
            }
            if(choice == "Y" && randNum < 50){
                cout << "Congrats, you won! The number was: " << randNum << endl;
            } else if(choice == "Y" && randNum > 50){
                cout << "Incorrect! The number was: " << randNum << ". You were " << randNum - 50 << " away. \n";
            }
            if(choice == "n" && randNum < 50) {
                cout << "Congrats, you won! The number was: " << randNum << endl;
            } else if(choice == "n" && randNum > 50){
                cout << "Incorrect! The number was: " << randNum << ". You were " << randNum - 50 << " away. \n";
            }


            cout << "Want to play again? Y/n \n";
            cin >> checkPlayAgain;
            if(checkPlayAgain != "Y" && checkPlayAgain != "n") {
                cout << "You need to supply Y or n (cAsE sEnSiTiVe) \n";
                return 0;
            }
            if(checkPlayAgain == "Y"){
                playAgain = true;
                cout << string( 2, '\n' );
            } else if(checkPlayAgain == "n"){
                playAgain = false;
            }
            if(playAgain == 0){
                cout << "Thanks for playing! \n";
                return 0;
            }
        } while (playAgain == 1);
}
