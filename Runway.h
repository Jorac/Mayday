//
// Runway.h
//

#ifndef RUNWAY_H
#define RUNWAY_H
#include<string>
class Runway
{
  public:
    Runway(std::string s):length_(0.0){}
    std::string site_number(void) const{return "";}
    std::string name(void) const{return "";}
    int length(void) const{return 0;}
  private:
    int convert_length(std::string s) const{return 0;}
    const std::string site_number_;
    const std::string name_;
    const int length_;
};
#endif
