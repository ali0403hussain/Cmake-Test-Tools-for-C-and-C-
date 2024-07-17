#include <iostream>
#include "SecureTalk.h"

using namespace std;
/**
 * @brief Main Function
 * 
 * @return int 
 */
int main()
{
    TalkSecure User1;
    string User1SendMsg = User1.SendMsg("Hello How are You?");
    cout << "User1 Message to send: " << User1SendMsg <<endl;
    User1.WhoAreYou();
    User1SendMsg = User1.SendMsg("Hello How are You?");
    cout << "User1 Message to send: " << User1SendMsg <<endl;
    TalkSecure User2;
    string User2ReadMsg = User2.ReadMsg(User1SendMsg);
    cout << "User2 Message to Read: " << User2ReadMsg <<endl;
    return 0;
}