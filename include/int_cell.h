//
// Created by jrd2112 on 8/21/2025.
//

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
