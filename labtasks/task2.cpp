// Created by: Muhammad Saim
// Created on: 2024-02-12
#include <iostream>
using namespace std;

class WaterBottle
{
    string company;
    string color;
    int waterCapacityL;
    int waterCapacityML;
    public:
    WaterBottle() : waterCapacityL(0), waterCapacityML(0) {};
    void setCompany(string c)
    {
        company = c;
    }
    void setColor(string c)
    {
        color = c;
    }
    void setWaterCapacityL(int a)
    {
        waterCapacityL = a;
    }
    void setWaterCapacityML(int a)
    {
        waterCapacityML = a;
    }
    string getCompany()
    {
        return company;
    }
    string getColor()
    {
        return color;
    }
    int getWaterCapacityL()
    {
        return waterCapacityL;
    }
    int getWaterCapacityML()
    {
        return waterCapacityML;
    }
    void updateWaterCapacity()
    {
        int drank;
        cout << "How much water did you drink (in ml )? ";
        cin >> drank;
        waterCapacityML -= drank;
        if (waterCapacityML < 0)
        {
            waterCapacityL -= 1;
            waterCapacityML += 1000;
        }
    }
    void display()
    {
        cout << "Company: " << company << endl;
        cout << "Color: " << color << endl;
        cout << "Water Capacity: " << waterCapacityL << "L " << waterCapacityML << "ml" << endl;
    }
};
int main()
{
    std::cout << "\033[1;36mCode Developed By:\033[0m" << std::endl;
    std::cout << "\033[1;35mMuhammad Saim\033[0m" << std::endl;
    WaterBottle wb;
    wb.setCompany("Pakola Water");
    wb.setColor("Navy Blue");
    wb.setWaterCapacityL(1);
    wb.setWaterCapacityML(500);
    wb.display();
    wb.updateWaterCapacity();
    wb.display();
    return 0;
}

