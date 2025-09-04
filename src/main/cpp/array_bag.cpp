/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file    array_bag.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Array-bag implementation source file.
 * @version 1.0.0
 * @date    09/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include "array_bag.h"
#include <string>

template < typename item_type >
auto csc232::array_bag< item_type >::get_index_of( const item_type &target ) const -> int
{
    auto found{ false };
    auto result{ -1 };
    auto search_index{ 0 };
    // if bag is empty, item_count_ is zero, so loop is skipped
    while ( !found && ( search_index < item_count_ ) )
    {
        found = items_[ search_index ] == target;
        if ( found )
        {
            result = search_index;
        }
        else
        {
            ++search_index;
        }
    }
    return result;
}

template < typename item_type >
csc232::array_bag< item_type >::array_bag( ) : item_count_{ 0 }, max_items_{ DEFAULT_CAPACITY }
{
}

template < typename item_type >
csc232::array_bag< item_type >::~array_bag( ) = default;

template < typename item_type >
auto csc232::array_bag< item_type >::get_current_size( ) const -> int
{
    return item_count_;
}

template < typename item_type >
auto csc232::array_bag< item_type >::is_empty( ) const -> bool
{
    return item_count_ == 0;
}

template < typename item_type >
auto csc232::array_bag< item_type >::add( const item_type &some_item ) -> bool
{
    const auto has_room_to_add{ item_count_ < max_items_ };
    if ( has_room_to_add )
    {
        items_[ item_count_ ] = some_item;
        item_count_++;
    }
    return has_room_to_add;
}

template < typename item_type >
auto csc232::array_bag< item_type >::remove( const item_type &some_item ) -> bool
{
    auto located_index{ get_index_of( some_item ) };
    auto can_remove_item{ !is_empty( ) && ( located_index > -1 ) };
    if ( can_remove_item )
    {
        item_count_--;
        items_[ located_index ] = items_[ item_count_ ];
    }
    return can_remove_item; // stub
}

template < typename item_type >
auto csc232::array_bag< item_type >::clear( ) -> void
{
    item_count_ = 0;
}

template < typename item_type >
auto csc232::array_bag< item_type >::get_frequency_of( const item_type &target ) const -> int
{
    auto frequency{ 0 };
    for ( auto current_item : items_ )
    {
        if ( current_item == target )
        {
            frequency++;
        }
    }
    return frequency;
}

template < typename item_type >
auto csc232::array_bag< item_type >::contains( const item_type &target ) const -> bool
{
    return get_frequency_of( target ) > 0;
}

template < typename item_type >
auto csc232::array_bag< item_type >::to_vector( ) const -> std::vector< item_type >
{
    std::vector< item_type > result;
    for ( auto current_entry : items_ )
    {
        result.push_back( current_entry );
    }
    return result;
}

// Explicit template instantiation for common types
template class csc232::array_bag< char >;
template class csc232::array_bag< int >;
template class csc232::array_bag< std::string >;
