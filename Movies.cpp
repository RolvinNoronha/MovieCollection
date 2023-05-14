#include <iostream>

#include "Movie.h"
#include "Movies.h"


bool Movies::add_movie(const std::string& name, const std::string& rating, int watched) {
    for (auto mv: this->m_movies) {
        if (mv.get_name() == name)
            return false;
    }

    Movie movie {name, rating, watched};
    this->m_movies.push_back(movie);
    return true;
}


bool Movies::increment_watched(Movies& movies, const std::string& name) {
    for (auto& mv: movies.m_movies) {
        if (mv.get_name() == name) {
            mv.increment_watched();
            return true;
        }
    }

    return false;
}


void Movies::display_movies() const {

    if (this->m_movies.empty()) {
        std::cout << "No movies in the collection \n";
        return;
    }
    
    for (auto mv: this->m_movies) {
        std::cout << mv.get_name() << " " << mv.get_rating() << " " << mv.get_watched() << "\n";
    }

    std::cout << "\n";
}