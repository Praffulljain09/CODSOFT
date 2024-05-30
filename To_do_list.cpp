#include <iostream>
#include <vector>
using namespace std;
struct Task
{
    string title;
    string description;
    bool completed;
};
vector<Task> tasks;
void addTask()
{
    Task task;
    cout << "Enter task title: ";
    cin >> task.title;
    cout << "Enter task description: ";
    cin >> task.description;
    task.completed = false;
    tasks.push_back(task);
}
void viewTasks()
{
    cout << "To-do list:" << endl;
    for (int i = 0; i < tasks.size(); i++)
    {
        cout << i + 1 << ". " << tasks[i].title << " (" << tasks[i].description << ")" << endl;
    }
}
void deleteTask()
{
    int taskIndex;
    cout << "Enter task index to delete: ";
    cin >> taskIndex;
    tasks.erase(tasks.begin() + taskIndex - 1);
}
int main()
{
    int choice;
    while (true)
    {
        cout << "1. Add task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Delete task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addTask();
            break;
        case 2:
            viewTasks();
            break;
        case 3:
            deleteTask();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}