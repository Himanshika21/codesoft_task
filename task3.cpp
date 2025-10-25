#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> tasks;
    vector<bool> done;
    int choice;

    do {
        cout << "\n--- TO-DO LIST ---\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string t;
            cout << "Enter task: ";
            getline(cin, t);
            tasks.push_back(t);
            done.push_back(false);
            cout << "Task added!\n";
        } 
        else if (choice == 2) {
            cout << "\nYour Tasks:\n";
            if (tasks.empty()) cout << "No tasks yet!\n";
            for (int i = 0; i < tasks.size(); i++) {
                cout << i + 1 << ". " << tasks[i];
                if (done[i]) cout << " (Done)";
                cout << endl;
            }
        } 
        else if (choice == 3) {
            int n;
            cout << "Enter task number to mark done: ";
            cin >> n;
            if (n > 0 && n <= tasks.size()) {
                done[n - 1] = true;
                cout << "Marked as completed!\n";
            } else cout << "Invalid number!\n";
        } 
        else if (choice == 4) {
            int n;
            cout << "Enter task number to remove: ";
            cin >> n;
            if (n > 0 && n <= tasks.size()) {
                tasks.erase(tasks.begin() + n - 1);
                done.erase(done.begin() + n - 1);
                cout << "Task removed!\n";
            } else cout << "Invalid number!\n";
        }

    } while (choice != 5);

    cout << "Goodbye!\n";
    return 0;
}
