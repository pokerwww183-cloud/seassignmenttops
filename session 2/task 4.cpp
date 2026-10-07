#include <iostream>
using namespace std;

class Playlist {
public:
    string name;
    string songs[10];
    int songCount;

    Playlist() {
        songCount = 0;
    }

    void addSong(string songTitle) {
        songs[songCount] = songTitle;
        songCount++;
    }

    void showSongs() {
        cout << "Songs in Playlist:" << endl;

        for (int i = 0; i < songCount; i++) {
            cout << songs[i] << endl;
        }
    }
};

int main() {
    Playlist p;

    p.name = "My Playlist";

    p.addSong("Tum Hi Ho");
    p.addSong("Kesariya");
    p.addSong("Apna Bana Le");

    p.showSongs();

    return 0;
}
