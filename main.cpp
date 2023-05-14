#include <iostream>
#include <string>

#include "utility.h"


int main() {
    Movies my_movies;
    int value = 0;

    std::cout << "Press 1 - Add Movie" << std::endl;
    std::cout << "Press 2 - Display Moives" << std::endl;
    std::cout << "Press 3 - Increment Watchcount" << std::endl;
    std::cout << "Press 4 - Exit" << std::endl;
    do
    {
        std::cin >> value;

        switch(value)
        {
            case 1:
                AddMovie(my_movies);
                break;
            case 2:
                DisplayMovies(my_movies);
                break;
            case 3:
                IncrementWatch(my_movies);
                break;
        }
    }
    while (value != 4);
        

    return 0;
}