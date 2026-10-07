#include <iostream>
using namespace std;

class Content {
public:
    string title, platform, status;
    int views;

    void display() {
        cout << "Title: " << title << endl;
        cout << "Platform: " << platform << endl;
        cout << "Views: " << views << endl;
        cout << "Status: " << status << endl;
    }
};

int main() {
    Content c;

    c.title = "My First Reel";
    c.platform = "Instagram";
    c.views = 5000;
    c.status = "Published";

    c.display();

    return 0;
}
