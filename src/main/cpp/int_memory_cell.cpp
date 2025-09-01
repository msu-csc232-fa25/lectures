//
// Created by jrd2112 on 8/21/2025.
//

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
