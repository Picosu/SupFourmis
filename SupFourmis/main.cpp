//
//  main.cpp
//  SupFourmis
//
//  Created by Maxence de Cussac on 17/12/2013.
//  Copyright (c) 2013 Maxence de Cussac. All rights reserved.
//

#include <iostream>
#include "Etat.h"
#include "Plateau.h"
#include "Fourmiliere.h"

int main(int argc, const char * argv[])
{

    int nombreFourmi = 8;
    Plateau pl;
    Fourmiliere f(pl);

    for (int i = 0; i < nombreFourmi; i++)
    {
        f.ajout();
    }
    f.stats();
    f.affiche();
    
    return 0;
}