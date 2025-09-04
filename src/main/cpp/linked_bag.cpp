//
// Created by jrd2112 on 9/3/2025.
//

#include "linked_bag.h"
#include <string>

namespace csc232
{
    // Defining core members
    // Default constructor
    template < typename item_type >
    linked_bag< item_type >::linked_bag( ) : head_ptr_{ nullptr }, item_count_{ 0 }
    {
    }

    template < typename item_type >
    auto linked_bag< item_type >::add( const item_type &some_item ) -> bool
    {
        // Add node to beginning of the chain: new node references rest of chain
        auto item_node_ptr = new node< item_type >( );
        item_node_ptr->set_value( some_item );
        item_node_ptr->set_next( head_ptr_ ); // new node points to chain
        head_ptr_ = item_node_ptr;            // new node is now first node
        item_count_++;

        return true;
    }

    template < typename item_type >
    auto linked_bag< item_type >::to_vector( ) const -> std::vector< item_type >
    {
        std::vector< item_type > bag_contents;
        node< item_type > *current_node = head_ptr_;
        int counter = 0;
        while ( current_node != nullptr && counter < item_count_ )
        {
            bag_contents.push_back( current_node->get_value( ) );
            current_node = current_node->get_next( );
            counter++;
        }
        return bag_contents;
    }

    template < typename item_type >
    auto linked_bag< item_type >::get_current_size( ) const -> int
    {
        return item_count_;
    }
    template < typename item_type >
    auto linked_bag< item_type >::is_empty( ) const -> bool
    {
        return item_count_ == 0;
    }

    // More members...
    template < typename item_type >
    auto linked_bag< item_type >::get_frequency_of( const item_type &target ) const -> int
    {
        int frequency = 0;
        int counter = 0;
        node< item_type > *current_ptr = head_ptr_;
        while ( current_ptr != nullptr && counter < item_count_ )
        {
            if ( target == current_ptr->get_value( ) )
            {
                frequency++;
            }
            counter++;
            current_ptr = current_ptr->get_next( );
        }
        return frequency;
    }

    // private helper method
    template < typename item_type >
    auto linked_bag< item_type >::get_pointer_to( const item_type &item ) const -> node< item_type > *
    {
        auto found = false;
        node< item_type > *current_ptr = head_ptr_;
        while ( !found && current_ptr != nullptr )
        {
            found = item == current_ptr->get_value( );
            if ( !found )
            {
                current_ptr = current_ptr->get_next( );
            }
        }
        return current_ptr;
    }

    template < typename item_type >
    auto linked_bag< item_type >::contains( const item_type &target ) const -> bool
    {
        return get_pointer_to( target ) != nullptr;
    }

    template < typename item_type >
    auto linked_bag< item_type >::remove( const item_type &some_item ) -> bool
    {
        node< item_type > *entry_node_ptr = get_pointer_to( some_item );
        auto can_remove_item = !is_empty( ) && entry_node_ptr != nullptr;
        if ( can_remove_item )
        {
            // copy data from first node to located node
            entry_node_ptr->set_value( head_ptr_->get_value( ) );
            // delete first node
            auto node_to_delete_ptr = head_ptr_;
            head_ptr_ = head_ptr_->get_next( ); // point to second node or become null
            // return node to system
            node_to_delete_ptr->set_next( nullptr );
            delete node_to_delete_ptr;
            node_to_delete_ptr = nullptr;
            item_count_--;
        }
        return true;
    }

    template < typename item_type >
    auto linked_bag< item_type >::clear( ) -> void
    {
        auto node_to_delete_ptr = head_ptr_;
        while ( node_to_delete_ptr != nullptr )
        {
            head_ptr_ = head_ptr_->get_next( );
            // return node to system
            node_to_delete_ptr->set_next( nullptr );
            delete node_to_delete_ptr;

            // move to next node
            node_to_delete_ptr = head_ptr_;
        } // end while
        // head_ptr is nullptr; node_to_delete_ptr is nullptr
        item_count_ = 0;
    } // end clear

    template < typename item_type >
    linked_bag< item_type >::~linked_bag( )
    {
        clear( );
    }

    template < typename item_type >
    linked_bag< item_type >::linked_bag( const linked_bag &src ) : head_ptr_( nullptr ), item_count_( 0 )
    {
        item_count_ = src.item_count_;
        auto original_chain_ptr = src.head_ptr_;
        // nodes in original chain
        if ( original_chain_ptr == nullptr )
        {
            head_ptr_ = nullptr; // original bag is empty
        }
        else
        {
            // copy first node
            head_ptr_ = new node< item_type >( );
            head_ptr_->set_value( original_chain_ptr->get_value( ) );

            // copy remaining nodes
            auto end_chain_ptr = head_ptr_;                       // points to last node in new chain
            original_chain_ptr = original_chain_ptr->get_next( ); // advance original_chain_ptr
            while ( original_chain_ptr != nullptr )
            {
                // get next item from original chain
                auto next_item = original_chain_ptr->get_value( );
                // create a node containing next item
                auto item_node_ptr = new node< item_type >( next_item );

                // link new node to end of chain
                end_chain_ptr->set_next( item_node_ptr );

                // advance pointer to new last node
                end_chain_ptr = end_chain_ptr->get_next( );

                // advance original chain pointer
                original_chain_ptr = original_chain_ptr->get_next( );
            } // end while
            end_chain_ptr->set_next( nullptr ); // flag end of chain
        } // end if/else
    } // end copy constructor
} // csc232

// Explicit template instantiation for common types
template class csc232::linked_bag< char >;
template class csc232::linked_bag< int >;
template class csc232::linked_bag< std::string >;
