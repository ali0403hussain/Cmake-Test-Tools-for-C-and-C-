#include <iostream>
#include <string>
#include "SecureTalk.h"

/**
 * @brief Construct a new Talk Secure:: Talk Secure object
 * 
 */
TalkSecure::TalkSecure()
{

}
/**
 * @brief Destroy the Talk Secure:: Talk Secure object
 * 
 */
TalkSecure::~TalkSecure()
{

}
/**
 * @brief WhoAreYou Method for setting up User Data
 * 
 */
void TalkSecure::WhoAreYou()
{
    if(!ValidateAccount())
    {
        SetData();
    }
    else
    {
        PrintData();
    }
}
/**
 * @brief Method to Send Message
 * 
 * @param msg 
 * @return std::string 
 */
std::string TalkSecure::SendMsg(const std::string &msg)
{
    if(ValidateAccount())
    {
        return CipherEncryptMsg(*name + 
                                "$$$" + 
                                *nationality + 
                                "$$$" + 
                                *address + 
                                "$$$" + 
                                std::to_string(*age) + 
                                "$$$" + 
                                msg );
    }
    else
    {
        std::cout << "I dont Know Who are you, First Tell me about Yourself" <<std::endl;
        return "This is System Assert:You are Not Recognized";
    }
}

/**
 * @brief Method to Read Message
 * 
 * @param msg 
 * @return std::string 
 */
std::string TalkSecure::ReadMsg(const std::string &msg)
{
    return CipherDecryptMsg(msg);
}