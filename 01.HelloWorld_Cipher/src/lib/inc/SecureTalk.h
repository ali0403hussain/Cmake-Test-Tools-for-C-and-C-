#ifndef SECURETALK_H_INCLUDED
#define SECURETALK_H_INCLUDED

#include "UserAccount.h"
#include "Crypto.h"

/**
 * @brief Class TalkSecure Inherited from two classes
 * 
 */
class TalkSecure : protected UserAccount, protected Cipher
{
    public:
        TalkSecure();
        ~TalkSecure();
        void WhoAreYou();
        std::string SendMsg(const std::string &msg);
        std::string ReadMsg(const std::string &msg);
};

#endif