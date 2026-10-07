
#include <iostream>
#include <vector>
using namespace std;

class Task {
public:
    string title;
    bool isDone;

    Task(string t) {
        title = t;
        isDone = false;
    }

    void markDone() {
        isDone = true;
    }
};

class TaskList {
public:
    vector<Task> tasks;

    void addTask(string title) {
        tasks.push_back(Task(title));
    }

    void markTaskDone(int index) {
        tasks[index].markDone();
    }

    void showTasks() {
        for(int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". " << tasks[i].title;
            cout << " - " << (tasks[i].isDone ? "DONE" : "PENDING") << endl;
        }
    }
};

int main() {
    TaskList list;

    list.addTask("Study C++");
    list.addTask("Complete Assignment");
    list.addTask("Practice Coding");

    list.markTaskDone(1);

    list.showTasks();

    return 0;
}

