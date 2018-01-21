#pragma once
#include "Weapon.h"



class Bullet : protected Weapon {
private:
	double size; //dimensione del proiettile
	double velVolata; //velocità di volata (velocità all'uscita della bocca della canna)
	double vacdistance; //distanza percorsa dal proiettile nel vuoto
	double airdistance; //distanza percorsa dal proiettile dell'aria 
	double vactime; //tempo impiegato dal proiettile per completare la sua traiettoia nel vuoto

protected:
	double height; //altezza di sparo del proiettile
public:
	double VacDistance(Bullet, Weapon); //calcolo distanza massima nel vuoto
	double VacTime(Bullet, Weapon);
};
kk
