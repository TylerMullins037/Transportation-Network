// main.cpp
#include "transportation_network.h"
#include <iostream>
#include <map>

using namespace std;

int main() {
    // Create a map to store cities and their connections
    map<string, City> cities;

    // Add cities and connections (you can populate this part)
    addConnection(cities, "CityA", "CityB", 1, false); 
    addConnection(cities, "CityB", "CityC", 2, false);   
    addConnection(cities, "CityC", "CityD", 5, false);
    addConnection(cities, "CityD", "CityZ", 1, false);   
    addConnection(cities, "CityA", "CityK", 2, false); 
    addConnection(cities, "CityK", "CityG", 1, false);   
    addConnection(cities, "CityG", "CityZ", 10, false); 
    addConnection(cities, "CityB", "CityE", 3, false);   
    addConnection(cities, "CityC", "CityE",4, false);
    addConnection(cities, "CityD", "CityE", 4, false);
    addConnection(cities, "CityK", "CityE", 3, false);
    addConnection(cities, "CityG", "CityE", 2, false);
    addConnection(cities, "CityH", "CityE", 3, false);
    addConnection(cities, "CityH", "CityD", 2, false);
    addConnection(cities, "CityG", "CityH", 4, false);
    addConnection(cities, "CityH", "CityZ", 3, false);

    

    // Add more connections as needed

    // Example usage of shortestPath function
    vector<string> path = shortestPath(cities, "CityA", "CityZ");

    // Output the shortest path
    cout << "Shortest Path: ";
    for (const string& city : path) {
        cout << city << " -> ";
    }
    cout << "End" << endl;

    // Example usage of citiesWithinDistance function
    vector<string> citiesWithinDist = citiesWithinDistance(cities, "CityA", 15);

    // Output cities within a certain distance
    cout << "Cities within 15 units from StartCity: ";
    for (const string& city : citiesWithinDist) {
        cout << city << ", ";
    }
    cout << endl;

    // Example usage of findIsolatedCities function
    vector<string> isolatedCities = findIsolatedCities(cities);

    // Output isolated cities
    cout << "Isolated Cities: ";
    for (const string& city : isolatedCities)
    {
        cout << city << ", ";
    }
    return 0;
}
