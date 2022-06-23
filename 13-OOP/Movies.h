#ifndef MOVIES_H
#define MOVIES_H

#include "Movie.h"
#include <vector>

class Movies
{
public:
    // Constructor
    Movies(std::string name, std::string rating, int watched);
    Movies(const Movies &movies);
    Movies();
    // Destructor
    ~Movies();
    // Methods
    void addMovie(std::string name, std::string rating, int watched);
    void deleteMovie(std::string name);
    void changeRating(std::string name, std::string rating);
    void changeWatched(std::string name, int watched);
    void addWatched(std::string name);
    void display();
    // Properties

private:
    // Methods
    std::vector<Movie>::iterator _findMovie(std::string name);
    bool _isMovieAvailable(std::string name);
    // Properties
    std::vector<Movie> movies;
};

#endif