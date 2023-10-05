// main.cpp
#include "transportation_network.h"
#include <iostream>
#include <map>

using namespace std;

int main() {
    // Create a map to store cities and their connections
    map<string, City> cities;

    // Add cities and connections (you can populate this part)
    addConnection(cities, "CityA", "CityB", 10, false); // Two-way connection
    addConnection(cities, "CityB", "CityC", 5, true);   // One-way connection
    // Add more connections as needed

    // Example usage of shortestPath function
    vector<string> path = shortestPath(cities, "StartCity", "EndCity");

    // Output the shortest path
    cout << "Shortest Path: ";
    for (const string& city : path) {
        cout << city << " -> ";
    }
    cout << "End" << endl;

    // Example usage of citiesWithinDistance function
    vector<string> citiesWithinDist = citiesWithinDistance(cities, "StartCity", 15);

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
    for (const string
