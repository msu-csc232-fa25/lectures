/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file cell.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief Abstract base class representing a generic cell that can store a value of type T.
 * @version 1.0
 * @date 2024-08-21
 *
 * @copyright Copyright (c) 2024
 */

#ifndef LECTURES_CELL_H
#define LECTURES_CELL_H

namespace csc232
{
    template < typename T >
    class cell
    {
    public:
        /**
         * @brief Write a value to the cell.
         * @param value The value to write.
         * @post The cell contains the value.
         */
        virtual auto write( const T &value ) -> void = 0;

        /**
         * @brief Read the value from the cell.
         * @return The value contained in the cell.
         * @pre The cell has been written to.
         */
        [[nodiscard]] virtual auto read( ) const -> T = 0;

        /**
         * @brief Virtual destructor for proper cleanup of derived classes.
         */
        virtual ~cell( ) = default;
    };
} // csc232

#endif // LECTURES_CELL_H
