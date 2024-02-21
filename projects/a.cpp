//Developed, Coded, Debugged, Tested, and Documented by: Muhammad Saim
//Date: 21.2.2024


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
            cout << "\nYour pet is happy!" << endl;
        }
        else if (happinessLevel > 3)
        {
            cout << "\nYour pet is okay." << endl;
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
    void updateHappinessThroughUserinput()
    {
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
            cout << "The system has seen quite improvement in the health of your pet." << endl;
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
    void udpateHealthThroughUserInput()
    {
        int user_input;
        cout << "Enter the option to  make an appointment for your pet.\n";
        cout << "1. Make an appointment for your pet: \n";
        cout << "2. Ignore the pet: \n";
        cin >> user_input;
        int healthChange = 0;
        switch (user_input)
        {
        case 1:
            cout << "You made an appointment for your pet. " << endl;
            healthChange = 2;
            break;
        case 2:
            cout << "You ignored your pet. " << endl;
            healthChange = -1;
            break;
        default:
            break;
        }
        if (healthPoints < 10 && healthPoints > 0)
        {
            healthPoints += healthChange;
        }
        else if (healthPoints == 10)
        {
            cout << "The pet's health has reached its maximum level.\n";
        }
        else if (healthPoints == 0)
        {
            cout << "The pet is dangerously ill.\n";
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
        happinessLevel += hungerchange;
        cout << "The system has updated the hunger level of the pet.\n";
    }
    void updateHungerThroughUserInput()
    {
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
    // Creating a pet object and test the member functions
    cout << "\n\n----------------Welcome to Virtual Pet Adoption System----------------" << endl;
    Pet dog("healthy", 6, 7, {"Do backflips", "Eat nothing"}, 0);
    int user_input_for_menu = -2;
    while (user_input_for_menu != 0)
    {
        cout << "\n\n";
        cout << "Enter the option number: " << endl;
        cout << "1. View Pet Information" << endl;
        cout << "2. Interact with your pet ( Update Happiness)" << endl;
        cout << "3. Feed your pet (Update Hunger)" << endl;
        cout << "4. Make Appointment for your pet ( Update Health)" << endl;
        cout << "5. Simulate the whole system for a test run, Just Sit and Watch the demo of our system" << endl;
        cout << "0. Exit the Program" << endl;
        cin >> user_input_for_menu;
        switch (user_input_for_menu)
        {
        case 0:
            cout << "Exiting the program." << endl;
            break;
        case 1:
            dog.displayPetDetails();
            break;
        case 2:
            dog.updateHappinessThroughUserinput();
            break;
        case 3:
            dog.updateHungerThroughUserInput();
            break;
        case 4:
            dog.udpateHealthThroughUserInput();
            break;
        case 5:
            // System Demo Simulation
            cout << "Creating a virtual demo pet for you!" << endl;
            dog.displayPetDetails();
            dog.updateHappiness();
            dog.updateHealth();
            dog.updateHunger();
            break;
        default:
            break;
        }
    }
}






// Adopter Class:
// The Adopter class serves as a representation of users who are enthusiastic about adopting virtual pets. In
// order to enrich the functionality of this class, you are tasked with incorporating the following features:
// adopterName and adopterMobileNum, these attributes should be initialized during the creation of an
// Adopter object. A list named adoptedPetRecords within the Adopter class. This list should be responsible
// for maintaining detailed records of the adopted pets by the respective adopter.
// Implement the following member functions within the Adopter class:
// ● adoptPet(): Allows the adopter to adopt a virtual pet and records its details.
// ● returnPet(): Enables the adopter to return a pet, updating records accordingly.
// ● displayAdoptedPets(): Displays detailed information about all adopted pets, including their species,
// happiness, health, hunger, and skills.