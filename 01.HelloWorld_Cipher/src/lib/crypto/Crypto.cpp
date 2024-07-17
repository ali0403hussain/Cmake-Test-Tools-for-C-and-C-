#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>
#include "Crypto.h"

/**
 * @brief Construct a new Cipher:: Cipher object
 * 
 */
Cipher::Cipher()
{
    srand(time(NULL));
}

/**
 * @brief Destroy the Cipher:: Cipher object
 * 
 */
Cipher::~Cipher()
{
    
}

/**
 * @brief Method for Generating Cipher Key
 * 
 */
void Cipher::CipherGenerateKey()
{
    Cipher_Key = alphabets;
    random_shuffle(Cipher_Key.begin(), Cipher_Key.end());
}

/**
 * @brief Cipher Encrypt User Message Method
 * 
 * @param msg 
 * @return std::string 
 */
std::string Cipher::CipherEncryptMsg(const std::string &msg)
{
    int pos {0};
    std::string  UserMsgEncrypted {NULL};

    CipherGenerateKey();

    for(size_t alter = 0; alter < msg.length(); alter++)
    {
        pos = alphabets.find(msg.at(alter));
        UserMsgEncrypted.push_back(Cipher_Key[pos]);
    }
    
    const char RandomChar = SpecialChar[rand() % SpecialChar.length()];
    const size_t RandomPos = rand() %  UserMsgEncrypted.length();
    const std::string RandomPosStr = {RandomChar + std::to_string(RandomPos) + RandomChar};

    UserMsgEncrypted.insert(RandomPos , Cipher_Key);
    const size_t PosString = UserMsgEncrypted.length() / 2 ;
    UserMsgEncrypted.insert(PosString, RandomPosStr);

    return UserMsgEncrypted;
}

/**
 * @brief Cipher Decrypt User Message Method
 * 
 * @param msg 
 * @return std::string 
 */
std::string Cipher::CipherDecryptMsg(const std::string &msg)
{
    const size_t PosCypherKeyInfo = msg.length() / 2 ;
    std::string CKeyIndex {NULL};
    char SpChar{};

    if (Numbers.find(msg.at(PosCypherKeyInfo)) != std::string::npos)
    {
        if (SpecialChar.find(msg.at(PosCypherKeyInfo + 1)) != std::string::npos)
        {
            //Looking Special Character at right
            if (SpecialChar.find(msg.at(PosCypherKeyInfo - 1)) != std::string::npos)
            {
                if(msg.at(PosCypherKeyInfo - 1) == msg.at(PosCypherKeyInfo + 1))
                {
                    CKeyIndex = msg.at(PosCypherKeyInfo);
                    SpChar = msg.at(PosCypherKeyInfo - 1);
                }
                else
                std::cout << "Character Not Matched:"<< std::endl;
            }
            else if(Numbers.find(msg.at(PosCypherKeyInfo - 1)) != std::string::npos)
            {
                if (SpecialChar.find(msg.at(PosCypherKeyInfo - 2)) != std::string::npos)
                {
                    if(msg.at(PosCypherKeyInfo - 2) == msg.at(PosCypherKeyInfo + 1))
                    {
                        CKeyIndex = msg.substr(PosCypherKeyInfo - 1, 2);
                        SpChar = msg.at(PosCypherKeyInfo - 2);
                    }
                    else
                    std::cout << "Character Not Matched:"<< std::endl;
                }
                else
                {
                    std::cout << "At left Its not Special char :"<< std::endl;
                }
            }
        }
        else
        {
            std::cout << "At right Its not Special char :"<< std::endl;
        }
    }
    else if(SpecialChar.find(msg.at(PosCypherKeyInfo)) != std::string::npos)
    {
        if((Numbers.find(msg.at(PosCypherKeyInfo - 1)) != std::string::npos) &&
           (SpecialChar.find(msg.at(PosCypherKeyInfo - 2)) != std::string::npos) &&
           (msg.at(PosCypherKeyInfo) == msg.at(PosCypherKeyInfo -2)))
        {
            CKeyIndex = msg.at(PosCypherKeyInfo - 1);
            SpChar = msg.at(PosCypherKeyInfo);
        }
        else if((Numbers.find(msg.at(PosCypherKeyInfo - 1)) != std::string::npos) &&
                (Numbers.find(msg.at(PosCypherKeyInfo - 2)) != std::string::npos) &&
                (SpecialChar.find(msg.at(PosCypherKeyInfo - 3)) != std::string::npos) &&
                (msg.at(PosCypherKeyInfo) == msg.at(PosCypherKeyInfo - 3)))
        {
            CKeyIndex = msg.substr(PosCypherKeyInfo - 2, 2);
            SpChar = msg.at(PosCypherKeyInfo);
        }
    }

    int CKeyIndexInt  = stoi(CKeyIndex);
    std::string CkeyPos = {SpChar + CKeyIndex + SpChar};
  
    std::string CypherKeyDecrypt =  msg.substr(CKeyIndexInt, 
                                               alphabets.length() + 
                                               CkeyPos.length());
    
    size_t PosErase = CypherKeyDecrypt.find(CkeyPos);
    CypherKeyDecrypt.erase(PosErase, CkeyPos.length());
    
    std::string UserMsgTemp = msg;
    UserMsgTemp.erase(CKeyIndexInt, CypherKeyDecrypt.length()+CkeyPos.length());


    std::string UserMsgDecrypt {};

    for(size_t alter = 1; alter < UserMsgTemp.length(); alter++)
    {
        int pos = CypherKeyDecrypt.find(UserMsgTemp.at(alter));
        UserMsgDecrypt += alphabets.at(pos);
    }

    return UserMsgDecrypt;
}