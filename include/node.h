//
// Created by jrd2112 on 9/3/2025.
//

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
