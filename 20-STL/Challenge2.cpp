#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

class Song
{
private:
    std::string name;
    std::string artist;
    int rating;

public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
        : name(name), artist(artist), rating(rating) {}
    std::string getName() const { return name; }
    std::string getArtist() const { return artist; }
    int getRating() const { return rating; }

    bool operator<(const Song &rhs) const { return name < rhs.name; }
    bool operator==(const Song &rhs) const { return name == rhs.name; }
    friend std::ostream &operator<<(std::ostream &os, const Song &song);
};

void displayMenu();

void program(std::list<Song> &playList);

void playSong(const Song &song);

void displayPlayList(const std::list<Song> &playList, const Song &currentSong);

Song addNewSong()
{
    std::cin.ignore();
    std::string name;
    std::cout << "Enter the name of  song: ";
    std::getline(std::cin, name);

    std::string artist;
    std::cout << "Enter the name of artist: ";
    std::getline(std::cin, artist);

    int rating;
    std::cout << "Give the song a rating: ";
    std::cin >> rating;
    std::cin.ignore();

    Song newSong(name, artist, rating);
    return newSong;
}
int main()
{
    std::list<Song> playList{
        {"Master of Puppets", "Metallica", 5},
        {"Holy Wars", "Megadeth", 5},
        {"Castle of Glass", "Linkin Park", 5},
        {"My Heart Is Broken", "Evanescence", 5},
    };

    program(playList);

    std::cout
        << "Thanks for Listening!\n\n";
    return 0;
}

std::ostream &operator<<(std::ostream &os, const Song &song)
{
    os << std::setw(20) << std::left << song.name
       << std::setw(20) << std::left << song.artist
       << std::setw(05) << std::left << song.rating;
    return os;
}

void displayMenu()
{
    std::cout << "\nF - Play First Song" << std::endl
              << "N - Play Next Song" << std::endl
              << "P - Play Previous Song" << std::endl
              << "A - Add and Play a New Song at Current Location" << std::endl
              << "L - List the Current Play List" << std::endl
              << "=============================================================" << std::endl
              << "Enter a Selection (Q to Quit): ";
}

void displayPlayList(const std::list<Song> &playList, const Song &currentSong)
{
    for (Song song : playList)
    {
        std::cout << song << std::endl;
    }
    std::cout << "Current Song:" << std::endl
              << currentSong << std::endl;
}

void playSong(const Song &song)
{
    std::cout << "Playing:" << std::endl
              << song << std::endl;
}

void program(std::list<Song> &playList)
{
    char option{};
    std::list<Song>::iterator currentSong = playList.begin();
    Song newSong;
    do
    {
        displayMenu();
        std::cin >> option;

        switch (option)
        {
        case 'F':
            currentSong = playList.begin();
            playSong(*currentSong);
            break;

        case 'N':
            currentSong++;
            if (currentSong == playList.end())
            {
                currentSong = playList.begin();
            }
            playSong(*currentSong);
            break;

        case 'P':
            if (currentSong == playList.begin())
            {
                currentSong = --playList.end();
            }
            else
            {
                currentSong--;
            }
            playSong(*currentSong);
            break;

        case 'A':
            newSong = addNewSong();
            playList.insert(currentSong, newSong);
            break;

        case 'L':
            displayPlayList(playList, *currentSong);
            break;

        case 'Q':
            return;
            break;

        default:
            std::cout << " choose one the below options\n";
            break;
        }
    } while (option != 'Q');
}