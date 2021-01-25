// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cadre.h"

int main()
{
    std::cout << "Hello World!\n";
    Cadre cadre1;
    cadre1.setWidth(8);
    cadre1.show();
}

/* 1.1 Un constructeur sert � cr�er un objet et initialize ses variables � l'aide d'arguments.
* 1.2 Un destructeur a pour but de vider un objet de la m�moire pour la lib�rer lors de sa fin de vie ( ou destruction ). Il est essentiel de l'appeler lors de la destruction d'un objet ou de la fermeture du programme.
* 1.3 La m�thode constructeur d'une classe porte le nom de la classe qu'elle construit. On peut en d�finir plusieurs en fonction du nombre d'arguments donn� lors de sa construction.
* 1.4 La surd�finitions de fonction permet � une m�me fonction d'accepter diff�rents nombres/types d'arguments.
* 1.5 Le mot cl� private rendra la m�thode ou attribut dans une classe acc�cible uniquements aux m�thodes de cette classe alors que tout ce qui est public sera aussi acc�cible en dehors de cette classe.
* */