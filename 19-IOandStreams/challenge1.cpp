#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City
{
    std::string name;
    long population;
    double cost;
};

struct Country
{
    std::string name;
    std::vector<City> cities;
};

struct Tours
{
    std::string title;
    std::vector<Country> countries;
};

void printDash(const int numberOfDash)
{
    for (int i = 0; i < numberOfDash; i++)
    {
        std::cout << '-';
    }
    std::cout << std::endl;
}

int main()
{
    Tours tour{
        "Tour Ticket Prices from Miami",
        {{

             "Colombia",
             {{"Bogota", 8778000, 400.98},
              {"Cali", 2401000, 424.12},
              {"Medellin", 2464000, 350.98},
              {"Cartagena", 972000, 345.34}},

         },
         {
             "Brazil",
             {{"Rio De Janiero", 13500000, 567.45},
              {"Sao Paulo", 11310000, 975.45},
              {"Salvador", 18234000, 855.99}},
         },
         {
             "Chile",
             {{"Valdivia", 260000, 569.12},
              {"Santiago", 7040000, 520.00}},
         },
         {"Argentina",
          {{"Buenos Aires", 3010000, 723.77}}}}};

    // since the default max width of terminal is 80 chars

    const int countryWidth = 20;
    const int cityWidth = 20;
    const int populationWidth = 15;
    const int costWidth = 15;
    const int maxWidth = countryWidth + cityWidth + populationWidth + costWidth;

    const int titleChars = tour.title.size();
    const int numberSpace = (maxWidth - titleChars) / 2;

    std::cout << std::setw(numberSpace) << "" << tour.title << std::endl;

    std::cout << std::setw(countryWidth) << std::left << "Country"
              << std::setw(cityWidth) << std::left << "City"
              << std::setw(populationWidth) << std::right << "Population"
              << std::setw(costWidth) << std::right << "Cost"
              << std::endl;

    printDash(maxWidth);
    std::cout << std::setprecision(2) << std::fixed;

    for (Country country : tour.countries)
    {
        for (size_t i = 0; i < country.cities.size(); i++)
        {
            std::cout << std::left << std::setw(countryWidth) << ((i == 0) ? country.name : "")
                      << std::left << std::setw(cityWidth) << country.cities[i].name
                      << std::right << std::setw(populationWidth) << country.cities[i].population
                      << std::right << std::setw(costWidth) << country.cities[i].cost
                      << std::endl;
        }
        std::cout << std::endl;
    }
    printDash(maxWidth);
    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}