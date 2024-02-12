// Created by: Muhammad Saim
// Created on: 2024-02-12
#include <iostream>
#include <string>
using namespace std;

class Smartphone
{
    string company;
    string model;
    string displayResolution;
    int ram;
    int rom;
    int storage;

public:
    Smartphone() : ram(0), rom(0), storage(0) {};

    // Getter and Setter for company
    void setCompany(string c)
    {
        company = c;
    }
    string getCompany()
    {
        return company;
    }

    // Getter and Setter for model
    void setModel(string m)
    {
        model = m;
    }
    string getModel()
    {
        return model;
    }

    // Getter and Setter for displayResolution
    void setDisplayResolution(string d)
    {
        displayResolution = d;
    }
    string getDisplayResolution()
    {
        return displayResolution;
    }

    // Getter and Setter for ram
    void setRam(int r)
    {
        ram = r;
    }
    int getRam()
    {
        return ram;
    }

    // Getter and Setter for rom
    void setRom(int r)
    {
        rom = r;
    }
    int getRom()
    {
        return rom;
    }

    // Getter and Setter for storage
    void setStorage(int s)
    {
        storage = s;
    }
    int getStorage()
    {
        return storage;
    }

    void makePhoneCall()
    {
        cout << "Making a phone call" << endl;
    }
    void sendMessage()
    {
        cout << "Sending a message" << endl;
    }
    void connectToWifi()
    {
        cout << "Connecting to the wifi" << endl;
    }
    void browseInternet()
    {
        cout << "Browsing the internet" << endl;
    }
    void display()
    {
        cout << "Company: " << getCompany() << endl;
        cout << "Model: " << getModel() << endl;
        cout << "Display Resolution: " << getDisplayResolution() << endl;
        cout << "RAM: " << getRam() << "GB" << endl;
        cout << "ROM: " << getRom() << "GB" << endl;
        cout << "Storage: " << getStorage() << "GB" << endl;
    }
};

int main()
{
    std::cout << "\033[1;36mCode Developed By:\033[0m" << std::endl;
    std::cout << "\033[1;35mMuhammad Saim\033[0m" << std::endl;
    Smartphone s;
    // setting the values
    s.setCompany("Nothing");
    s.setModel("Pro 1");
    s.setDisplayResolution("3280x4312 pixels");
    s.setRam(8);
    s.setRom(128);
    s.setStorage(128);
    s.display();
    s.makePhoneCall();
    s.sendMessage();
    s.connectToWifi();
    s.browseInternet();
    return 0;
}
