#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

struct Product_Info
{
    string productName;
    float productPrice;
    int productQuantity;
    bool productHighDemand;
    int productID;
};

int product_database_info[100];

void add(struct Product_Info product[])
{
    random_device seed;
    mt19937 gen{seed()};
    uniform_int_distribution<> dist{0, 99};

    int random_number = dist(gen);
    product_database_info[random_number]++;
    cout << "\nAdding the product";
    cout << "\nEnter the product name: ";
    cin >> product[random_number].productName;
    cout << "\nEnter the product price: ";
    cin >> product[random_number].productPrice;
    cout << "\nEnter the product quantity: ";
    cin >> product[random_number].productQuantity;
    cout << "\nIs the product in demand? (0 for No & 1 for Yes): ";
    cin >> product[random_number].productHighDemand;
    product[random_number].productID = random_number;

    if (product[random_number].productHighDemand != 1 && product[random_number].productHighDemand != 0)
    {
        cout << "\nEnter the value for product demand either 0 or 1! ";
        product[random_number].productHighDemand = 0;
    }

    cout << "Your Product has been added successfully!\nYour Product ID is " << product[random_number].productID << " .";
}

void update(struct Product_Info product[])
{
    int userEnteredProductID;
    cout << "\nEnter the product ID you want to update! ";
    cin >> userEnteredProductID;

    if (userEnteredProductID >= 0 && userEnteredProductID < 100 && product_database_info[userEnteredProductID] !=0)
    {
        cout << "\nThe product with such ID exists! ";
        cout << "\nEnter the product name: ";
        cin >> product[userEnteredProductID].productName;
        cout << "\nEnter the product price: ";
        cin >> product[userEnteredProductID].productPrice;
        cout << "\nEnter the product quantity: ";
        cin >> product[userEnteredProductID].productQuantity;
        cout << "\nIs the product in demand? (0 for No & 1 for Yes): ";
        cin >> product[userEnteredProductID].productHighDemand;

        if (product[userEnteredProductID].productHighDemand != 1 && product[userEnteredProductID].productHighDemand != 0)
        {
            cout << "\nEnter the value for product demand either 0 or 1! ";
            product[userEnteredProductID].productHighDemand = 0;
        }

        cout << "Your Product has been Updated successfully!\nYour Product ID was " << product[userEnteredProductID].productID << " .";
    }
    else
    {
        cout << "\nInvalid product ID! ";
    }
}

void checkProductDetail(struct Product_Info product[])
{
    int userEnteredProductID;
    cout << "\nEnter the product ID you want to View! ";
    cin >> userEnteredProductID;

    if (userEnteredProductID >= 0 && userEnteredProductID < 100 && product_database_info[userEnteredProductID] !=0)
    {
        cout << "\nThe product with such ID exists! ";
        cout << "\nProduct name: " << product[userEnteredProductID].productName;
        cout << "\nProduct price: " << product[userEnteredProductID].productPrice;
        cout << "\nProduct quantity: " << product[userEnteredProductID].productQuantity;
        cout << "\nProduct Demand: ";
        if (product[userEnteredProductID].productHighDemand == 1)
        {
            cout << "\nProduct is in demand!";
        }
        else
        {
            cout << "\nProduct is not in demand!";
        }

        cout << "\nYou have viewed your product successfully!\nYour Product ID was " << product[userEnteredProductID].productID << " .";
    }
    else
    {
        cout << "\nInvalid product ID! ";
    }
}
void removeProduct(struct Product_Info product[])
{
    int userEnteredProductID;
    cout << "\nEnter the product ID you want to remove! ";
    cin >> userEnteredProductID;

    // if (userEnteredProductID >= 0 && userEnteredProductID < 100)
    if(product_database_info[userEnteredProductID] !=0)
    {

        cout << "\nThe product with such ID exists! ";
        product[userEnteredProductID].productName = "";
        product[userEnteredProductID].productPrice = 0;
        product[userEnteredProductID].productQuantity = 0;
        product_database_info[userEnteredProductID]--;


        cout << "Your Product has been removed successfully!\n";
    }
    else
    {
        cout << "\nInvalid product ID! ";
    }
}
int home_screen(struct Product_Info product[])
{
    cout << "\n\nWelcome To Product management system for an online store! ";
    cout << "\n1. Add a product\n2. Update a product\n3. Remove a product\n4. Check Product Details\n5. Exit\n\n";

    int user_input;
    cin >> user_input;

    switch (user_input)
    {
    case 1:
        add(product);
        break;
    case 2:
        update(product);
        break;
    case 3:
        removeProduct(product);
        break;
    case 4:
        checkProductDetail(product);
        break;
    case 5:
        cout << "\nExiting the program!";
        return 0;
    default:
        cout << "\nAn Error Occurred!";
        break;
    }

    home_screen(product);
    return 0;
}

int main()
{
    struct Product_Info product[100];

    for (int i = 0; i < 100; i++)
    {
        product_database_info[i] = 0;
    }

    home_screen(product);
    return 0;
}
