#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T& con, int val)
{
    typename T::iterator iter = std::find(con.begin(), con.end(), val);
    if (iter == con.end())
        throw std::exception();
    return (iter);
}

#endif