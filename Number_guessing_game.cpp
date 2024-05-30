#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int secretNumber = rand() % 100 + 1;
    int guess;
    cout << "Guess a number between 1 and 100: ";
    cin >> guess;
    while (guess != secretNumber)
    {
        if (guess < secretNumber)
        {
            cout << "Too low. Guess again: ";
            cin >> guess;
        }
        else
        {
            cout << "Too high. Guess again: ";
            cin >> guess;
        }
    }
    cout << "Congratulations! You guessed the number correctly." << endl;
    return 0;
}