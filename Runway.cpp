/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Runway.h"
#include <sstream>

Runway::Runway(std::string s)
:       site_number_(s.substr(0,10)),
        name_(s.substr(13,7)),
        length_(convert_length(s.substr(20,5)))
{
}

std::string Runway::site_number() const
{
    return site_number_;
}

std::string Runway::name() const
{
    return name_;
}

int Runway::length() const
{
    return length_;
}

int Runway::convert_length(std::string s) const
{
    // construct stringstream from string s for formatted input
    std::stringstream ss(s);
    int res;
    ss >> res;
    return res;
}
