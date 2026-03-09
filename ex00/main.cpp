#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <array>

int main(void)
{
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    try
    {
        std::cout << easyfind(vec, 40) << std::endl;
        std::cout << easyfind(vec, 50) << std::endl;
        std::cout << easyfind(vec, 60) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found" << std::endl;
    }
    std::cout << "----------------------------------------------" <<std::endl;
    std::array<int, 6> arr = {10, 20, 30, 40, 50, 60};
    try
    {
        std::cout << easyfind(arr, 40) << std::endl;
        std::cout << easyfind(arr, 60) << std::endl;
        std::cout << easyfind(arr, 100) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found" << std::endl;
    }
}