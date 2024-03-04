// You have been hired to develop a program for a hair salon that keeps track of appointments
// made, total earnings, and the average cost per appointment using static members and
// functions.
// ####---------------797095======1312425m,.m.vbn,mvn,
// Your task is to define a class that represents an appointment at the salon. The class should
// have private data members that store information about the appointment, and static data
// members that keep track of the total number of appointments made and the total earnings
// from all appointments.
// Define a constructor for the appointment class that takes arguments for the appointment
// details and updates the static data members accordingly. Additionally, you should define
// public member functions that allow access to the appointment details.
// Finally, you should define a static function that calculates and returns the average cost of all
// the appointments made. This function should use the static data members to perform the
// calculation.

// In the main function, you should create several instances of the appointment class with
// different appointment details, and then call the static function to calculate the average cost of
// all the appointments made. This will allow you to verify that the program is correctly keeping
// track of appointments and earnings

#include <iostream>
#include <string>
using namespace std;

class Appointment{
    private:
        string name;
        string date;
        double fee;
        static int totalAppointments;
        static double totalEarnings;
    public:
        Appointment(string n, string d, double f) : name(n), date(d), fee(f){
            totalAppointments++;
            totalEarnings += fee;
        }
        static double averageCost(){
            return totalEarnings / totalAppointments;
        }
        string getName() const{
            return name;
        }
        string getDate() const{
            return date;
        }
        double getFee() const{
            return fee;
        }
        void display(){
            cout << "\nName: " << name << endl;
            cout << "Date: " << date << endl;
            cout << "Fee: " << fee << endl;
        
        }
};

int Appointment::totalAppointments = 0;
double Appointment::totalEarnings = 0;
void dev(){
    cout << "-----------------Developed by Muhammad Saim-----------------" << endl;
    cout << "-----------------ID: 23K-0708-------------------------------" << endl;
    
}
int main(){
    dev();
    Appointment app1("Saim", "25.3.24", 500.0);
    Appointment app2("Billie", "24.3.24", 600.0);
    Appointment app3("Travis", "23.3.24", 700.0);
    Appointment app4("Cench", "22.3.24", 800.0);
    Appointment app5("Heather", "21.3.24", 1000.0);
    cout << "Details of all appointments: " << endl;
    app1.display();
    app2.display();
    app3.display();
    app4.display();
    app5.display();
    
    cout << "\nAverage cost of all appointments: " << Appointment::averageCost() << endl;

    return 0;
}