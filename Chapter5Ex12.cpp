// Name: Logen N. Wolfe
// Date: 10/28/26
// Program: Chapter 5 Exercise 12
// Description: Random number guessing game! It generates a random number between 1 - 100, then asks the user for their guess!
// It keeps looping, giving then "too high" or "too low" until they guess the right answer.


#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int computernumber;
    int guess;
    double seed;
    seed = time(0);
    srand(seed);


    computernumber = rand() % 100 + 1;

    cout << "Welcome to Logen's Random Number Guesser! Step right up and test your luck!" << endl;
    while (true) {
        cout << "Gimme a number, any number! Let's see if you win!";
        cin >> guess;
        if (guess > computernumber)
            cout << "Darn, too high! Sorry!" << endl;

        else if (guess < computernumber)

            cout << "Aww, too low, sorry!" << endl;

        else {

            cout << "Congrats, you guessed the right number!" << endl;
            break;
        }


    }
}

