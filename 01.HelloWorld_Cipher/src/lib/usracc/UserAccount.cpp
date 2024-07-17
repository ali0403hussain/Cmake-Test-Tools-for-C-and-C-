#include <iostream>
#include <string>
#include "UserAccount.h"

/**
 * @brief Destroy the User Account:: User Account object
 * 
 */
UserAccount::~UserAccount()
{
    delete name;
    delete nationality;
    delete address;
    delete age;

    /*if(msg != nullptr)
    delete msg;*/

    validateAcc = false;
}
/**
 * @brief Construct a new User Account for Deep Copy:: User Account object
 * 
 * @param sample 
 */
UserAccount::UserAccount(const UserAccount& sample)
{
    name = new std::string;
    nationality = new std::string;
    address = new std::string;
    age = new int;
    *name = *(sample.name);
    *nationality = *(sample.nationality);
    *address = *(sample.address);
    *age = *(sample.age);
}
/**
 * @brief Validate User data is written on heap or Not
 * 
 * @return true 
 * @return false 
 */
bool UserAccount::ValidateAccount()
{
    if((*name != "None") && (*nationality != "None") && (*address != "None") && (age != 0))
    return true;
    else
    return false;
}
/**
 * @brief Set Data Method 
 * 
 * @param nam 
 * @param nat 
 * @param addr 
 * @param ag 
 */
void UserAccount::SetData()
{
    std::cout << "Enter your Name" << std::endl;
    std::getline(std::cin, *name);
    std::cout << "Enter your Nationality" << std::endl;
    std::getline(std::cin, *nationality);
    std::cout << "Enter your Address" << std::endl;
    std::getline(std::cin, *address);
    std::cout << "Enter your Age" << std::endl;
    std::cin >> *age;
}
/**
 * @brief Print Data if its validated outwise put assert
 * 
 */
void UserAccount::PrintData()
{
    if(ValidateAccount())
    {
        std::cout << "User Personal Data " << std::endl;
        std::cout << "Name: " << *name << std::endl;
        std::cout << "Nationality:  " << *nationality << std::endl;
        std::cout << "Address: " << *address << std::endl;
        std::cout << "Age:  " << *age << std::endl;
    }
    else
        std::cout << "User Data is not Validated " << std::endl;
}