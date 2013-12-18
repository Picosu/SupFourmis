//
//  Plateau.h
//  SupFourmis
//
//  Created by Maxence de Cussac on 17/12/2013.
//  Copyright (c) 2013 Maxence de Cussac. All rights reserved.
//

#ifndef SupFourmis_Plateau_h
#define SupFourmis_Plateau_h
#include "Etat.h"
class Plateau
{
private:
    Etat** tab;
    unsigned int hauteur, largeur;
public:
    /*! 
     *Forme canonique coplien
     */
    Plateau();
    Plateau(const Plateau &plateau);
    ~Plateau();
    
    //------------------------------------
    Plateau(unsigned int h, unsigned int l);
    void set_tab(unsigned int h, unsigned int l);
    void affiche();
    Etat& get_case(unsigned int x, unsigned int y);
    unsigned int get_h();
    unsigned int get_l();
    
    // Surcharge d'opérateurs
    Plateau& operator=(const Plateau &plateau);
    Plateau& operator++(const int k);
};

#endif
