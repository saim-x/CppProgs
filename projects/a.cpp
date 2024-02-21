#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Pet
{
private:
    string healthStatus;
    int hungerLevel;
    int happinessLevel;
    vector<string> specialSkills;
    int healthPoints;

public:
    Pet() : healthStatus(""), hungerLevel(0), happinessLevel(0), healthPoints(0) {}

    Pet(string health_status, int hunger_level, int happiness_status, const vector<string> &special_Skills, int health_points) : healthStatus(health_status), hungerLevel(hunger_level), happinessLevel(happiness_status), specialSkills(special_Skills), healthPoints(health_points) {}

    void displayPetDetails()
    {
        cout << "\nFollowing are the details of your pet: " << endl;
        cout << "\nYour pet is " << healthStatus << "\nThe hunger level of your pet is " << hungerLevel;
        // Conditions if the pet is happy or not to display
        if (happinessLevel > 7)
        {
            cout << "\nYour pet is extremely happy!" << endl;
        }
        else if (happinessLevel > 5)
        {
            cout << "\nYour pet is happy! He's playful." << endl;
        }
        else if (happinessLevel > 3)
        {
            cout << "\nYour pet is okay & neutral." << endl;
        }
        else
        {
            cout << "\nYour pet is not very happy." << endl;
        }

        // Display special skills
        cout << "Special Skills:" << endl;
        for (size_t i = 0; i < specialSkills.size(); ++i)
        {
            if (!specialSkills[i].empty())
            {
                cout << "- " << specialSkills[i] << endl;
            }
            else
            {
                cout << "ok" << endl;
            }
        }
    }

    void updateHappiness()
    {
        cout << "\nHow do you want to interact with your pet? Enter the option to  make him happy, sad, angry, or neutral.\n";

        int randomNumber = 1;

        int happinessChange = 0;

        switch (randomNumber)
        {
        case 1:
            cout << "The system is Playing with pet" << endl;
            happinessChange = 2;
            break;
        case 2:
            cout << "The system is Feeding the pet" << endl;
            happinessChange = 1;
            break;
        case 3:
            cout << "The system is Ignoring the pet" << endl;
            happinessChange = -2;
            break;
        default:
            break;
        }
        
        happinessLevel += happinessChange;
        cout << "Interaction completed. Current happiness: " << happinessLevel << endl;
    }
    void updateHappinessThroughUserinput(){
        int user_input;
        cout << "Enter the option to  make him happy, sad, or angry.\n";
        cout << "1. Hug the pet: \n";
        cout << "2. Spank the pet: \n";
        cout << "3. Ignore the pet: \n";
        cin >> user_input;
        int happinessChange = 0;
        switch (user_input)
        {
        case 1:
            cout << "You hugged your pet. " << endl;
            happinessChange = 2;
            break;
        case 2: 
            cout << "You spanked your pet. " << endl;
            happinessChange = -2;
            break;
        case 3:
            cout << "You ignored your pet. " << endl;
            happinessChange = -1;
            break;
        default:
            break;
        }
        happinessLevel += happinessChange;
        
    }
    void updateHealth()
    {
        cout << "\nThe system is checking and  updating pet's health.\n";

        int randomNumber = 3;

        int healthChange = 0;
        cout << "\nThe checkup is complete!";
        switch (randomNumber)
        {
        case 1:
            cout << "The system found a virus in your pet.\nThe health of the pet is decreased!" << endl;
            healthChange = -2;
            break;
        case 2:
            cout << "The system found nothing  unusual.\nPet's health remains unchanged." << endl;
            healthChange = 0;
            break;
        case 3:
            cout << "The system has seen quite improvement in the health of your pet.\n" << endl;
            healthChange = 2;
            break;
        default:
            break;
        }
        healthPoints += healthChange;
        if (healthPoints > 10)
        {
            healthPoints = 10;
            cout << "The pet's health has reached its maximum level.\n";
        }
        if (healthPoints <= 0)
        {
            healthPoints = 1;
            cout << "The Pet is dangerously ill.\n";
        }

        if (healthPoints <= 10 && healthPoints > 5)
        {
            healthStatus = "Healthy";
        }
        else if (healthPoints <= 2 && healthPoints > 0)
        {
            healthStatus = "Sick";
        }
        else
        {
            healthStatus = "Very Sick";
        }
        
    }
    void updateHunger()
    {
        int hungerchange = 0;
        int randomNumber = 1;
        switch (randomNumber)
        {
        case 1:
            cout << "The system is Feeding the pet" << endl;
            hungerchange = 1;
            break;
        case 2:
            cout << "The system is Ignoring the pet" << endl;
            hungerchange = -1;
            break;
        default:
            break;
        }
        hungerLevel += hungerchange;
        cout << "The system has updated the hunger level of the pet.\n";
    }
    void updateHungerThroughUserInput(){
        int user_input;
        cout << "Enter the option to  feed your pet or ignore him.\n";
        cout << "1. Feed the pet: \n";
        cout << "2. Ignore the pet: \n";
        cin >> user_input;
        int hungerchange = 0;
        switch (user_input)
        {
        case 1:
            cout << "You fed your pet. " << endl;
            hungerchange = 1;
            break;
        case 2: 
            cout << "You ignored your pet. " << endl;
            hungerchange = -1;
            break;
        default:
            break;
        }
        hungerLevel += hungerchange;
    }
    
};
int main()
{
    cout << "\n\n----------------Welcome to Virtual Pet Adoption System----------------" << endl;
    Pet dog("healthy", 6, 7, {"Do backflips", "Eat nothing"}, 0);
    int user_input_for_menu = -2;
    while (user_input_for_menu != 0)
    {
        cout << "\n\n";
        cout << "Enter the option number: " << endl;
        cout << "1. View Pet Information" << endl;
        cout << "2. Interact with your pet" << endl;
        cout << "3. Feed your pet" << endl;
        cout << "4. Make Appointment for your pet" << endl;
        cout << "5. Simulate the whole system for a test run, Just Sit and Watch the demo of our system" << endl;
        cout << "0. Exit the Program" << endl;
        cin >> user_input_for_menu;
        switch (user_input_for_menu)
        {
        case 5:
            // System Demo Simulation
            cout << "Creating a virtual demo pet for you!" << endl;
            dog.displayPetDetails();
            dog.updateHappiness();
            dog.updateHealth();
            dog.updateHunger();
            break;
        case 1:
            dog.displayPetDetails();
            break;
        case 2:
            dog.updateHappinessThroughUserinput();
            break;
        case 3:
            dog.updateHunger();
            break;
        default:
            break;
        }
    }
}

// Implement the following member functions within the Pet class:
// ● displayPetDetails(): Displays detailed information about the pet, including happiness level, health
// status, hunger level, and special skills.
// ● updateHappiness(): Updates the pet's happiness level based on user interactions.
// ● updateHealth(): Updates the health status of the pet, considering any changes in health.
// ● updateHunger(): Updates the hunger level of the pet, accounting for feeding or other relevant
// actions.