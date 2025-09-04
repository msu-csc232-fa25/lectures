/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file    int_cell.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   int_cell specification.
 * @version 1.0.0
 * @date    09/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#ifndef LAB_OR_HW_INT_CELL_H
#define LAB_OR_HW_INT_CELL_H

namespace csc232
{
    /**
     * Integer cell base class.
     */
    class int_cell
    {
    public:
        /**
         * Memory cell accessor method.
         * @return the integer stored in this cell
         */
        [[nodiscard]] virtual auto read( ) const -> int = 0;

        /**
         * Cell mutator method.
         * @param value the new value to store in this cell.
         */
        virtual void write( int value ) = 0;

        /**
         * Default virtual destructor.
         */
        virtual ~int_cell( ) = default;
    };

}
#endif // LAB_OR_HW_INT_CELL_H
