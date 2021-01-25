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

/* 1.1 Un constructeur sert à créer un objet et initialize ses variables à l'aide d'arguments.
* 1.2 Un destructeur a pour but de vider un objet de la mémoire pour la libérer lors de sa fin de vie ( ou destruction ). Il est essentiel de l'appeler lors de la destruction d'un objet ou de la fermeture du programme.
* 1.3 La méthode constructeur d'une classe porte le nom de la classe qu'elle construit. On peut en définir plusieurs en fonction du nombre d'arguments donné lors de sa construction.
* 1.4 La surdéfinitions de fonction permet à une même fonction d'accepter différents nombres/types d'arguments.
* 1.5 Le mot clé private rendra la méthode ou attribut dans une classe accécible uniquements aux méthodes de cette classe alors que tout ce qui est public sera aussi accécible en dehors de cette classe.
* */