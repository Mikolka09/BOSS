/**
 * Project Untitled
 */
#include"Boss.h"
#include"Employ.h"

#ifndef _DEPARTMENT_H
#define _DEPARTMENT_H

class Department {
public: 
    
/**
 * @param name
 */
Department(string name);
    
/**
 * @param boss
 */
void setBoss(Boss boss);
    
/**
 * @param empl
 */
void addEmploy(Employ empl);
    
void print();
private: 
    string name;
    Boss boss;
    list<Employ> employs;
};

#endif //_DEPARTMENT_H