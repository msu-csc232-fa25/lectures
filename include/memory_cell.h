/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file memory_cell.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief Header file for memory cell implementations.
 * @version 1.0
 * @date 2024-08-21
 *
 * @copyright Copyright (c) 2024
 */

#ifndef LECTURES_MEMORY_CELL_H
#define LECTURES_MEMORY_CELL_H

#include "cell.h"

namespace csc232
{
    /**
     * @brief A memory cell that stores a value of type T.
     *
     * This class implements the cell interface and provides storage for a single value of type T.
     * It allows writing to and reading from the cell.
     *
     * @tparam T The type of value to be stored in the memory cell.
     */
    template < typename T >
    class memory_cell final : public cell< T >
    {
    public:
        /**
         * @brief Default constructor initializes the cell with a default value of type T.
         */
        memory_cell( );
        /**
         * @brief Write a value to the memory cell.
         * @param value The value to write.
         * @post The memory cell contains the value.
         */
        auto write( const T &value ) -> void override;
        /**
         * @brief Read the value from the memory cell.
         * @return The value contained in the memory cell.
         * @pre The memory cell has been written to.
         */
        [[nodiscard]] auto read( ) const -> T override;

    private:
        T value_; ///< The value stored in the memory cell.
    };
} // csc232

#endif // LECTURES_MEMORY_CELL_H
