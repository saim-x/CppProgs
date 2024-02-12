// Created by: Muhammad Saim
// Created on: 2024-02-12
#include <iostream>
using namespace std;
class BoardMarker
{
    string company;
    string color;
    bool refillable;
    bool inkStatus;

public:
    BoardMarker() : refillable(false), inkStatus(false) {};
    // setters
    void setcompany(string c)
    {
        company = c;
    }
    void setColor(string c)
    {
        color = c;
    }
    void setRefillable(bool r)
    {
        refillable = r;
    }
    void setInkStatus(bool i)
    {
        inkStatus = i;
    }
    // getters
    string getCompany()
    {
        return company;
    }
    string getColor()
    {
        return color;
    }
    bool getRefillable()
    {
        return refillable;
    }
    bool getInkStatus()
    {
        return inkStatus;
    }
    void write()
    {
        if (inkStatus)
        {
            cout << "The ink is not empty" << endl;
        }
        else
        {
            cout << "The ink is empty" << endl;
        }
    }
    void refill()
    {
        if (refillable)
        {
            cout << "The marker is refillable!" << endl;
        }
        else
        {
            cout << "The marker isn't refillable" << endl;
        }
    }
};
int main()
{
    //Info about the developer
    std::cout << "\033[1;36mCode Developed By:\033[0m" << std::endl;
    std::cout << "\033[1;35mMuhammad Saim\033[0m" << std::endl;
    BoardMarker marker;
    // setters
    marker.setcompany("Fulgor Nocturnus");
    marker.setColor("Royal Blue");
    marker.setRefillable(true);
    marker.setInkStatus(true);

    // getters
    cout << "Company: " << marker.getCompany() << endl;
    cout << "Color: " << marker.getColor() << endl;
    cout << "Refillable: " << marker.getRefillable() << endl;
    cout << "Ink Status: " << marker.getInkStatus() << endl;
    marker.write();
    marker.refill();

    return 0;
}
