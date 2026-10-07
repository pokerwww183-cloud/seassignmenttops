#include <iostream>
using namespace std;

class Playlist {
public:
    string name;

    Playlist() {
        name = "My Favourites";
        cout << "Welcome to your playlist!" << endl;
    }
};

int main() {
    Playlist p;

    cout << "Playlist Name: " << p.name << endl;

    return 0;
}
