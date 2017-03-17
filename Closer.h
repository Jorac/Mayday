
#ifndef CLOSER_H
#define CLOSER_H

#include "Facility.h"
#include "gcdistance.h"


class Closer{
public:
    /**
     * Construct object with given location
     * @param lat - latitude
     * @param lon - longitude
     */
    Closer(const double& lat, const double& lon):curLat(lat), curLon(lon){}
    ~Closer(){};
    
    /**
     * Compare two facilities in order of proximity to the current location
     * @return true if facility a is closer than facility b to the current location
     */
    bool operator()(const Facility* a, const Facility* b)
    {
        return a->distance(curLat, curLon)<b->distance(curLat,curLon);
    }
private:
    double curLat;
    double curLon;
};

#endif /* CLOSER_H */

