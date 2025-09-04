/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file    int_memory_cell.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   int_memory_cell specification.
 * @version 1.0.0
 * @date    09/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#ifndef LECTURES_INT_MEMORY_CELL_H
#define LECTURES_INT_MEMORY_CELL_H

#include "int_cell.h"

namespace csc232
{

    class int_memory_cell : public int_cell
    {
    public:
        int_memory_cell( );
        auto write( int value ) -> void override;
        [[nodiscard]] auto read( ) const -> int override;

    private:
        int m_data;
    };

} // csc232

#endif // LECTURES_INT_MEMORY_CELL_H
