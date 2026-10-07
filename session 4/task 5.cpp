#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    string username;
    int followers;
};

class YouTuber : public SocialMediaUser {
};

class Podcaster : public SocialMediaUser {
};

class InstagramInfluencer : public SocialMediaUser {
public:
    void postStory(string storyTitle) {
        cout << username << " posted a new story: "
             << storyTitle << endl;
    }
};

int main() {
    InstagramInfluencer user;

    user.username = "Saniya";
    user.followers = 3000;

    user.postStory("New Instagram Story!");

    return 0;
}
