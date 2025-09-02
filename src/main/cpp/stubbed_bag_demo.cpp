/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file    stubbed_bag_demo.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry-point for demo target.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include "bag.h"
#include "stubbed_bag.h"
#include <iostream>

auto main( ) -> int
{
    const csc232::bag< int > *int_cell_ptr{ new csc232::stubbed_bag< int >( ) };
    const csc232::bag< char > *char_cell_ptr{ new csc232::stubbed_bag< char >( ) };

    std::cout << "int_cell_ptr->is_empty( ) = " << std::boolalpha << int_cell_ptr->is_empty( ) << std::endl;
    std::cout << "char_cell_ptr->is_empty( ) = " << std::boolalpha << char_cell_ptr->is_empty( ) << std::endl;

    delete int_cell_ptr;
    delete char_cell_ptr;
    return EXIT_SUCCESS;
}
