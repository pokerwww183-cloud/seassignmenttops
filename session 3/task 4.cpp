#include <iostream>
using namespace std;

class Ticket {
public:
    ~Ticket() {
        cout << "Saving your ticket..." << endl;
    }
};

int main() {
    Ticket *t = new Ticket();

    delete t;

    return 0;
}
