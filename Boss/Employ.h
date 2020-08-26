/**
 * Project Untitled
 */


#ifndef _EMPLOY_H
#define _EMPLOY_H

#include "Humman.h"


class Employ: public Humman {
public: 
    
Employ();
    
/**
 * @param name
 * @param date
 */
Employ(string name, string date);
    
string getPosition();
private: 
    string department;
    string position;
};

#endif //_EMPLOY_H