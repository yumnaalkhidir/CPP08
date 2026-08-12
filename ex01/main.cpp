#include "Span.hpp"
#include <iostream>
#include <vector>
#include <exception>

int main(void)
{
    std::cout << "---- Default Constructor ----" << std::endl;
    Span empty;
    try
    {
        empty.addNumber(10);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: cannot add to default Span" << std::endl;
    }

    std::cout << "\n---- Parameterized Constructor ----" << std::endl;
    Span sp(5);
    sp.addNumber(10);
    sp.addNumber(20);
    sp.addNumber(30);

    std::cout << "\n---- Add Beyond Capacity ----" << std::endl;
    try
    {
        sp.addNumber(40);
        sp.addNumber(50);
        sp.addNumber(60);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: Span is full" << std::endl;
    }

    std::cout << "\n---- Empty Span ----" << std::endl;
    try
    {
        Span test(5);
        test.shortestSpan();
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: no shortest span" << std::endl;
    }

    try
    {
        Span test(5);
        test.longestSpan();
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: no longest span" << std::endl;
    }

    std::cout << "\n---- One Number ----" << std::endl;
    Span one(5);
    one.addNumber(42);

    try
    {
        one.shortestSpan();
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: only one number" << std::endl;
    }

    try
    {
        one.longestSpan();
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: only one number" << std::endl;
    }

    std::cout << "\n---- Full Test ----" << std::endl;
    Span full(5);
    full.addNumber(10);
    full.addNumber(-5);
    full.addNumber(0);
    full.addNumber(-100);
    full.addNumber(50);

    std::cout << "Shortest: " << full.shortestSpan() << std::endl;
    std::cout << "Longest: " << full.longestSpan() << std::endl;


    std::cout << "\n---- Copy Constructor ----" << std::endl;
    Span original(4);
    original.addNumber(10);
    original.addNumber(20);

    Span copy(original);

    original.addNumber(100);

    std::cout << "Original: ";
    std::cout << "Longest: " << original.longestSpan() << std::endl;
    
    std::cout << "Copy: ";
    std::cout << "Longest: " << copy.longestSpan() << std::endl;
    
    std::cout << "\n---- Copy Assignment Operator ----" << std::endl;
    Span assigned(10);
    assigned.addNumber(999);
    
    assigned = original;
    assigned.addNumber(1000);
    
    std::cout << "Original: ";
    std::cout << "Longest: " << original.longestSpan() << std::endl;
    
    
    std::cout << "Assigned: ";
    std::cout << "Longest: " << assigned.longestSpan() << std::endl;

    std::cout << "\n---- Iterator Range ----" << std::endl;

    std::vector<int> numbers;
    numbers.push_back(6);
    numbers.push_back(3);
    numbers.push_back(17);
    numbers.push_back(9);
    numbers.push_back(11);

    Span range(5);
    range.addNumber(numbers.begin(), numbers.end());

    std::cout << "Shortest: " << range.shortestSpan() << std::endl;
    std::cout << "Longest: " << range.longestSpan() << std::endl;

    std::cout << "\n---- Iterator Range Beyond Capacity ----" << std::endl;

    Span small(3);

    try
    {
        small.addNumber(numbers.begin(), numbers.end());
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: range is too large" << std::endl;
    }

    std::cout << "\n---- 10,000 Numbers ----" << std::endl;

    Span big(10000);

    for (int i = 0; i < 10000; i++)
        big.addNumber(i);

    std::cout << "Shortest: " << big.shortestSpan() << std::endl;
    std::cout << "Longest: " << big.longestSpan() << std::endl;

    std::cout << "\n---- 10,000 Numbers Using Iterator Range ----" << std::endl;

    std::vector<int> bigNumbers;

    for (int i = 0; i < 10000; i++)
        bigNumbers.push_back(i);

    Span bigRange(10000);

    bigRange.addNumber(bigNumbers.begin(), bigNumbers.end());

    std::cout << "Shortest: " << bigRange.shortestSpan() << std::endl;
    std::cout << "Longest: " << bigRange.longestSpan() << std::endl;

    return 0;
}