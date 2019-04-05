#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <array>
#include <string>

//Declaring our insurance data structure
struct InsuranceAllocate{
    std::string firstName;
    std::string lastName;
    std::string address;
    std::string maritalStatus;
    std::string licenseNumber;
    int age;
    int numChildren;
    int numCars;
    int numAccidentsFive;
    int numAccidentsTen;
    bool needVisionCorrect;
};


InsuranceAllocate *requestAllocation(int &);
void displayMenu();

int main() {

    int size;   //size given as reference from our Allocate function

    //Point of type struct to memory of the allocated struct array
    InsuranceAllocate *newArray = requestAllocation(size);

    //Continue to menu once enter is pressed
    std::cout << "Press enter when you wish to continue...";
    std::cin.get();
    std::cout << std::endl;
    std::cout << std::endl;


    //First display the names the user entered (this step allows us to go into a switch statement and make retrieving
    //the current index and all that index's members of struct
    std::cout << "Here are the names of the three people you entered: \n";
    std::cout << "1: " << newArray[0].firstName << " " << newArray[0].lastName << "\n";
    std::cout << "2: " << newArray[1].firstName << " " << newArray[1].lastName << "\n";
    std::cout << "3: " << newArray[2].firstName << " " << newArray[2].lastName << "\n";


    std::cout << std::endl;
    std::cout << std::endl;

        //Now get the name of the person they wish to recieve personal data for
        int inName;
        std::cout<< "Please enter the number to the corresponding name you wish to get data for or enter 0 to exit the program:\n";
        std::cin >> inName;


        //break out immediately if the user wishes to exit
        if(inName == 0){
            return 0;
        }

        //Variable to store a users entry of whether they want to retrieve all data or specific data
        char entry;

        //We have received the name, now ask the user to enter A or B (a = display all info, b=request any data)
        switch (inName) {

            //If user entered 1, output "you entered so and so, what would you like to do?
            case 1:
                std::cout << "You entered 1: " << newArray[0].firstName << " " << newArray[0].lastName << std::endl;
                std::cout
                    << "Enter 'A' in the console to see all this persons data or 'B' to enter in the numbered options from the menu above: ";
                std::cin >> entry;
                //If the user enters A/a (Upper/Lowercase entry) display all data
                if (entry == 'A' || entry == 'a') {
                    std::cout << "Here is all the data: \n";
                    std::cout << "First Name: " << newArray[0].firstName << std::endl;
                    std::cout << "Last Name: " << newArray[0].lastName << std::endl;
                    std::cout << "Street Address: " << newArray[0].address << std::endl;
                    std::cout << "Marital Status: " << newArray[0].maritalStatus << std::endl;
                    std::cout << "License Number: " << newArray[0].licenseNumber << std::endl;
                    std::cout << "Age: " << newArray[0].age << std::endl;
                    std::cout << "Number of children: " << newArray[0].numChildren << std::endl;
                    std::cout << "Number of vehicles: " << newArray[0].numCars << std::endl;
                    std::cout << "Number of accidents in the last 5 years: " << newArray[0].numAccidentsFive << std::endl;
                    std::cout << "Number of accidents in the last 10 years: " << newArray[0].numAccidentsTen << std::endl;
                    //Using condensed if/else statement ?s
                    std::cout << (newArray[0].needVisionCorrect == 1 ? "Needs vision correction.\n"
                                                                 : "Does not need vision correction\n");
            } else {


                    //Call the menu
                    displayMenu();

                    //get the data the user wishes to retrieve (retrieve as a string of numbers and terminates when enter is pressed)
                    int decision = 1;
                    int number;
                    while(decision != 2){
                        std::cout << "Enter the number of corresponding data you wish to retrieve: \n";
                        std::cin >> number;
                        //output based off the entry the user requested
                        if(number == 1){
                            std::cout<< "First name: " << newArray[0].firstName;
                        }
                        else if(number == 2){
                            std::cout<< "Last name: " << newArray[0].lastName;
                        }
                        else if(number == 3){
                            std::cout<<"Address: " << newArray[0].address;
                        }
                        else if(number == 4){
                            std::cout<< "Marital status: " << newArray[0].maritalStatus;
                        }
                        else if(number == 5){
                            std::cout<< "License number: " << newArray[0].licenseNumber;
                        }
                        else if(number == 6){
                            std::cout<< "Age: " << newArray[0].age;
                        }
                        else if(number == 7){
                            std::cout<< "Number of children: " << newArray[0].numChildren;
                        }
                        else if(number == 8){
                            std::cout<< "Number of cars: " << newArray[0].numCars;
                        }
                        else if(number == 9){
                            std::cout<< "Number of accidents in the last 5 years: " << newArray[0].numAccidentsFive;
                        }
                        else if(number == 10){
                            std::cout<< "Number of accidents in the last 10 years: " << newArray[0].numAccidentsTen;
                        }
                        else if(number == 11){
                            std::cout << (newArray[0].needVisionCorrect == 1 ? "Needs vision correction.\n"
                                                                             : "Does not need vision correction\n");
                        }

                        std::cout << "\nContinue? \t(1 = yes, 2 = no)\n";
                        std::cin >> decision;
                        if(decision == 2){
                            std::cout << "Goodbye!";
                        }
                    }



            }break;
            case 2:
                std::cout << "You entered 2: " << newArray[1].firstName << " " << newArray[1].lastName << std::endl;
                std::cout
                    << "Enter 'A' in the console to see all this persons data or 'B' to enter in the numbered options from the menu above: ";
                std::cin >> entry;


                //If the user enters A/a (Upper/Lowercase entry) display all data
                if (entry == 'A' || entry == 'a') {
                    std::cout << "Here is all the data: \n";
                    std::cout << "First Name: " << newArray[1].firstName << std::endl;
                    std::cout << "Last Name: " << newArray[1].lastName << std::endl;
                    std::cout << "Street Address: " << newArray[1].address << std::endl;
                    std::cout << "Marital Status: " << newArray[1].maritalStatus << std::endl;
                    std::cout << "License Number: " << newArray[1].licenseNumber << std::endl;
                    std::cout << "Age: " << newArray[1].age << std::endl;
                    std::cout << "Number of children: " << newArray[1].numChildren << std::endl;
                    std::cout << "Number of vehicles: " << newArray[1].numCars << std::endl;
                    std::cout << "Number of accidents in the last 5 years: " << newArray[1].numAccidentsFive << std::endl;
                    std::cout << "Number of accidents in the last 10 years: " << newArray[1].numAccidentsTen << std::endl;
                    //Using condensed if/else statement ?
                    std::cout << (newArray[1].needVisionCorrect == 1 ? "Needs vision correction.\n"
                                                                 : "Does not need vision correction\n");

                //else get particular data
                }else {

                    //Call the menu
                    displayMenu();

                    //get the data the user wishes to retrieve (retrieve as a string of numbers and terminates when enter is pressed)
                    int decision = 1;
                    int number;
                    while(decision != 2){
                        std::cout << "Enter the number of corresponding data you wish to retrieve: \n";
                        std::cin >> number;
                        //output based off the entry the user requested
                        if(number == 1){
                            std::cout << "First name: " << newArray[1].firstName;
                        }
                        else if(number == 2){
                            std::cout<< "Last name: " << newArray[1].lastName;
                        }
                        else if(number == 3){
                            std::cout<< "Address: " << newArray[1].address;
                        }
                        else if(number == 4){
                            std::cout<< "Marital status: " << newArray[1].maritalStatus;
                        }
                        else if(number == 5){
                            std::cout<< "license number: " << newArray[1].licenseNumber;
                        }
                        else if(number == 6){
                            std::cout<< "Age: " << newArray[1].age;
                        }
                        else if(number == 7){
                            std::cout<< "Number of children: " << newArray[1].numChildren;
                        }
                        else if(number == 8){
                            std::cout<< "Number of cars: " << newArray[1].numCars;
                        }
                        else if(number == 9){
                            std::cout<< "Number of accidents in last 5 years: " << newArray[1].numAccidentsFive;
                        }
                        else if(number == 10){
                            std::cout<< "Number of accidents in last 10 years: " << newArray[1].numAccidentsTen;
                        }
                        else if(number == 11){
                            std::cout << (newArray[1].needVisionCorrect == 1 ? "Needs vision correction.\n"
                                                                             : "Does not need vision correction\n");
                        }

                        std::cout << "\nContinue? \t(1 = yes, 2 = no)\n";
                        std::cin >> decision;
                        if(decision == 2){
                            std::cout << "Goodbye!";
                        }
                    }
                }break;

            case 3:
                std::cout << "You entered 3: " << newArray[2].firstName << " " << newArray[2].lastName << std::endl;
                std::cout
                    << "Enter 'A' in the console to see all this persons data or 'B' to enter in the numbered options from the menu above: ";
                std::cin >> entry;

                //If the user enters A/a (Upper/Lowercase entry) display all data
                if (entry == 'A' || entry == 'a') {
                    std::cout << "Here is all the data: \n";
                    std::cout << "First Name: " << newArray[2].firstName << std::endl;
                std::cout << "Last Name: " << newArray[2].lastName << std::endl;
                std::cout << "Street Address: " << newArray[2].address << std::endl;
                std::cout << "Marital Status: " << newArray[2].maritalStatus << std::endl;
                std::cout << "License Number: " << newArray[2].licenseNumber << std::endl;
                std::cout << "Age: " << newArray[2].age << std::endl;
                std::cout << "Number of children: " << newArray[2].numChildren << std::endl;
                std::cout << "Number of vehicles: " << newArray[2].numCars << std::endl;
                std::cout << "Number of accidents in the last 5 years: " << newArray[2].numAccidentsFive << std::endl;
                std::cout << "Number of accidents in the last 10 years: " << newArray[2].numAccidentsTen << std::endl;
                //Using condensed if/else statement ?s
                std::cout << (newArray[2].needVisionCorrect == 1 ? "Needs vision correction.\n"
                                                                 : "Does not need vision correction\n");

                //else, get particular data from the user
            }else {

                    //Call the menu
                    displayMenu();

                    //get the data the user wishes to retrieve (retrieve as a string of numbers and terminates when enter is pressed)
                    int decision = 1;
                    int number;
                    while(decision != 2){
                        std::cout << "Enter the number of corresponding data you wish to retrieve: \n";
                        std::cin >> number;
                        //output based off the entry the user requested
                        if(number == 1){
                            std::cout<< "First name: " << newArray[2].firstName;
                        }
                        else if(number == 2){
                            std::cout<< "Last name: " << newArray[2].lastName;
                        }
                        else if(number == 3){
                            std::cout<< "Address: " << newArray[2].address;
                        }
                        else if(number == 4){
                            std::cout<< "Marital status: " << newArray[2].maritalStatus;
                        }
                        else if(number == 5){
                            std::cout<< "License number: " << newArray[2].licenseNumber;
                        }
                        else if(number == 6){
                            std::cout<< "Age: " << newArray[2].age;
                        }
                        else if(number == 7){
                            std::cout<< "Number of children: " << newArray[2].numChildren;
                        }
                        else if(number == 8){
                            std::cout<< "Number of cars: " << newArray[2].numCars;
                        }
                        else if(number == 9){
                            std::cout<< "Number of accidents in last 5 years: " << newArray[2].numAccidentsFive;
                        }
                        else if(number == 10){
                            std::cout<< "Number of accidents in last 10 years: " << newArray[2].numAccidentsTen;
                        }
                        else if(number == 11){
                            std::cout << (newArray[2].needVisionCorrect == 1 ? "Needs vision correction.\n"
                                                                             : "Does not need vision correction\n");
                        }

                        std::cout << "\nContinue? \t(1 = yes, 2 = no)\n";
                        std::cin >> decision;
                        if(decision == 2){
                            std::cout << "Goodbye!";
                        }
                    }
            }
            break;
        }

    //Dealocating our dynamic array
    delete [] newArray;
    newArray= nullptr;
}


/*
 *
 *
 * The function below is a great way of implimenting dynamic allocation, structures, pointer to the struct, etc. What i
 *  am doing is first declaring this as a fucntion that will return a pointer of type struct and takes in the address
 *  of a size variable declared in main. I will populate size with 3 from within my allocate function (more practice
 *  on using references) and then I am declaring a pointer of type struct to point to memory on the heap, dynamically
 *  which is demonstrated by the new keyword. Right after that, like we do new int, or doubles, etc. this is a new
 *  struct! and its an array of struct so we put the [] with size. From there i am simply looping over all the indices
 *  that must be allocated and accessing the struct member with . operator. Using getline for large string input and
 *  just basic cin for integer inputs. At the very end i do a cin.clear() just to clear the buffer for the next round
 *  of looping and appending items to that list. Lastly, i return the dynamic array I made.
 */

//Deploying a function of type struct to return an array of structs
InsuranceAllocate *requestAllocation(int &size){

    //Declaring an array of structs we will pass to the requestAllocation call
    size = 3;

    //Allocating a dynamic arrray of struct of size 3
    InsuranceAllocate *insuranceList = new InsuranceAllocate[3];

    //populate the array' using pointer struct allocation syntax
    std::cout << "Please answer accordingly below:\n";
    int count = 0;
    while(count < 3){

        //Getting first name
        std::cout << "Enter your first name: ";
        std::getline(std::cin,insuranceList[count].firstName);


        //Getting last name
        std::cout << "Enter your last name: ";
        std::getline(std::cin,insuranceList[count].lastName);

        //Get address
        std::cout << "Please enter home address: ";
        std::getline(std::cin,insuranceList[count].address);

        //Get marital status
        std::cout << "Please enter your marital status [single/married]: ";
        std::getline(std::cin,insuranceList[count].maritalStatus);

        //Get users age:
        std::cout << "Please enter your age: ";
        std::cin>>insuranceList[count].age;

        //Get number of children
        std::cout << "How many children do you have? ";
        std::cin >> insuranceList[count].numChildren;

        //Get number of cars:
        std::cout << "How many cars do you own? ";
        std::cin >> insuranceList[count].numCars;

        //Get number of accidents last 5 years
        std::cout << "How many accidents have you had in the last 5 years? Enter a number: ";
        std::cin >> insuranceList[count].numAccidentsFive;

        //Get number of accidents last 10 years
        std::cout << "How many accidents have you had in the last 5 years? Enter a number: ";
        std::cin >> insuranceList[count].numAccidentsTen;

        //Getting yes/no input from user (REMEMBER THIS IS BOOL SO WE MUST HARD CODE SOME IF STATEMENT TO RETURN TRUE OR
        // FALSE ---- IF(INSURANCE->NEEDVISIONCORRECT == 1(true): COUT << "VISION REPAIR REQUIRED" ELSE, 0(false)
        std::cout << "Will you require vision repairment now or in the future? Enter 1 for yes of 0 for no!:";
        std::cin >> insuranceList[count].needVisionCorrect;
        std::cin.ignore();
        //Getting license number
        std::cout << "Lastly, enter your license number: ";
        std::getline(std::cin,insuranceList[count].licenseNumber);

        std::cin.clear();

        std::cout << "\n";

        count++;
    }

    return insuranceList;
}

//Declaring our menu function: We want to request the user all the entries they want per the struct member options
void displayMenu() {

    //Passing our menu options into an array to make output clean, and this function short and to the point
    const std::string displayArray[11] =
            {"1)Get First Name","2)Get Last Name","3)Get Address","4)Get Marital Status",
             "5)Get License Number","6)Get Age","7)Get Number of Children","8)Get Number of Cars"
             ,"9)Get Number of Accidents in The Last 5 Years","10)Get Number of Accidents in The Last 10 Years",
             "11)Get Vision Medical Response"};

    //Output the menu
    std::cout << "Insurance Database Retrieval\n";
    for(int i = 0; i < 11; i++){
        std::cout << displayArray[i] << std::endl;
    }
}

