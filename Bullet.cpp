#include "stdafx.h"
#include "Bullet.h"
#include "Weapon.h"
#include <iostream>
#include <math.h>


const double g = 9.18; //misura costante dell'accelerazione gravitazionale sulla terra

					   //calcolo il seno e coseno di gun.elevazione per semplificare le varie formule  //DA AGGIUSTARE
const double cosgun = cos(gun.elevazione); //coseno 
const double singun = sin(gun.elevazione); //seno

double Bullet::VacDistance(Bullet shoot, Weapon gun) //calcola la distanza massima nel vuoto
{

	double vacdistance;

	if (!shoot.height) vacdistance = (pow(shoot.velVolata, 2)*sin(2 * gun.elevazione)); //formula semplificata per shoot.height = 0
	else if (gun.elevazione == 45) vacdistance = pow(shoot.velVolata, 2) / g; //formula semplificata con gun.elevazione = 45
	else vacdistance = ((shoot.velVolata * cosgun) / g)*(shoot.velVolata*singun + (sqrt(pow(shoot.velVolata*singun, 2) + 2 * (g * shoot.height)))); //formula generica 

	return vacdistance;
}

double Bullet::VacTime(Bullet shoot, Weapon gun) {
	double vactime;


	if (!gun.elevazione) return 0;
	else if (!shoot.height) vactime = (sqrt(2) * shoot.velVolata) / g;
	else {
		double vacdistance = Bullet::VacDistance(shoot, gun);
		vactime = 
	}
}
