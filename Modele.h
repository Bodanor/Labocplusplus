#ifndef MODELE_H
#define MODELE_H

enum Moteur { Essence, Diesel, Electrique, Hybride };

class Modele   
{
    private : 
        char * nom;
        int puissance;
        Moteur moteur;
        float prix;

    public : 
        Modele();
        Modele(const char *, int, Moteur, float);
        Modele(const Modele &);
        ~Modele();

        const char * getnom()const;//"return de la variable"
        int getpuissance()const;
        Moteur getmoteur()const;
        float getprix()const;

        void setNom(const char *);
        void setpuissance(int);
        void setmoteur(Moteur);
        void setprix(float);
        
        void Affiche()const;//Ne modfifie pas les variables membres
};





#endif