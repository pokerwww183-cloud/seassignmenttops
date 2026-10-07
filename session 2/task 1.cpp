#include <iostream>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;
};

int main() {
    Playlist p1;

    p1.name = "My Playlist";
    p1.createdOn = "19-09-2026";
    p1.isPublic = true;

    cout << "Name: " << p1.name << endl;
    cout << "Created On: " << p1.createdOn << endl;
    cout << "Public: " << p1.isPublic << endl;

    return 0;
}
