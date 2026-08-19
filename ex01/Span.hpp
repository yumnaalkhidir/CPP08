#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
    private:
        std::vector<int> _numbers;
        unsigned int _size;

    public:
        Span();
        Span(unsigned int N);
        Span(const Span &copy);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int add);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan() const;
        int longestSpan() const;
        
};

#endif