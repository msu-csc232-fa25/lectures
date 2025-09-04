/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file    node.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Node implementation source file.
 * @version 1.0.0
 * @date    09/03/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

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
