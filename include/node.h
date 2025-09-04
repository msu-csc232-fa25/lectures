/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file    node.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   node specification.
 * @version 1.0.0
 * @date    09/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#ifndef LECTURES_NODE_H
#define LECTURES_NODE_H

namespace csc232
{

    template < typename data >
    class node
    {
    public:
        explicit node( const data &value = data{ }, node *next = nullptr );
        auto get_value( ) const -> data;
        void set_value( const data &value );
        auto get_next( ) const -> node *;
        void set_next( node *next );

    private:
        data value_;
        node *next_;
    };

} // csc232

#endif // LECTURES_NODE_H
