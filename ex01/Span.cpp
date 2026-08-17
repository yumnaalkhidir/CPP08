#include "Span.hpp"
#include <climits>
#include <cstddef>
#include <exception>
#include <cstdlib>
#include <iostream>
#include <algorithm>

Span::Span()
{
    _size = 0;
}

Span::Span(unsigned int N) : _size(N)
{
    _numbers.reserve(_size);
}

Span::Span(const Span &copy)
{
    this->_size = copy._size;
    this->_numbers = copy._numbers;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->_size = other._size;
        this->_numbers = other._numbers;
    }
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int add)
{
    if (_numbers.size() >= _size)
        throw std::exception();
    _numbers.push_back(add);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    while (begin != end)
    {
        addNumber(*begin);
        ++begin;
    }
}

int Span::shortestSpan() const
{
    if (_numbers.size() < 2)
        throw std::exception();

    std::vector<int> sorted = _numbers;
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
    if (_numbers.empty() || _numbers.size() == 1)
        throw std::exception();
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    return (sorted.back() - sorted.front());
}

