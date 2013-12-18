//
//  Fourmi.h
//  SupFourmis
//
//  Created by Maxence de Cussac on 17/12/2013.
//  Copyright (c) 2013 Maxence de Cussac. All rights reserved.
//

#ifndef SupFourmis_Fourmi_h
#define SupFourmis_Fourmi_h
#include "Plateau.h"

class Fourmi
{
    // Attributes
    public :
        int x,y;
        int d;
    
    // Methods
    Fourmi(Plateau& plat);
    int get_d();
    friend bool operator<(const Fourmi& a, const Fourmi& b);
};

#endif
