#include <iostream>
#include <fstream>
using namespace std;

class Content {
public:
    string title, platform, status;
    int views;

    void addContent() {
        cout << "Enter title: ";
        getline(cin, title);

        cout << "Enter platform: ";
        getline(cin, platform);

        cout << "Enter views: ";
        cin >> views;
        cin.ignore();

        cout << "Enter status: ";
        getline(cin, status);

        ofstream file("content_list.txt", ios::app);
        file << title << " | " << platform << " | "
             << views << " | " << status << endl;
        file.close();

        cout << "Content saved!\n";
    }
};

int main() {
    Content c;
    int choice;

    do {
        cout << "\n1. Add Content\n2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1)
            c.addContent();

    } while (choice != 2);

    return 0;
}
