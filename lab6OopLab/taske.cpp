// Task: 5
#include <iostream>
#include <string>
using namespace std;
class Course
{
private:
    string courseCode;
    string courseName;
    int creditHours;

public:
    Course() : courseCode(""), courseName(""), creditHours(0) {}
    Course(string code, string name, int hours) : courseCode(code), courseName(name), creditHours(hours) {}
    string getCourseCode() const
    {
        return courseCode;
    }
    string getCourseName() const
    {
        return courseName;
    }
    int getCreditHours() const
    {
        return creditHours;
    }
};

class Student
{
private:
    string studentID;
    string studentName;
    Course *enrolledCourses;
    int numCourses;
    int cap;

public:
    Student(string id, string name) : studentID(id), studentName(name), numCourses(0), cap(5)
    {
        enrolledCourses = new Course[cap];
    }
    void enroll(Course c)
    {
        if (numCourses < cap)
        {
            enrolledCourses[numCourses] = c;
            numCourses++;
        }
        else
        {
            cout << "No space to enroll more courses" << endl;
        }
    }
    void drop(Course c)
    {
        for (int i = 0; i < numCourses; i++)
        {
            if (enrolledCourses[i].getCourseCode() == c.getCourseCode())
            {
                for (int j = i; j < numCourses - 1; j++)
                {
                    enrolledCourses[j] = enrolledCourses[j + 1];
                }
                numCourses--;
                break;
            }
        }
    }
    int getTotalCreditHours() const
    {
        int totalHours = 0;
        for (int i = 0; i < numCourses; i++)
        {
            totalHours += enrolledCourses[i].getCreditHours();
        }
        return totalHours;
    }
    void printEnrolledCourses() const
    {
        cout << "Enrolled Courses:" << endl;
        for (int i = 0; i < numCourses; i++)
        {
            cout << "\nCourse Code: " << enrolledCourses[i].getCourseCode() << endl;
            cout << "Course Name: " << enrolledCourses[i].getCourseName() << endl;
            cout << "Credit Hours: " << enrolledCourses[i].getCreditHours() << endl;
        }
    }
    void printStudentDetails() const
    {
        cout << "Student ID: " << studentID << endl;
        cout << "Student Name: " << studentName << endl;
    }
    ~Student()
    {
        delete[] enrolledCourses;
    }
};
int main()
{
    Student s1("23K-0708", "Muhammad Saim");
    Course c1("FASTBSCS101", "Programming Fundamentals", 3);
    Course c2("FASTBSCS102", "Data Structures", 3);
    Course c3("FASTBSCS103", "OOP", 3);
    s1.enroll(c1);
    s1.enroll(c2);
    s1.enroll(c3);
    cout << "Student Details:" << endl;
    s1.printStudentDetails();
    s1.printEnrolledCourses();
    cout << "\n\nTotal credit hours: " << s1.getTotalCreditHours() << endl;
    cout << "\n\nAfter dropping a course:\n" << endl;
    s1.drop(c2);
    s1.printEnrolledCourses();
    cout << "Total credit hours: " << s1.getTotalCreditHours() << endl;
    cout << "\nAfter dropping another course:\n" << endl;
    s1.drop(c1);
    s1.printEnrolledCourses();
    cout << "\nTotal credit hours: " << s1.getTotalCreditHours() << endl;
    cout << "\nAfter registering for a new course:\n" << endl;
    Course c4("FASTBSCS104", "Assembly Language", 3);
    s1.enroll(c4);
    s1.printEnrolledCourses();
    cout << "\nTotal credit hours: " << s1.getTotalCreditHours() << endl;

    return 0;
}