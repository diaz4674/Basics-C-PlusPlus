#include <iostream>

int main() {
    int fav_number;

    std::cout <<"Enter your favorite number between 1 and 100:";

    std::cin >> fav_number;

    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout <<"no really " <<  fav_number << " is my fav number!" <<std::endl;
    return 0; 
}