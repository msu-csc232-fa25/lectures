//
// Created by jrd2112 on 9/1/2025.
//

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
