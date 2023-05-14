#include "Movie.h"


Movie::Movie(const std::string& name, const std::string& rating, int watched)
    : m_name {name}, m_rating {rating}, m_watched {watched} {}



Movie::Movie(const Movie& source) 
    : Movie (source.m_name, source.m_rating, source.m_watched) {}

Movie::~Movie() {}

void Movie::increment_watched() {
    m_watched++;
}