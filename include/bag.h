/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2025
 *
 * @file bag.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief The bag interface specification.
 * @version 1.0
 * @date 2024-08-21
 *
 * @copyright Copyright (c) 2024
 */

#ifndef CSC232_BAG_H
#define CSC232_BAG_H

#include <vector>

/**
 * Course packaging.
 */
namespace csc232
{
    /**
     * A model of a bag of items.
     * @tparam item_type the type of item contained in this bag
     */
    template < typename item_type >
    class bag
    {
    public:
        /**
         * Default destructor.
         */
        virtual ~bag( ) = default;

        /**
         * Get the current number of items in this bag.
         * @return the current number of items in this bag.
         */
        [[nodiscard]] virtual auto get_current_size( ) const -> int = 0;

        /**
         * Determine whether this bag is empty.
         * @return true if there are no items in this bag, false otherwise.
         */
        [[nodiscard]] virtual auto is_empty( ) const -> bool = 0;

        /**
         * Add some item to this bag.
         * @param some_item the new item to be added to this bag.
         * @return true if some_item was successfully added to this bag, false otherwise.
         * @post If successful, the size of this bag has increased by 1.
         */
        virtual auto add( const item_type &some_item ) -> bool = 0;

        /**
         * Remove some item from this bag.
         * @param some_item the item we wish to remove from this bag.
         * @return true if some_item was successfully removed from this bag, false otherwise.
         * @post If successful, the size of this bag has decreased by 1. If some_item was the
         * last item, then is_empty() == true && get_current_size == 0.
         */
        virtual auto remove( const item_type &some_item ) -> bool = 0;

        /**
         * Clear the contents of this bag.
         * @post is_empty() == true && get_current_size == 0.
         */
        virtual auto clear( ) -> void = 0;

        /**
         * Count the occurrence of some target item in this bag.
         * @param target the item whose frequency we are determining.
         * @return the frequency of the target item in this bag.
         */
        virtual auto get_frequency_of( const item_type &target ) const -> int = 0;

        /**
         * Determine whether this bag contains the given target.
         * @param target an item we seek in this bag.
         * @return true if the target is found in this bag, false otherwise.
         */
        virtual auto contains( const item_type &target ) const -> bool = 0;

        /**
         * Utility method to provide a vector copy of the contents of this bag.
         * @return a vector copy of the contents of this bag.
         */
        [[nodiscard]] virtual auto to_vector( ) const -> std::vector< item_type > = 0;
    };
}
#endif // CSC232_BAG_H
