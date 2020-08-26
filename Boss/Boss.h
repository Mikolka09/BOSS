/**
 * Project Untitled
 */


#ifndef _BOSS_H
#define _BOSS_H

#include "Humman.h"


class Boss: public Humman {
public: 
    
Boss();
    
/**
 * @param name
 * @param date
 */
Boss(string name, string date);
    
string getPosition();
};

#endif //_BOSS_H