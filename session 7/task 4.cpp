#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("wishlist.txt");

    string name;
    float price;

    for(int i = 0; i < 3; i++) {
        cout << "Product: ";
        getline(cin, name);
        cout << "Price: ";
        cin >> price;
        cin.ignore();

        out << name << " - Rs." << price << endl;
    }
    out.close();

    ifstream in("wishlist.txt");

    cout << "\nWishlist:\n";
    while(getline(in, name))
        cout << name << endl;

    in.close();
    return 0;
}
