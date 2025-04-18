#include <iostream>
#include <iomanip>
#include <cmath>


int main() {
    double distance;
    int fuel;
    int spaceship_weight;
    int life_support;
    int crew_size;


    std::cout << "Enter distance from planet (million km): ";
    std::cin >> distance;

    std::cout << "Enter fuel availability (tons): ";
    std::cin >> fuel;

    std::cout << "Enter number of crew members: ";
    std::cin >> crew_size;

    std::cout << "Enter weight of spaceship (tons): ";
    std::cin >> spaceship_weight;

    std::cout << "Enter life support duration (days): ";
    std::cin >> distance;


    double efficiency = (fuel / spaceship_weight) * 100;
    double speed = (fuel * 10000) / (crew_size * spaceship_weight);
    double travel_time = (distance * 1000000) / speed;
    int travel_days = static_cast<int>(std::ceil(travel_time));


    bool is viable = (efficiency >= 20.0) &&
                    (life_support >= travel_days + 10) &&
                    (crew_size >= 2 && crew_size <= 8) &&
                    (spaceship_weight < 500);


    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nFuel efficiency: " << efficiency << "%\n";

    std::cout << std::setprecision(0);
    std::cout << "Estimated speed: " << speed << " km/day\n";
    std::cout << "Estimated travel time: " << travel_days << " days\n";

    std::cout << "\nMission Status: ";
    if (is_visable) {
        std::cout << "Viable\n";
    }

    else {
        std::cout << "Not Viable\n";
    }

    return 0;
}