#include "Span.hpp"

int main(void)
{
    // Span span(5);

    // try
    // {
    //     span.addNumber(6);
    //     span.addNumber(78);
    //     span.addNumber(90);
    //     span.addNumber(33333);
    //     span.addNumber(33333);
    //     // span.addNumber(33333);
    //     span.printspan();
    //     std::cout << "Short span: " << span.shortestSpan() << std::endl;
    //     std::cout << "Long span: " << span.longestSpan() << std::endl;
    // }
    // catch (std::exception& e)
    // {
    //     std::cout << "error" << std::endl;
    // }
    
    // Span single(6);
    
    // try
    // {
    //     single.addNumber(6);
    //     single.printspan();
    //     std::cout << "Long span: " << single.longestSpan() << std::endl;
    //     std::cout << "Short span: " << single.shortestSpan() << std::endl;
    // }
    // catch (std::exception& e)
    // {
    //     std::cout << "error" << std::endl;
    // }

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;

}