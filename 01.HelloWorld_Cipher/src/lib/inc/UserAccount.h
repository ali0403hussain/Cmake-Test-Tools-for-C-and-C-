#ifndef USERACCOUNT_H_INCLUDED
#define USERACCOUNT_H_INCLUDED

/**
 * @brief Class UserAccount
 * 
 */
class UserAccount{
    /**
     * @brief Private data members of Class
     * 
     */
    protected:
        std::string *name;
        std::string *nationality;
        std::string *address;
        int *age;
    private:
        bool validateAcc {false};

    protected:
        bool ValidateAccount();
    /**
     * @brief Public Data members and methods for class
     * 
     */
    public:
        /**
         * @brief Construct a new User Account object with Dafault Parameters
         * 
         * @param nam           //name
         * @param nat           //nationality
         * @param addr          //address
         * @param ag            //age
         */
        UserAccount(std::string nam = "None", 
                    std::string nat = "None", 
                    std::string addr = "None", 
                    int ag = 0)
        {
            name = new std::string;
            *name = nam;
            nationality = new std::string;
            *nationality = nat;
            address = new std::string;
            *address = addr;
            age = new int;
            *age = ag;
        }
        /**
         * @brief Construct a new User Account object Prototype
         * 
         * @param sample 
         */
        UserAccount(const UserAccount& sample);
        /**
         * @brief Destroy the User Account object Prototype
         * 
         */
        ~UserAccount();
    protected:    
        /**
         * @brief Set the Data object
         * 
         */
        void SetData();

        /**
         * @brief Print data method Prototype
         * 
         */
        void PrintData();
        //void SendMsg(std::string ms);
};
#endif