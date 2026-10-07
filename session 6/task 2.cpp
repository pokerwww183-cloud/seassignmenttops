#include <iostream>
using namespace std;

class InstaStory {
protected:
    int storyViews;

public:
    InstaStory() {
        storyViews = 500;
    }
};

class SponsoredStory : public InstaStory {
public:
    void showViews() {
        cout << "Story Views: " << storyViews << endl;
    }
};

int main() {
    SponsoredStory story;

    story.showViews();

    return 0;
}
