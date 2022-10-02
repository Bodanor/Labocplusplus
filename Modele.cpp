#include "Modele.h"

#include<iostream>
#include<string.h>

using namespace std;

/******************************Constructeur et destructeur***************************/

Modele::Modele()
{
    #ifdef DEBUG

        cout << "Construscteur par défaut de Modele" << endl;

    #endif 

    puissance = 0;
    prix = 0;
    moteur = Essence;

    nom = new char [50];
    strcpy(nom, "Modele sans nom");

}

/********************************Getters et Setters**********************************/

const char * Modele::getnom()const
{
    return nom;
}

int Modele::getpuissance()const
{
    return puissance;
}

Moteur Modele:: getmoteur()const
{
    return moteur;
}

float Modele::getprix()const
{
    return prix;
}

void Modele::setnom(const char *n)
{
    if(nom!=NULL)
        delete[] nom;
    nom = new char [strlen(n)+1];
    strcpy(nom, n);
}

void Modele::setpuissance(int p)
{
    if(p>=0)
        puissance = p;
}

void Modele::setmoteur(Moteur m)
{
    moteur = m;
}

void Modele::setprix(float pr)
{
    prix = pr;
}



Modele:: Modele(const char *n, int p, Moteur m, float pr)
{
    #ifdef DEBUG

        cout << "Construscteur d'initialisation de Modele" << endl;

    #endif 

    nom = NULL;
    setnom(n);
    setpuissance(p);
    setmoteur(m);
    setprix(pr);
}

Modele::Modele(const Modele &source)
{
    #ifdef DEBUG

        cout << "Construscteur de copie de Modele" << endl;

    #endif 

    nom = NULL;
    setnom(source.getnom());
    setpuissance(source.getpuissance());
    setmoteur(source.getmoteur());
    setprix(source.getprix()); 
}

Modele::~Modele()
{
    #ifdef DEBUG

        cout << "Deconstructeur de Modele" << endl;

    #endif

    if(nom)
        delete[]nom;
}

/*********************************Méthode publique***********************************/

void Modele::Affiche()const
{
    cout<<nom<<""<<puissance<<""<<moteur<<""<<prix<<endl;

    /* switch (moteur)
    {
    case Essence : 
        cout<<"Essence";
        break;
    
    } */
}