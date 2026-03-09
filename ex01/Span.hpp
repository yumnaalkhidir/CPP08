#ifndef SPAN_HPP
#define SPAN_HPP

#include <array>
#include <vector>
#include <exception>
#include <cstdlib>
#include <iostream>
#include <algorithm>
class Span
{
    private:
        // std::array<int, unsigned int N> numbers;
        std::vector<int> numbers;
        unsigned int con_size;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& copy);
        Span& operator=(const Span& other);
        ~Span();
        void addNumber(int add);
        int shortestSpan() const;
        int longestSpan() const;
        void printspan() const;
};

#endif