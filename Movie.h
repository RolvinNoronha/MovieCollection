#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie 
{
private: 
    std::string m_name;
    std::string m_rating;
    int m_watched;

public:
    // Member functions
    std::string get_name() const { return m_name; }
    std::string get_rating() const { return m_rating; }
    int get_watched() const { return m_watched; }
    void increment_watched(int count);

    // Constructor
    Movie(const std::string& name, const std::string& rating, int watched);

    // Copy Constructor
    Movie(const Movie& source);

    // Destructor
    ~Movie();
};


#endif