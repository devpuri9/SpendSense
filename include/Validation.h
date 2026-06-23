#ifndef VALIDATION_H
#define VALIDATION_H

#include <string>

class Validation
{
public:
    bool checkAmount(double amount);
    bool checkCategory(std::string category);
};

#endif