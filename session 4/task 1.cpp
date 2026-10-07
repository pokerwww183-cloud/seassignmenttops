#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    string username;
    int followers;

    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

int main() {
    SocialMediaUser user;

    user.username = "saniya";
    user.followers = 1200;

    user.displayProfile();

    return 0;
}
