#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("content_list.txt");
    string title, platform, views, status;
    string line;
    int count = 1;

    while (getline(file, line)) {
        size_t p1 = line.find(" | ");
        size_t p2 = line.find(" | ", p1 + 3);

        title = line.substr(0, p1);
        platform = line.substr(p1 + 3, p2 - p1 - 3);

        cout << count << ". " << title << " - " << platform << endl;
        count++;
    }

    file.close();
    return 0;
}
