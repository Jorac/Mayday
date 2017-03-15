
#ifndef CLOSER_H
#define CLOSER_H

#include "Facility.h"


class Closer{
public:
    Closer(const double& lat, const double& lon):curLat(lat), curLon(lon){}
    ~Closer(){};
    bool operator()(const Facility* a, const Facility* b){return true;}
private:
    double curLat;
    double curLon;
};

#endif /* CLOSER_H */

