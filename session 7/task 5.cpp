#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("insta_followers.txt");
    string name;
    int count = 0;

    while (getline(file, name)) {
        count++;
    }

    cout << "Total followers: " << count << endl;

    file.close();
    return 0;
}
