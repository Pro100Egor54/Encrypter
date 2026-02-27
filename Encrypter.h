#ifndef ENCRYPTER_ENCRYPTER_H
#define ENCRYPTER_ENCRYPTER_H
#include <string>

class Encrypter {
private:
    int key_;
public:
    Encrypter(int key) : key_(key) {};
    std::string encrypt(std::string st);
    std::string decrypt(std::string st);
};


#endif //ENCRYPTER_ENCRYPTER_H