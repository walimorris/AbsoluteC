#include <iostream>
#include <cstdlib>

using namespace std;

/**
 * You have four identical prizes to give away and a pool of 25 finalists. The finalists
 * are assigned numbers from 1 to 25. Write a program to randomly select the numbers of
 * 4 finalist to receive a prize. Make sure not to pick the same number twice.
 *
 * By: Wali
 *
 */

/**
 * Chooses random finalists to win a surprise.
 * @param finalistCount : number of finalists to consider
 * @param prizeCount : number of prizes to give
 * return void
 */
void chooseRandomFinalist(int finalistCount, int prizeCount) {
    if ( finalistCount > prizeCount ) {
        int winner = 0;
        while ( prizeCount > 0 ) {
            int randomWinner = (rand() % finalistCount) + 1;
            if ( randomWinner != winner ) {
                winner = randomWinner;
                prizeCount = prizeCount - 1;
                cout << "Final #" << winner << " wins a prize!" << endl;
            }
        }
    } else {
        cout << "There are more prizes than finalist, either give less prizes "
             << "and more finalists or don't give prizes at all." << endl;
    }
}

int main() {

    int finalists = 0;
    int prizes = 0;

    cout << "Enter finalist count: ";
    cin >> finalists;

    cout << "Enter prize count: ";
    cin >> prizes;

    chooseRandomFinalist(finalists, prizes);

    return 0;
}
