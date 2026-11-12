#include <iostream>
using namespace std;

int main() {

    // Entry-controlled loop: while
    int i = 1;

    cout << "Entry-Controlled Loop (while):" << endl;

    while (i <= 3) {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;

    // Exit-controlled loop: do-while
    int j = 5;

    cout << "Exit-Controlled Loop (do-while):" << endl;

    do {
        cout << j << " ";
        j++;
    } while (j <= 3);

    cout << endl;

    return 0;
}
