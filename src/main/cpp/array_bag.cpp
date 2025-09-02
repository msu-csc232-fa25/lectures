//
// Created by jrd2112 on 9/2/2025.
//

#include "array_bag.h"
#include <string>

template < typename item_type >
int csc232::array_bag< item_type >::get_index_of( const item_type &target ) const
{
    return 0;
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
    return false; // stub
}

template < typename item_type >
auto csc232::array_bag< item_type >::clear( ) -> void
{
    // stub
}

template < typename item_type >
auto csc232::array_bag< item_type >::get_frequency_of( const item_type &target ) const -> int
{
    return 0;
}

template < typename item_type >
auto csc232::array_bag< item_type >::contains( const item_type &target ) const -> bool
{
    return false;
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

template class csc232::array_bag< char >;
template class csc232::array_bag< int >;
template class csc232::array_bag< std::string >;
