#include <iostream>

using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n====================================";
        cout << "\n         SpendSense v0.1";
        cout << "\n====================================";
        cout << "\n1. User Management";
        cout << "\n2. Expense Management";
        cout << "\n3. Category Management";
        cout << "\n4. Budget Management";
        cout << "\n5. Reports";
        cout << "\n6. Analytics";
        cout << "\n7. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nUser Module Coming Soon...\n";
                break;

            case 2:
                cout << "\nExpense Module Coming Soon...\n";
                break;

            case 3:
                cout << "\nCategory Module Coming Soon...\n";
                break;

            case 4:
                cout << "\nBudget Module Coming Soon...\n";
                break;

            case 5:
                cout << "\nReports Module Coming Soon...\n";
                break;

            case 6:
                cout << "\nAnalytics Module Coming Soon...\n";
                break;

            case 7:
                cout << "\nThank you for using SpendSense!\n";
                break;

            default:
                cout << "\nInvalid Choice! Please try again.\n";
        }

    } while(choice != 7);

    return 0;
}
