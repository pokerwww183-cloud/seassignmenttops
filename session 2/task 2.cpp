#include <iostream>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;

    void togglePublic() {
        isPublic = !isPublic;
    }
};

int main() {
    Playlist p;

    p.name = "My Songs";
    p.createdOn = "19-09-2026";
    p.isPublic = true;

    cout << "Initial: " << p.isPublic << endl;

    p.togglePublic();
    cout << "After first toggle: " << p.isPublic << endl;

    p.togglePublic();
    cout << "After second toggle: " << p.isPublic << endl;

    return 0;
}
