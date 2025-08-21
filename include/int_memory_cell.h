//
// Created by jrd2112 on 8/21/2025.
//

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
