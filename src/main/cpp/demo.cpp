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

#include "cell.h"
#include "csc232.h"
#include "int_memory_cell.h"
#include "memory_cell.h"

auto main( ) -> int
{
    // we'll be introduced to std::string_view in homework 1
    // quick overview: string_view is a typedef for std::basic_string_view<char>
    // The class template std::basic_string_view describes an object that can refer
    // to a constant contiguous sequence of characters with the first element of the
    // sequence at position zero
    constexpr std::string_view UUID_PREFIX{ "Generated UUID: " };
    static const int MAGIC_NUMBER{ 42 };
    std::cout << UUID_PREFIX << csc232::generate_uuid( ) << std::endl;

    csc232::int_memory_cell cell;

    std::cout << "Initial int value: " << cell.read( ) << std::endl;
    std::cout << "Writing the value 42 into the cell...\n";
    constexpr int the_best_num{ MAGIC_NUMBER };
    cell.write( the_best_num );
    std::cout << "New value: " << cell.read( ) << std::endl;

    std::cout << "Dynamically creating memory cell of int..." << std::endl;
    csc232::cell< int > *int_cell_ptr = new csc232::memory_cell< int >( );
    std::cout << "Initial memory cell of int: " << int_cell_ptr->read( ) << std::endl;
    std::cout << "Writing memory cell of int..." << std::endl;
    int_cell_ptr->write( MAGIC_NUMBER );
    std::cout << "New value: " << int_cell_ptr->read( ) << std::endl;
    std::cout << "Dynamically deleting memory cell of int:" << std::endl;
    delete int_cell_ptr;

    std::cout << "Dynamically creating memory cell of double..." << std::endl;
    csc232::cell< double > *double_cell_ptr = new csc232::memory_cell< double >( );
    std::cout << "Initial memory cell of double: " << double_cell_ptr->read( ) << std::endl;
    std::cout << "Writing memory cell of double..." << std::endl;
    double_cell_ptr->write( MAGIC_NUMBER );
    std::cout << "New value: " << double_cell_ptr->read( ) << std::endl;
    std::cout << "Dynamically deleting memory cell of double:" << std::endl;
    delete double_cell_ptr;

    std::cout << "Dynamically creating memory cell of string..." << std::endl;
    csc232::cell< std::string > *string_cell_ptr = new csc232::memory_cell< std::string >( );
    std::cout << "Initial memory cell of string: " << string_cell_ptr->read( ) << std::endl;
    std::cout << "Writing memory cell of string..." << std::endl;
    string_cell_ptr->write( csc232::generate_uuid( ) );
    std::cout << "New value: " << string_cell_ptr->read( ) << std::endl;
    std::cout << "Dynamically deleting memory cell of string:" << std::endl;
    delete string_cell_ptr;

    return EXIT_SUCCESS;
}
