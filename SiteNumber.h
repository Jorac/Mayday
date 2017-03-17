
#ifndef SITENUMBER_H
#define SITENUMBER_H

#include "Runway.h"

class SiteNumber
{
public:

    /**
     * Construct object with given site_number_ and min length of runway
     * @param number - site_number_ of Facility
     * @param lenght - minimum required length of runway
     */
    SiteNumber(const std::string number, const int& lenght) 
    : site_number_(number), min_runway_lenght(lenght)
    {
    }
    
    ~SiteNumber()
    {
    }
    
    /**
     * compare runway site_number with the Faility's one 
     * and also length of given runway
     * @param obj - Runway object for compare
     * @return false if different site_number or runway too short
     */
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

