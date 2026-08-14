#include <iostream>
#include "MutantStack.hpp"

int main()
{
    std::cout << "---- Basic Stack Operations ----" << std::endl;

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top: " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "Top after pop: " << mstack.top() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "Size: " << mstack.size() << std::endl;


    std::cout << "\n---- Iterator ----" << std::endl;

    for (MutantStack<int>::iterator it = mstack.begin();
         it != mstack.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;


    std::cout << "\n---- Modify Through Iterator ----" << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    *it = 1000;

    for (MutantStack<int>::iterator iter = mstack.begin();
         iter != mstack.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;


    std::cout << "\n---- Const Iterator ----" << std::endl;

    const MutantStack<int> constStack(mstack);

    for (MutantStack<int>::const_iterator cit = constStack.begin();
         cit != constStack.end(); ++cit)
    {
        std::cout << *cit << " ";
    }
    std::cout << std::endl;


    std::cout << "\n---- Copy Constructor ----" << std::endl;

    MutantStack<int> copy(mstack);
    copy.pop();

    std::cout << "Original: ";
    for (MutantStack<int>::iterator iter = mstack.begin();
         iter != mstack.end(); ++iter)
    {
        std::cout << *iter << " ";
    }

    std::cout << std::endl;

    std::cout << "Copy:     ";

    for (MutantStack<int>::iterator iter = copy.begin();
         iter != copy.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;


    std::cout << "\n---- Assignment Operator ----" << std::endl;

    MutantStack<int> assigned;

    assigned.push(999);
    
    assigned = mstack;
    assigned.push(888);

    std::cout << "Original: ";
    for (MutantStack<int>::iterator iter = mstack.begin();
         iter != mstack.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;        

    std::cout << "Assigned: ";
    for (MutantStack<int>::iterator iter = assigned.begin();
         iter != assigned.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;        


    std::cout << "\n---- Emptying a Stack ----" << std::endl;
    
    while (!mstack.empty())
            mstack.pop();
    if (mstack.empty())
        std::cout << "mstack is empty" << std::endl;

}