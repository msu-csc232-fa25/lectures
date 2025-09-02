/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file stubbed_bag.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief Specification of the stubbed_bag class template.
 * @version 1.0
 * @date 2024-08-21
 *
 * @copyright Copyright (c) 2024
 */

#ifndef CSC232_STUBBED_BAG_H
#define CSC232_STUBBED_BAG_H

#include "bag.h"

/**
 * Course packaging.
 */
namespace csc232
{
    /**
     * Stubbed out bag implementation.
     * @tparam item_type the type of item stored in this stubbed out
     * implementation. Not really utilized in this implementation.
     */
    template < typename item_type >
    class stubbed_bag final : public bag< item_type >
    {
    public:
        /**
         * Default constructor.
         */
        stubbed_bag( );

        /**
         * @copydoc bag<item_type>::~bag
         */
        ~stubbed_bag( ) override;

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
    };

} // csc232

#endif // CSC232_STUBBED_BAG_H
