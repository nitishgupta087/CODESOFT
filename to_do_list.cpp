#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure for a task
struct Task {
    string description;
    bool completed;
};

// Global task list
vector<Task> tasks;

// Function to add a new task
void addTask() {
    string desc;
    cout << "Enter task description: ";
    cin.ignore(); // to clear buffer
    getline(cin, desc);

    Task newTask = {desc, false}; // default pending
    tasks.push_back(newTask);

    cout << "Task added successfully!\n";
}

// Function to view all tasks
void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    cout << "\nTo-Do List:\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i].description
             << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]\n";
    }
    cout << "\n";
}

// Function to mark task as completed
void markTaskCompleted() {
    int index;
    viewTasks();
    if (tasks.empty()) return;

    cout << "Enter task number to mark as completed: ";
    cin >> index;

    if (index < 1 || index > (int)tasks.size()) {
        cout << "Invalid task number!\n";
        return;
    }

    tasks[index - 1].completed = true;
    cout << "Task marked as completed!\n";
}

// Function to remove a task
void removeTask() {
    int index;
    viewTasks();
    if (tasks.empty()) return;

    cout << "Enter task number to remove: ";
    cin >> index;

    if (index < 1 || index > (int)tasks.size()) {
        cout << "Invalid task number!\n";
        return;
    }

    tasks.erase(tasks.begin() + (index - 1));
    cout << "Task removed successfully!\n";
}

// Main menu
int main() {
    int choice;

    do {
        cout << "\n===== TO-DO LIST MANAGER =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: markTaskCompleted(); break;
            case 4: removeTask(); break;
            case 5: cout << "Exiting... Goodbye!\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
