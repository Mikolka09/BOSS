/**
 * Project Untitled
 */
#include<iostream>
#include<string>
#include<list>

using namespace std;

#ifndef _HUMMAN_H
#define _HUMMAN_H

class Humman {
public: 
    
Humman();
    
/**
 * @param name
 * @param date
 */
Humman(string name, string date);
    
string getName();
    
virtual string getPosition() = 0;
protected: 
    string name;
    string date_bd;
};

#endif //_HUMMAN_H