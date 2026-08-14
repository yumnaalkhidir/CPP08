#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main(void)
{
    std::cout << "---- Vector ----" << std::endl;

    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(-20);
    vec.push_back(30);
    vec.push_back(-40);
    vec.push_back(50);
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << " ";
    
    std::cout << std::endl;
    
    std::cout << "Find 10: " << *easyfind(vec, 10) << std::endl;
    std::cout << "Find -20: " << *easyfind(vec, -20) << std::endl;
    std::vector<int>::iterator pos =  easyfind(vec, 50);
    vec.insert(pos, 1000);

    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << " ";
    
    std::cout << std::endl;
    
    std::cout << "\n---- Value Not Found ----" << std::endl;
    try
    {
        std::cout << "Find: 60: " << *easyfind(vec, 60) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found" << std::endl;
    }

    std::cout << "\n---- Duplicate Values ----" << std::endl;

    std::vector<int> duplicates;
    duplicates.push_back(10);
    duplicates.push_back(20);
    duplicates.push_back(30);
    duplicates.push_back(10);
    std::cout << "Before: ";
    for (std::vector<int>::iterator it = duplicates.begin(); it != duplicates.end(); it++)
        std::cout << *it << " ";
    std::cout <<std::endl;
    
    std::vector<int>::iterator dup_val = easyfind(duplicates, 10);
    duplicates.erase(dup_val);

    std::cout << "After: ";
    for (std::vector<int>::iterator it = duplicates.begin(); it != duplicates.end(); it++)
        std::cout << *it << " ";
    std::cout <<std::endl;


    std::cout << "\n---- Empty Container ----" << std::endl;

    std::vector<int> empty;
    try
    {
        std::cout << "Find 10: " << *easyfind(empty, 10) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found" << std::endl;
    }


    std::cout << "\n---- List ----" << std::endl;

    std::list<int> lst;

    lst.push_back(100);
    lst.push_back(200);
    lst.push_back(300);
    
    std::cout << "Before: ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Find 200: " << *easyfind(lst, 200) << std::endl;

    std::list<int>::iterator lst_pos = easyfind(lst, 100);
    lst.insert(lst_pos, 5);

    std::cout << "After: ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    try
    {
        std::cout <<"Find 500: " << *easyfind(lst, 500) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found in list" << std::endl;
    }

}