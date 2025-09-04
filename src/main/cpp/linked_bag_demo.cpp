#include "bag.h"
#include "linked_bag.h"
#include <iomanip>
#include <iostream>

void display_bag( const csc232::bag< std::string > &bag )
{
    std::cout << "The bag contains " << bag.get_current_size( ) << " items." << std::endl;
    auto bag_items = bag.to_vector( );
    for ( auto current_entry : bag_items )
    {
        std::cout << current_entry << " ";
    }
    std::cout << std::endl
              << std::endl;
}

void bag_tester( csc232::bag< std::string > &bag )
{
    std::cout << "is_empty returns: " << std::boolalpha << bag.is_empty( );
    std::cout << "; should be true" << std::endl;
    display_bag( bag );
    for ( std::string test_list[] = { "one", "two", "three", "four", "five", "one" }; auto current_item : test_list )
    {
        bag.add( current_item );
    }
    display_bag( bag );
    std::cout << "is_empty returns: " << std::boolalpha << bag.is_empty( );
    std::cout << "; should be false" << std::endl;
    std::cout << "get_current_size( ): " << bag.get_current_size( );
    std::cout << "; should be 6" << std::endl;
    std::cout << "Try to add another entry: add(\"extra\") returns ";
    std::cout << std::boolalpha << bag.add( "extra" ) << std::endl;
    display_bag( bag );
}

auto main( ) -> int
{
    auto bag{ csc232::linked_bag< std::string >( ) };
    std::cout << "Testing the array-based bag: " << std::endl;
    std::cout << "The initial bag is empty" << std::endl;
    bag_tester( bag );
    std::cout << "All done!" << std::endl;

    return EXIT_SUCCESS;
}
