#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    string username;
    int followers;
};

class YouTuber : public SocialMediaUser {
public:
    string channelName;

    void uploadVideo(string title) {
        cout << "Video " << title << " uploaded to "
             << channelName << endl;
    }
};

class GamingYouTuber : public YouTuber {
public:
    void streamGame(string gameName) {
        cout << username << " is now streaming "
             << gameName << " on " << channelName << endl;
    }
};

int main() {
    GamingYouTuber g;

    g.username = "Saniya";
    g.followers = 5000;
    g.channelName = "Saniya Gaming";

    g.streamGame("Minecraft");

    return 0;
}
