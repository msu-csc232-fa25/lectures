/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file    linked_bag.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   linked_bag specification.
 * @version 1.0.0
 * @date    09/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#ifndef LECTURES_LINKED_BAG_H
#define LECTURES_LINKED_BAG_H

#include "bag.h"
#include "node.h"

namespace csc232
{
    /**
     * A linked-based implementation of the bag interface.
     * @tparam item_type the type of item contained in this bag.
     */
    template < typename item_type >
    class linked_bag final : public bag< item_type >
    {
    public:
        /**
         * Default constructor.
         */
        linked_bag( );
        /**
         * Copy constructor that makes a deep copy of another linked_bag.
         * @param src the source bag used to construct this bag.
         */
        linked_bag( const linked_bag &src );

        /**
         * Virtual destructor.
         */
        ~linked_bag( ) override;

        /**
         * @copydoc bag<item_type>::get_current_size
         */
        [[nodiscard]] auto get_current_size( ) const -> int override;

        /**
         * @copydoc bag<item_type>::is_empty
         */
        [[nodiscard]] auto is_empty( ) const -> bool override;

        /**
         * @copydoc bag<item_type>::add
         */
        auto add( const item_type &some_item ) -> bool override;

        /**
         * @copydoc bag<item_type>::remove
         */
        auto remove( const item_type &some_item ) -> bool override;

        /**
         * @copydoc bag<item_type>::clear
         */
        auto clear( ) -> void override;

        /**
         * @copydoc bag<item_type>::get_frequency_of
         */
        auto get_frequency_of( const item_type &target ) const -> int override;

        /**
         * @copydoc bag<item_type>::contains
         */
        auto contains( const item_type &target ) const -> bool override;

        /**
         * @copydoc bag<item_type>::to_vector
         */
        [[nodiscard]] auto to_vector( ) const -> std::vector< item_type > override;

    private:
        node< item_type > *head_ptr_;
        int item_count_;
        /**
         *
         *
         * @param item the item whose node we seek
         * @return a pointer to the first node containing the item, or the nullptr if
         *         the item does not exist in this bag.
         */
        auto get_pointer_to( const item_type &item ) const -> node< item_type > *;
    };

} // csc232

#endif // LECTURES_LINKED_BAG_H
