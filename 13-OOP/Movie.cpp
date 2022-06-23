#include "Movie.h"

Movie::Movie(std::string name, std::string rating, int watched)
    : name(name),
      rating(rating),
      watched(watched)
{
}

Movie::Movie(const Movie &movie)
    : Movie(movie.name, movie.rating, movie.watched)
{
}

Movie::~Movie()
{
}

void Movie::setName(std::string name)
{
    this->name = name;
}
void Movie::setRating(std::string rating)
{
    this->rating = rating;
}
void Movie::setWatch(int watched)
{
    this->watched = watched;
}

void Movie::addWatch()
{
    this->watched += 1;
}
std::string Movie::getName() const
{
    return this->name;
}

std::string Movie::getRating() const
{
    return this->rating;
}

int Movie::getWatched() const
{
    return this->watched;
}

void Movie::display()
{
    std::cout << name << '\t' << rating << '\t' << watched << '\n';
}