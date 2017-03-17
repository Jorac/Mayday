/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Facility.h"
#include "gcdistance.h"
#include <sstream>

Facility::Facility(std::string s)
    :   site_number_(s.substr(0, 10)),
        type_(s.substr(11,13)),
        code_(s.substr(24,4)),
        name_(s.substr(130, 50)),
        latitude_(convert_latitude(s.substr(535,12))),
        longitude_(convert_longitude(s.substr(562,12)))
{
}

double Facility::convert_latitude(std::string s) const
{
    // construct stringstream from string s for formatted input
    std::stringstream ss(s);
    double res = 0.0;
    ss >> res; // read double value from stream 
    res/=3600; // convert to degrees
    // check for the sign
    if(s.at(s.length()-1) == 'S')
        res*=(-1);
    return res;
}

double Facility::convert_longitude(std::string s) const
{
    std::stringstream ss(s);
    double res = 0.0;
    ss >> res;
    res/=3600;
    if(s.at(s.length()-1) == 'W')
        res*=(-1);
    return res;
}

double Facility::distance(double lat, double lon) const
{
    return gcdistance(latitude_,longitude_,lat, lon);
}

std::string Facility::code() const{
    return code_;
}

double Facility::latitude() const
{
    return latitude_;
}

double Facility::longitude() const
{
    return longitude_;
}

std::string Facility::name() const
{
    return name_;
}

std::string Facility::site_number() const
{
    return site_number_;
}

std::string Facility::type() const
{
    return type_;
}
