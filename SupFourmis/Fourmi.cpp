//
//  Fourmi.cpp
//  SupFourmis
//
//  Created by Maxence de Cussac on 18/12/2013.
//  Copyright (c) 2013 Maxence de Cussac. All rights reserved.
//

#include "Fourmi.h"
#include "Etat.h"

Fourmi:: Fourmi(Plateau& plat)
{
    int x = (plat.get_l() - 1) / 2;
    int y = (plat.get_h() - 1) / 2;
    Etat *state = &plat.get_case(x, y);
    while ((*state).get_o())
    {
        switch ((*state).modif_d())
        {
        case 1:
            x--;
            break;
        case 2:
            y--;
            break;
        case 3:
            x++;
            break;
        case 4:
            y++;
        }
        state = &plat.get_case(x, y);
        /*
         faire un switch sur la direction, et modifier le x et/ou y en fonction du résultat
         */
    }
};