#include "Span.hpp"
#include <algorithm>
#include <climits>
#include <cstddef>
#include <cstdlib>
#include <climits>
#include <random>
#include <vector>

Span::Span()
{
    con_size = 0;
}

Span::Span(unsigned int N) : con_size(N)
{
    numbers.reserve(con_size);
    std::cout << "Numbers size: " << numbers.size() << std::endl;

}

Span::Span(const Span& copy)
{
    this->con_size = copy.con_size;
    this->numbers = copy.numbers;
}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        this->con_size = other.con_size;
        this->numbers = other.numbers;
    }
    return (*this);
}

Span::~Span()
{

}

void Span::addNumber(int add)
{
    if (numbers.size() >= con_size)
        throw std::exception();
    else
        numbers.push_back(add);
}

int Span::shortestSpan() const
{
    if (numbers.size() < 2)
        throw std::exception();

    std::vector<int> sorted = numbers;
    std::sort(sorted.begin(), sorted.end());
    int shortest = INT_MAX;
    for (size_t i = 0; i < sorted.size() - 1; i++)
    {
        int diff = sorted[i + 1] - sorted[i];
        if (diff < shortest)
            shortest = diff;
    }

    return (shortest);
}

int Span::longestSpan() const
{
    if (numbers.empty() || numbers.size() == 1)
        throw std::exception();
    std::vector<int> sorted = numbers;
    std::sort(sorted.begin(), sorted.end());
    return (sorted.back() - sorted.front());
}

void Span::printspan() const
{
    std::cout << "Numbers size: " << numbers.size() << std::endl;
    for (auto it = numbers.begin(); it != numbers.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout <<std::endl;
}
