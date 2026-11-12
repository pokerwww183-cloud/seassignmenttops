#include <iostream>
#include <string>
using namespace std;

string getUserInitials(string fullName) {
    string initials = "";

    initials += toupper(fullName[0]);

    for (int i = 1; i < fullName.length(); i++) {
        if (fullName[i] == ' ') {
            initials += toupper(fullName[i + 1]);
        }
    }

    return initials;
}

int main() {
    string name = "Virat Kohli";

    cout << "Initials: " << getUserInitials(name) << endl;

    return 0;
}
