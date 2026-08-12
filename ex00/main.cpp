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
    std::cout << "Find 10: " << easyfind(vec, 10) << std::endl;
    std::cout << "Find 30: " << easyfind(vec, -20) << std::endl;
    std::cout << "Find 50: " << easyfind(vec, 50) << std::endl;

    std::cout << "\n---- Value Not Found ----" << std::endl;
    try
    {
        std::cout << easyfind(vec, 60) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found" << std::endl;
    }

    std::cout << "\n---- Duplicate Values ----" << std::endl;

    std::vector<int> duplicates;
    duplicates.push_back(10);
    duplicates.push_back(20);
    duplicates.push_back(10);
    duplicates.push_back(30);
    duplicates.push_back(10);

    std::cout << "Find 10: " << easyfind(duplicates, 10) << std::endl;


    std::cout << "\n---- Empty Container ----" << std::endl;

    std::vector<int> empty;
    try
    {
        std::cout << easyfind(empty, 10) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found" << std::endl;
    }


    std::cout << "\n---- List ----" << std::endl;

    std::list<int> list;

    list.push_back(100);
    list.push_back(200);
    list.push_back(300);

    std::cout << "Find 200: " << easyfind(list, 200) << std::endl;
    try
    {
        std::cout << easyfind(list, 500) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found in list" << std::endl;
    }

    std::cout << "\n---- Deque ----" << std::endl;
    std::deque<int> deq;

    deq.push_back(10);
    deq.push_back(20);
    deq.push_back(30);
    deq.push_back(40);

    std::cout <<"Find 30: " << easyfind(deq, 30) << std::endl;
    try
    {
        std::cout << easyfind(deq, 100) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found" << std::endl;
    }
    return 0;
}