// credits : git.sinanmohd.com 
// https://git.sinanmohd.com/oops/commit/flight.cpp

/* define a class flight with the following fields. flight number, city_from,
 * city_to, and distance. a set of flights are available. user inputs a source
 * and destination city and the program will calculate total flying distance
 * between them. (there can be direct flights as well as connection flights).
 * if no flights are available from source to destination report so. */

#include <iostream>
#include <cstring>

#define NAME_LEN 20
#define MAX_FLGT 5
#define MAX_JUMP 5

class flight;
flight *flights[MAX_FLGT];

class flight
{
        private:
                int id, distance;
                char city_from[NAME_LEN], city_to[NAME_LEN];
        public:
                flight(int iid, int idistance, const char *src, const char *dest);
                void displayflight();
                friend void makepath(const char *src, const char *dest);
                friend int stringconnect(const char *src, const char *dest,
                                         int path[], int jumps);
};

flight::flight(int iid, int idistance, const char *src, const char *dest)
{
        id = iid;
        distance = idistance;

        strncpy(city_from, src, NAME_LEN);
        strncpy(city_to, dest, NAME_LEN);
}

void flight::displayflight()
{
        std::cout << id << ") " << city_from << " to " << city_to << std::endl;
}

int stringconnect(const char *src, const char *dest, int path[], int jumps) {
        int flightloc, src_match[MAX_FLGT], src_match_loc, arrived;

        // return if not viable
        if (jumps >= MAX_JUMP)
                return 0;

        for (flightloc = 0, src_match_loc = 0; flightloc < MAX_FLGT; flightloc++) {
                if (!strncmp(src, flights[flightloc]->city_from, NAME_LEN)) {
                        src_match[src_match_loc++] = flightloc;

                        if (!strncmp(dest, flights[flightloc]->city_to, NAME_LEN)) {
                                path[jumps++] = flightloc;
                                return jumps;
                        }
                }
        }

        jumps++;
        while (src_match_loc--) {
                if ((arrived = stringconnect(flights[src_match[src_match_loc]]->city_to,
                                             dest, path, jumps))) {
                        path[jumps-1] = src_match[src_match_loc];
                        break;
                }
        }

        return arrived;
}

void makepath(const char *src, const char *dest)
{
        int path[MAX_JUMP], jumps, count, total_distance;

        jumps = stringconnect(src, dest, path, 0);

        if(!jumps) {
                std::cout << "\nroute is not available\n";
                return;
        }

        std::cout << "\nyou have to take " << jumps 
                << " flight to reach your destination\n";

        for (count = 0, total_distance = 0; count < jumps; count++) { 
                flights[path[count]]->displayflight();
                total_distance += flights[path[count]]->distance;
        }

        std::cout << "the total distance is " << total_distance << "km.\n";
}

int main(void)
{
        int flightloc = 0;
        char src[NAME_LEN], dest[NAME_LEN];

        flights[flightloc++] = new flight(201, 20001, "sneedacity", "gondland");
        flights[flightloc++] = new flight(202, 20001, "monerotopia", "kekisthan");
        flights[flightloc++] = new flight(203, 20001, "gondland", "kekisthan");
        flights[flightloc++] = new flight(204, 20001, "monerotopia", "gondland");
        flights[flightloc++] = new flight(205, 20001, "kekisthan", "monerotopia");

        for (flightloc = 0; flightloc < MAX_FLGT; flightloc++)
                flights[flightloc]->displayflight();

        std::cout << "\nenter your starting point : ";
        std::cin >> src;
        std::cout << "enter your destination    : ";
        std::cin >> dest;

        makepath(src, dest);

        while (flightloc--)
                delete flights[flightloc];

        return 0;
}