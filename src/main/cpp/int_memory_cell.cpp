/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file    int_memory_cell.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Int-memory-cell implementation source file.
 * @version 1.0.0
 * @date    09/03/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include "int_memory_cell.h"

namespace csc232
{
    int_memory_cell::int_memory_cell( ) : m_data{ 0 }
    {
    }
    auto int_memory_cell::write( int value ) -> void
    {
        m_data = value;
    }
    auto int_memory_cell::read( ) const -> int
    {
        return m_data;
    }
} // csc232
