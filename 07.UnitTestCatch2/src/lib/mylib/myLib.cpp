#include <cstdint>
#include "myLib.h"

/**
 * @brief Function defination for finding factorial 
 * 
 */
std::uint32_t factorial( std::uint32_t number ) 
{
    return number <= 1 ? number : factorial(number-1) * number;
}