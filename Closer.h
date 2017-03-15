/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Closer.h
 * Author: Egor
 *
 * Created on 15 марта 2017 г., 9:26
 */

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

