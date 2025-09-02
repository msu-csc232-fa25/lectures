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

namespace csc232
{
    template < typename item_type >
    class stubbed_bag final : public bag< item_type >
    {
    public:
        stubbed_bag( );
        ~stubbed_bag( ) override;
        [[nodiscard]] auto get_current_size( ) const -> int override;
        [[nodiscard]] auto is_empty( ) const -> bool override;
        auto add( const item_type &some_item ) -> bool override;
        auto remove( const item_type &some_item ) -> bool override;
        auto clear( ) -> void override;
        auto get_frequency_of( const item_type &target ) const -> int override;
        auto contains( const item_type &target ) const -> bool override;
        [[nodiscard]] auto to_vector( ) const -> std::vector< item_type > override;
    };

} // csc232

#endif // CSC232_STUBBED_BAG_H
