
#ifndef SITENUMBER_H
#define SITENUMBER_H

#include "Runway.h"

class SiteNumber
{
public:

    SiteNumber(const std::string number, const int& lenght) 
    : site_number_(number), min_runway_lenght(lenght)
    {
    }
    
    ~SiteNumber()
    {
    }

    bool operator()(const Runway* obj)
    {
        if(site_number_.compare(obj->site_number()) != 0)
            return false;
        return obj->length() >= min_runway_lenght;
    }
private:
    const std::string site_number_;
    const int min_runway_lenght;
};

#endif /* SITENUMBER_H */

