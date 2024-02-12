// Created by: Muhammad Saim
// Created on: 2024-02-12
#include <iostream>
#include <string>
using namespace std;

class StationaryShop
{
    string items[100];
    double prices[100];
    int count;

public:
    StationaryShop() : count(0) {}

    void addItem(string item, double price)
    {
        items[count] = item;
        prices[count] = price;
        count++;
    }

    void editPrice(string item, double price)
    {
        for (int i = 0; i < count; i++)
        {
            if (items[i] == item)
            {
                prices[i] = price;
                cout << "Price for " << item << " updated to " << price << endl;
                return;
            }
        }
        cout << "Item not found." << endl;
    }

    void showItems()
    {
        cout << "Items in the shop:" << endl;
        for (int i = 0; i < count; i++)
        {
            cout << items[i] << " - Rs" << prices[i] << endl;
        }
        cout << endl;
    }

    void createReceipt(string item, int amount)
    {
        for (int i = 0; i < count; i++)
        {
            // if the item is found
            if (items[i] == item)
            {
                double total = prices[i] * amount;
                cout << "Receipt:" << endl;
                cout << "Item: " << item << endl;
                cout << "Price: Rs" << prices[i] << endl;
                cout << "Amount: " << amount << endl;
                cout << "Total: Rs" << total << endl;
                return;
            }
        }
        cout << "Item not found." << endl;
    }

    // Getters and setters for items array
    const string getItem(int index) const
    {
        if (index >= 0 && index < count)
        {
            return items[index];
        }
        // return empty string if index is out of bound
        return "";
    }

    // Getters and setters for prices array
    double getPrice(int index) const
    {
        if (index >= 0 && index < count)
        {
            return prices[index];
        }
        return 0.00;
    }
};

int main()
{
    std::cout << "\033[1;36mCode Developed By:\033[0m" << std::endl;
    std::cout << "\033[1;35mMuhammad Saim\033[0m" << std::endl;
    StationaryShop shop;
    int choice;
    // Adding some default items
    shop.addItem("Pen", 50.0);
    shop.addItem("Pencil", 20.0);
    shop.addItem("Notebook", 150.0);
    shop.addItem("Eraser", 10.0);
    shop.addItem("Sharpener", 15.0);
    do
    {
        cout << "Stationary Shop Menu:" << endl;
        cout << "1. Add item and price" << endl;
        cout << "2. Fetch list of items" << endl;
        cout << "3. Edit price of an item" << endl;
        cout << "4. View all items and prices" << endl;
        cout << "5. Create receipt" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string item;
            double price;
            cout << "Enter item name: ";
            cin >> item;
            cout << "Enter item price: ";
            cin >> price;
            shop.addItem(item, price);
            break;
        }
        case 2:
            shop.showItems();
            break;
        case 3:
        {
            string item;
            double price;
            cout << "Enter item name: ";
            cin >> item;
            cout << "Enter new price: ";
            cin >> price;
            shop.editPrice(item, price);
            break;
        }
        case 4:
            shop.showItems();
            break;
        case 5:
        {
            string item;
            int amount;
            cout << "Enter item name: ";
            cin >> item;
            cout << "Enter amount: ";
            cin >> amount;
            shop.createReceipt(item, amount);
            break;
        }
        case 0:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 0);

    return 0;
}