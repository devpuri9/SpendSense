#ifndef SEARCH_H
#define SEARCH_H

#include "Expense.h"

class Search
{
public:
    void searchByID(Expense expense);
    void searchByCategory(Expense expense);
    void searchByDate(Expense expense);
    void searchByAmount(Expense expense);
};

#endif
