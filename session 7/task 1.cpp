#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("my_fav_songs.txt");

    file << "Tum Hi Ho\n";
    file << "Kesariya\n";
    file << "Apna Bana Le\n";
    file << "Chaleya\n";
    file << "Tera Ban Jaunga\n";

    file.close();

    cout << "Songs saved successfully!";
    return 0;
}
