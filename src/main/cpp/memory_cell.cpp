/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file memory_cell.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief Implementation of the memory_cell class template.
 * @version 1.0
 * @date 2024-08-21
 *
 * @copyright Copyright (c) 2024
 */

#include "memory_cell.h"
#include <string>

namespace csc232
{
    // Default constructor initializes the cell with a default value of type T.
    template < typename T >
    memory_cell< T >::memory_cell( ) : value_{ }
    {
    }

    // Write a value to the memory cell.
    template < typename T >
    auto memory_cell< T >::write( const T &value ) -> void
    {
        value_ = value;
    }

    // Read the value from the memory cell.
    template < typename T >
    auto memory_cell< T >::read( ) const -> T
    {
        return value_;
    }

    // Explicit template instantiation for common types
    template class memory_cell< int >;
    template class memory_cell< double >;
    template class memory_cell< std::string >;
} // csc232
