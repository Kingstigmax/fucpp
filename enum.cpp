#include <iostream>



enum Action 
{
    List = 1,
    Add,
    Update
};

int main() 
{

    


    std::cout << 
    "1: List invoices" << std::endl << 
    "2: Add invoices" << std::endl << 
    "3: Update invoice" << std::endl << 
    "Select: ";

    int input {};
    std::cin >> input;

    if(input == Action::List)
    {
        std::cout << "List invoices" << std::endl;
    }

    return 0;
}