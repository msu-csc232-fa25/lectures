/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file    demo.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry-point for demo target.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include "csc232.h"

auto main( ) -> int
{
    // we'll be introduced to std::string_view in homework 1
    // quick overview: string_view is a typedef for std::basic_string_view<char>
    // The class template std::basic_string_view describes an object that can refer
    // to a constant contiguous sequence of characters with the first element of the
    // sequence at position zero
    constexpr std::string_view UUID_PREFIX{ "Generated UUID: " };

    std::cout << UUID_PREFIX << csc232::generate_uuid( ) << std::endl;
    return EXIT_SUCCESS;
}
