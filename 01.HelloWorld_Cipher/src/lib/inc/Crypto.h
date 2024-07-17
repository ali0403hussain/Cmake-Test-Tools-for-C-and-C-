#ifndef CRYPTO_H_INCLUDED
#define CRYPTO_H_INCLUDED

class Cipher{
    private:
        std::string Cipher_Key {NULL};
        std::string UpperCase   = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
                                   'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        std::string LowerCase   = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
                                   'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        std::string Numbers     = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        std::string SpecialChar = {'~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '+',
                                   '=', '-', '?', ';', ':', '/', '|', '.', '>', '<'};
        std::string alphabets   = {UpperCase + LowerCase + Numbers + ' ' + SpecialChar};
        
        void CipherGenerateKey();

    protected:
        Cipher();
        ~Cipher();
        std::string CipherEncryptMsg(const std::string &msg);
        std::string CipherDecryptMsg(const std::string &msg);
};

#endif