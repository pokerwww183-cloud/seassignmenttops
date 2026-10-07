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

class YouTuber : public SocialMediaUser {
public:
    string channelName;

    void uploadVideo(string title) {
        cout << "Video " << title << " uploaded to "
             << channelName << endl;
    }
};

int main() {
    YouTuber y;

    y.username = "Rahul";
    y.followers = 5000;
    y.channelName = "Rahul Vlogs";

    y.displayProfile();
    y.uploadVideo("My First Vlog");

    return 0;
}
