/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file stubbed_bag.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief Implementation of the stubbed_bag class template.
 * @version 1.0
 * @date 2024-08-21
 *
 * @copyright Copyright (c) 2024
 */

#include "stubbed_bag.h"

namespace csc232
{
    template < typename item_type >
    stubbed_bag< item_type >::stubbed_bag( ) = default;

    template < typename item_type >
    stubbed_bag< item_type >::~stubbed_bag( ) = default;

    template < typename item_type >
    auto stubbed_bag< item_type >::get_current_size( ) const -> int
    {
        return 0;
    }

    template < typename item_type >
    auto stubbed_bag< item_type >::is_empty( ) const -> bool
    {
        return false;
    }

    template < typename item_type >
    auto stubbed_bag< item_type >::add( const item_type &some_item ) -> bool
    {
        return false;
    }

    template < typename item_type >
    auto stubbed_bag< item_type >::remove( const item_type &some_item ) -> bool
    {
        return false;
    }
    template < typename item_type >
    auto stubbed_bag< item_type >::clear( ) -> void
    {
    }

    template < typename item_type >
    auto stubbed_bag< item_type >::get_frequency_of( const item_type &target ) const -> int
    {
        return 0;
    }

    template < typename item_type >
    auto stubbed_bag< item_type >::contains( const item_type &target ) const -> bool
    {
        return false;
    }

    template < typename item_type >
    auto stubbed_bag< item_type >::to_vector( ) const -> std::vector< item_type >
    {
        return std::vector< item_type >( );
    }

    // Explicit template instantiation for common types
    template class stubbed_bag< char >;
    template class stubbed_bag< int >;
} // csc232
