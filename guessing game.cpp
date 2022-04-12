# include <iostream>
# include <cmath>

using namespace std;

int main()
{
    cout << "This is a guessing game, you have 7 guesses to get the correct answer between 0 and 20!" << endl;
    int secretnum = 6;
    int guess;
    int guesscount = 0;
    int guesslimit = 7;
    bool outofguesses = false;

    while(secretnum != guess && !outofguesses){
        if(guesscount < guesslimit){
            cout << "Enter a guess: ",
            cin >> guess;
            guesscount++;

        } else {
            outofguesses = true;
        }
        
    }
    if(outofguesses){
        cout << "You lose, the correct answer was " << secretnum << " !";
    } else {
        cout << "You Win!";
    }

    return 0;

}


