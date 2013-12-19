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
    int hauteur, largeur;
public:
    /*! 
     *Forme canonique coplien
     */
    Plateau();
    Plateau(const Plateau &plateau);
    ~Plateau();
    
    //------------------------------------
    Plateau(int h, int l);
    void set_tab(int h, int l);
    void affiche();
    Etat& get_case(int x, int y);
    int get_h();
    int get_l();
    
    // Surcharge d'opérateurs
    Plateau& operator=(const Plateau &plateau); // Forme Coplien aussi
    Plateau& operator++(const int k);
};

#endif
