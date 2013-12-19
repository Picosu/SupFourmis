//
//  Fourmiliere.h
//  SupFourmis
//
//  Created by Maxence de Cussac on 19/12/2013.
//  Copyright (c) 2013 Maxence de Cussac. All rights reserved.
//

#ifndef SupFourmis_Fourmiliere_h
#define SupFourmis_Fourmiliere_h
#include <vector>
#include <iostream>
#include "Plateau.h"
#include "Fourmi.h"

class Fourmiliere
{
private:
    Plateau* plateau;
    std::vector<Fourmi> popu;
    static int nb;
public:
    Fourmiliere(Plateau& pl);
    std::vector<Fourmi>test;
    void ajout();
    void affiche();
    int get_nb();
    void stats();
    void stats(int n, int m);
};

#endif
