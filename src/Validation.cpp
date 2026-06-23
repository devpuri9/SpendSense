#include "../include/Validation.h"

bool Validation::checkAmount(double amount)
{
    if(amount > 0)
    {
        return true;
    }

    return false;
}

bool Validation::checkCategory(std::string category)
{
    if(category.empty())
    {
        return false;
    }

    return true;
}