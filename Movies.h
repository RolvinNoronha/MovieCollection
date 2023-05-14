#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include "Movie.h"

class Movies {
private:
    std::vector<Movie> m_movies;
public:

    // Member functions
    bool add_movie(const std::string& name, const std::string& rating, int watched);
    bool increment_watched(Movies& movies, const std::string& name);
    void display_movies() const;

    // Constructor
    Movies() = default;

    // Destructor
    ~Movies() = default;

};


#endif