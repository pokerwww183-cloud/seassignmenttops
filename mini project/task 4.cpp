#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("content_list.txt");
    string title, platform, views, status;
    string data[50];
    int n = 0, num;

    while (getline(file, data[n]))
        n++;
    file.close();

    for (int i = 0; i < n; i++)
        cout << i + 1 << ". " << data[i] << endl;

    cout << "Enter content number: ";
    cin >> num;
    cin.ignore();

    cout << "Enter new status: ";
    getline(cin, status);

    int p = data[num - 1].rfind(" | ");
    data[num - 1] = data[num - 1].substr(0, p + 3) + status;

    ofstream out("content_list.txt");

    for (int i = 0; i < n; i++)
        out << data[i] << endl;

    out.close();

    cout << "Status updated!";
    return 0;
}
