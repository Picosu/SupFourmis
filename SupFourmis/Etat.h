//
//  Etat.h
//  SupFourmis
//
//  Created by Maxence de Cussac on 17/12/2013.
//  Copyright (c) 2013 Maxence de Cussac. All rights reserved.
//

#ifndef SupFourmis_Etat_h
#define SupFourmis_Etat_h

class Etat
{
private:
    bool occupe;
    unsigned int direction;
    /*
     1 : ouest
     2 : nord
     3 : est
     4 : sud
     */
public:
    Etat();
    Etat(bool o, int d);
    bool get_o();
    unsigned int get_d();
    void set_o(bool o);
    void set_d(int d);
    unsigned int modif_d();
    char symbole();
}; 

#endif
