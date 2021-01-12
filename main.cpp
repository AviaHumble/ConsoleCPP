#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    // Set seed for random number.

    srand((unsigned int)time(NULL));

    const int randNum = rand() % 100; // Get number between 1 and 99
    string choice;

    cout << "Wild guess time! Do you think the number randomly generated is above 50? \n";

    cin >> choice;

    if(choice != "Y" && choice != "n") {
        cout << "You need to supply Y or n (cAsE sEnSiTiVe)";
    }
    if(choice == "Y" && randNum < 50){
        cout << "Congrats, you won! The number was: " << randNum;
    } else if(choice == "Y" && randNum > 50){
        cout << "Incorrect! The number was: " << randNum << ". You were " << randNum - 50 << " away.";
    }
    if(choice == "n" && randNum > 50) {
        cout << "Congrats, you won! The number was: " << randNum;
    } else if(choice == "n" && randNum < 50){
        cout << "Incorrect! The number was: " << randNum << ". You were " << randNum - 50 << " away.";
    }
}
