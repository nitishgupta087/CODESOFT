#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int number = rand() % 100 + 1;
    int guess;

    cout << "Welcome to Guess the Number Game!" << endl;
    cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;

    // Loop until the correct guess
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < number) {
            cout << "Too low! Try again." << endl;
        } else if (guess > number) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "🎉 Congratulations! You guessed the correct number: " << number << endl;
            break;
        }
    }

    return 0;
}
