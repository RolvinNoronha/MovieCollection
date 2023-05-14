#include <iostream>
#include <string>

#include "Movies.h"

void add_movies(Movies& movies, const std::string& name, const std::string& rating, int watched) {
    if (movies.add_movie(name, rating, watched)) 
        std::cout << "Added movie [" << name << "] to the collection \n";
    else 
        std::cout << "Movie [" << name << "] already exist in the collection \n";
}

void AddMovie(Movies& movies)
{
    std::string input = "";

    std::cout << "Enter the Name, Rating of the movie only seperated by comma: ";
    std::cin.ignore();
    std::getline(std::cin, input);
    std::string name = input.substr(0, input.find(','));
    std::string rating = input.substr(input.find(',') + 1);



    add_movies(movies, name, rating, 1);
}



void increment_watched(Movies& movies, const std::string& name) {
    if (movies.increment_watched(movies, name))
        std::cout << "Incremented watch count for: " << name << "\n";
    else 
        std::cout << "No movie named [" << name << "] in the collection \n";

}

void IncrementWatch(Movies& movies)
{
    std::string name = "";
    std::cout << "Enter the name of the Movie: ";
    std::cin.ignore();
    std::getline(std::cin, name);

    increment_watched(movies, name);
}




void DisplayMovies(Movies& movies)
{
    movies.display_movies();
}

