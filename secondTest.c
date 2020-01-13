#include <stdio.h>

int poingGeorges (int pointDeVieDavid, int forceGeorges, int joueur) {
	pointDeVieDavid = pointDeVieDavid - (forceGeorges*5);
	printf ("%s\n", "Georges vient de donner un coup de poing");
	printf ("%s\n", "Georges a perdu ", forceGeorges*5, " points de vie");
	printf ("%s\n", "David a ", pointDeVieDavid, " points de vie");
	printf ("\n%s\n\n", "--------------------------------");
	joueur = 10;
};

int poingDavid (int pointDeVieGeorges, int forceDavid, int joueur) {
	pointDeVieGeorges = pointDeVieGeorges - (forceDavid*5);
	printf ("%s\n", "David vient de donner un coup de poing");
	printf ("%s\n", "David a perdu ", forceDavid * 5, " points de vie");
	printf ("%s\n", "Georges a ", pointDeVieGeorges, " points de vie");
	printf ("\n%s\n\n", "--------------------------------");
	joueur = 1;
};

int laforcedeGeorges (int forceGeorges, int joueur) {
	forceGeorges = forceGeorges + 1;
	printf ("%s\n", "Georges vient d'utiliser concentration");
	printf ("%s\n", "La force de Georges vient de passer a 2");
	printf ("\n%s\n\n", "--------------------------------");
	joueur = 10;
};

int laforcedeDavid (int forceDavid, int joueur) {
	forceDavid = forceDavid + 1;
	printf ("%s\n", "David vient d'utiliser concentration");
	printf ("%s\n", "La force de David vient de passer a 2");
	printf ("\n%s\n\n", "--------------------------------");
	joueur = 1;
};

int gameover (int pointDeVieGeorges, int pointDeVieDavid, int jeu) {
	if (pointDeVieGeorges<1) {
	jeu=1;
	printf ("%s\n", "Georges a perdu");
	}
	else if (pointDeVieDavid<1) {
	jeu=1;
	printf ("%s\n", "David a perdu");
	}
};

int main() {

int pointDeVieGeorges = 100;
int pointDeVieDavid = 100;
int forceGeorges = 1;
int forceDavid = 1;
int jeu = 0;
int coffre = 0;
int joueur = 1;

printf ("%s\n\n", "Vous etes Georges et vous allez cassez la gueule a David");

while (pointDeVieDavid>0 || pointDeVieGeorges>0) {
	printf ("%s\n", "Taper 1 pour donner un coup de poing ; Taper 2 pour vous concentrer");
	scanf ("%d\n", &coffre);
	coffre = joueur + coffre;

	if (coffre == 2){
	poingGeorges(pointDeVieDavid, forceGeorges, joueur);
	} else if (coffre == 3) {
	laforcedeGeorges(forceGeorges, joueur);
	}

	if (coffre == 11){
	poingDavid(pointDeVieGeorges, forceDavid, joueur);
	} else if (coffre == 12) {
	laforcedeDavid(forceDavid, joueur);
	}

	gameover(pointDeVieGeorges, pointDeVieDavid, jeu);
}



return 0;
}
