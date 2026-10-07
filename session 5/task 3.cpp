#include <iostream>
using namespace std;

class FlipkartSearch {
public:
    void searchProduct(string name) {
        cout << "Searching for: " << name << endl;
    }

    void searchProduct(string name, string category) {
        cout << "Searching for: " << name << " in " << category << endl;
    }
};

int main() {
    FlipkartSearch search;

    search.searchProduct("iPhone 15");
    search.searchProduct("Laptop", "Electronics");

    return 0;
}
