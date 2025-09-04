//
// Created by jrd2112 on 9/3/2025.
//

#include "node.h"
#include <string>

namespace csc232
{
    template < typename data >
    node< data >::node( const data &value, node *next ) : value_{ value }, next_{ next }
    {
    }

    template < typename data >
    auto node< data >::get_value( ) const -> data
    {
        return value_;
    }

    template < typename data >
    void node< data >::set_value( const data &value )
    {
        value_ = value;
    }

    template < typename data >
    auto node< data >::get_next( ) const -> node *
    {
        return next_;
    }

    template < typename data >
    void node< data >::set_next( node *next )
    {
        next_ = next;
    }
} // csc232

template class csc232::node< char >;
template class csc232::node< int >;
template class csc232::node< std::string >;
