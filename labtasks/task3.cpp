// Created by: Muhammad Saim
// Created on: 2024-02-12
#include <iostream>
#include <string>
using namespace std;

class Calendar
{
    // 12 arrays for each month of the year
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string tasks[12][31];
    int year;

public:
    // default constructor
    Calendar() : year(2024){};
    // getters and setters
    int getYear() const
    {
        return year;
    }

    void setYear(int newYear)
    {
        year = newYear;
    }

    string getTask(int month, int day) const
    {
        return tasks[month - 1][day - 1];
    }

    void setTask(string task, int month, int day)
    {
        tasks[month - 1][day - 1] = task;
    }

    void addTask(string task, int date, int month)
    {
        tasks[month - 1][date - 1] = task;
    }

    void removeTask(int date, int month)
    {
        tasks[month - 1][date - 1] = "";
    }

    void showTasks() const
    {
        for (int i = 0; i < 12; i++)
        {
            cout << "Month: " << months[i] << endl;
            for (int j = 0; j < 31; j++)
            {
                // if the task is not empty
                if (tasks[i][j] != "")
                {
                    cout << "Day: " << j + 1 << " Task: " << tasks[i][j] << endl;
                }
            }
        }
    }
};

int main()
{
    std::cout << "\033[1;36mCode Developed By:\033[0m" << std::endl;
    std::cout << "\033[1;35mMuhammad Saim\033[0m" << std::endl;
    Calendar c;

    // Get the current year
    cout << "Current Year: " << c.getYear() << endl;

    // Set a new year
    c.setYear(2024);
    cout << "Updated Year: " << c.getYear() << endl;

    // hardcoded 5-6 tasks
    c.addTask("Task 1: Play Valorant", 1, 1);
    c.addTask("Task 2: Play Cyberpunk 2077", 2, 2);
    c.addTask("Task 3: Develop MERN Web App", 3, 3);
    c.addTask("Task 4: Develop Flutter App", 4, 4);
    c.addTask("Task 5: Listen Billie", 5, 5);
    c.addTask("Task 6: Live", 6, 6);

    // Display tasks
    c.showTasks();

    // Remove a task
    cout << "\nAfter removing task 1\n";
    c.removeTask(1, 1);
    c.showTasks();

    return 0;
}
