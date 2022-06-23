#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <iostream>

class Movie
{
public:
    // Constructors
    Movie(std::string name, std::string rating, int watched);
    Movie(const Movie &movie);
    // Destructors
    ~Movie();

    // Methods
    void setName(std::string name);
    void setRating(std::string rating);
    void setWatch(int watched);
    void addWatch();
    std::string getName() const;
    std::string getRating() const;
    int getWatched() const;

    void display();
    // Properties

private:
    // Methods

    // Properties
    std::string name;   // movie name
    std::string rating; // movie rating
    int watched;        // number of times movie watched
};

#endif