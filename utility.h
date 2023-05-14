#include <iostream>

#include "Movies.h"



void add_movies(Movies& movies, const std::string& name, const std::string& rating, int watched);
void increment_watched(Movies& movies, const std::string& name);

void AddMovie(Movies& movies);
void DisplayMovies(Movies& movies);
void IncrementWatch(Movies& movies);
