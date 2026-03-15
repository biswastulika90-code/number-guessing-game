#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand (time(0));
    int secret = rand() % 100+1;
    int guess,attempts =0;
    const int Attempts = 0;
    const int maxAttempts = 7;
    cout <<"===Number Guessing game===\n";
    cout<<"I have chosen a number between 1 and 100.\n";
    cout<<"You have"<<maxAttempts<<"attempts to guess it.\n\n";
    while(attempts<maxAttempts){
        cout <<"Enter your guess:";
        cin>>guess;
        attempts++;
        if(guess==secret){
            cout<<"Congratulation!You guessed it in"
                   <<attempts<<"attempts.\n";
                   break;
        }
        else if (guess<secret){
            cout<<"Too low!\n";
        }
        else {
            cout<<"Too high!\n";
        }
        cout<<"Attempts left:"<< maxAttempts-attempts<<"\n\n";
    }
        if(guess!=secret){
            cout<<"Game Over!The correct number was"<<secret<<".\n";
        }
        cout<<"\nthanks for playing!\n";
        return 0;
    }
