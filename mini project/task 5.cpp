#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("content_list.txt");
    string data[50];
    int n = 0, num;

    while (getline(file, data[n]))
        n++;
    file.close();

    cout << "Content List:\n";
    for (int i = 0; i < n; i++)
        cout << i + 1 << ". " << data[i] << endl;

    cout << "\nEnter number to delete: ";
    cin >> num;

    if (num >= 1 && num <= n) {
        for (int i = num - 1; i < n - 1; i++)
            data[i] = data[i + 1];

        n--;

        ofstream out("content_list.txt");
        for (int i = 0; i < n; i++)
            out << data[i] << endl;
        out.close();

        cout << "\nUpdated List:\n";
        for (int i = 0; i < n; i++)
            cout << i + 1 << ". " << data[i] << endl;
    } else {
        cout << "Invalid number!";
    }

    return 0;
}
