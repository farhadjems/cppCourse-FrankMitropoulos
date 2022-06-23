#include "Movies.h"

Movies::Movies(std::string name, std::string rating, int watched)
{
    Movie newMovie(name, rating, watched);
    movies.push_back(newMovie);
}

Movies::Movies(const Movies &originalMovies)
{
    for (Movie movie : originalMovies.movies)
    {
        this->movies.push_back(movie);
    }
}
Movies::Movies()
{
}

Movies::~Movies() {}

std::vector<Movie>::iterator Movies::_findMovie(std::string name)
{
    std::vector<Movie>::iterator i = movies.begin();
    for (i; i != movies.end(); ++i)
    {
        if (i->getName() == name)
        {
            return i;
        }
    }
    return movies.end();
}

bool Movies::_isMovieAvailable(std::string name)
{
    for (Movie movie : movies)
    {
        if (movie.getName() == name)
        {
            return true;
        }
    }
    return false;
}

void Movies::addMovie(std::string name, std::string rating, int watched)
{
    if (!_isMovieAvailable(name))
    {
        Movie newMovie(name, rating, watched);
        movies.push_back(newMovie);
    }
    else
    {
        std::cout << " movie with the name \"" << name << "\" already exists\n";
    }
}
void Movies::deleteMovie(std::string name)
{
    if (_isMovieAvailable(name))
    {
        movies.erase(_findMovie(name));
    }
    else
    {
        std::cout << " movie with the name \"" << name << "\" does not exist!\n";
    }
}
void Movies::changeRating(std::string name, std::string rating)
{
    if (_isMovieAvailable(name))
    {
        _findMovie(name)->setRating(rating);
    }
    else
    {
        std::cout << " movie with the name \"" << name << "\" does not exist!\n";
    }
}
void Movies::changeWatched(std::string name, int watched)
{
    if (_isMovieAvailable(name))
    {
        _findMovie(name)->setWatch(watched);
    }
    else
    {
        std::cout << " movie with the name \"" << name << "\" does not exist!\n";
    }
}
void Movies::addWatched(std::string name)
{
    if (_isMovieAvailable(name))
    {
        _findMovie(name)->addWatch();
    }
    else
    {
        std::cout << " movie with the name \"" << name << "\" does not exist!\n";
    }
}

void Movies::display()
{
    if (movies.size() == 0)
    {
        std::cout << " there is no item in your movie list\n";
    }
    else
    {
        for (Movie movie : movies)
        {
            movie.display();
        }
    }
}
