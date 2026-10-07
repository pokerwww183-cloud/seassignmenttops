#include <iostream>
using namespace std;

class SocialMediaUploader {
public:
    virtual void uploadContent() {
        cout << "Uploading content..." << endl;
    }
};

class InstagramUploader : public SocialMediaUploader {
public:
    void uploadContent() {
        cout << "Instagram: Uploading photo or reel." << endl;
    }
};

class YouTubeUploader : public SocialMediaUploader {
public:
    void uploadContent() {
        cout << "YouTube: Uploading a video." << endl;
    }
};

int main() {
    InstagramUploader instagram;
    YouTubeUploader youtube;

    instagram.uploadContent();
    youtube.uploadContent();

    return 0;
}
