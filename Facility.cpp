/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Facility.h"

Facility::Facility(std::string s):
latitude_(0.0),longitude_(0.0)
{
}

double Facility::convert_latitude(std::string s) const
{
    return 0.0;
}

double Facility::convert_longitude(std::string s) const
{
    return 0.0;
}

double Facility::distance(double lat, double lon) const
{
    return 0.0;
}

std::string Facility::code() const{
    return "";
}

double Facility::latitude() const
{
    return 0.0;
}

double Facility::longitude() const
{
    return 0.0;
}

std::string Facility::name() const
{
    return "";
}

std::string Facility::site_number() const
{
    return "";
}

std::string Facility::type() const
{
    return "";
}
