#include "Movies.h"

int main()
{
    Movies myMovies;

    myMovies.display();

    myMovies.addMovie("Big", "PG-13", 2);
    myMovies.addMovie("Star Wars", "PG", 5);
    myMovies.addMovie("Cinderella", "PG", 7);

    myMovies.display();

    myMovies.addMovie("Cinderella", "PG", 7);
    myMovies.addMovie("Ice Age", "PG", 12);

    myMovies.display();

    myMovies.addWatched("Big");
    myMovies.addWatched("Ice Age");

    myMovies.display();

    myMovies.addWatched("XXX");
}