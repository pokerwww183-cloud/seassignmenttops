#include <iostream>
using namespace std;

class Movie {
public:
    string name;
    int year;

    Movie(string n, int y) {
        name = n;
        year = y;
    }

    Movie(Movie &m) {
        name = m.name;
        year = m.year;
    }

    void show() {
        cout << name << " - " << year << endl;
    }
};

int main() {
    Movie m1("3 Idiots", 2009);
    Movie m2(m1);

    cout << "Original: ";
    m1.show();

    cout << "Copy: ";
    m2.show();

    return 0;
}
