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

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    Plateau pl;

    pl.affiche();
    pl.~Plateau();
    
    pl.affiche();
    return 0;
}

