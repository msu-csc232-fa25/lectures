/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file    array_bag.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Array-bag specification.
 * @version 1.0.0
 * @date    09/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#ifndef CSC232_ARRAY_BAG_H
#define CSC232_ARRAY_BAG_H

#include "bag.h"

namespace csc232
{

    template < typename item_type >
    class array_bag : public bag< item_type >
    {
    public:
        /**
         * Default constructor.
         */
        array_bag( );

        /**
         * @copydoc bag<item_type>::~bag
         */
        ~array_bag( ) override;

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
        static constexpr int DEFAULT_CAPACITY{ 6 };
        item_type items_[ DEFAULT_CAPACITY ];
        int item_count_;
        int max_items_;
        auto get_index_of( const item_type &target ) const -> int;
    };

}

#endif // CSC232_ARRAY_BAG_H
