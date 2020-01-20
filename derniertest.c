#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// FONCTIONS
// FONCTIONS

// permet d'ajouter de la couleur leur du rendu C
void SetColor(int ForgC) {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;


 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {

      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}

int poingGeorges (int pointDeVieDavid, int forceGeorges) {
	SetColor(2);
	printf ("\n%s\n", "Georges vient de donner un coup de poing");
	printf ("%s", "David a perdu ");
	printf ("%d", forceGeorges*3);
	printf ("%s\n", " points de vie");
	printf ("%s", "David a ");
	printf ("%d", pointDeVieDavid);
	printf ("%s\n", " points de vie");
	SetColor(15);
	printf ("\n%s\n\n", "--------------------------------");
};

int poingDavid (int pointDeVieGeorges, int forceDavid) {
	SetColor(4);
	printf ("%s\n", "David vient de donner un coup de poing");
	printf ("%s", "Georges a perdu ");
	printf ("%d", forceDavid * 3);
	printf ("%s\n", " points de vie");
	printf ("%s", "Georges a ");
	printf ("%d", pointDeVieGeorges);
	printf ("%s\n", " points de vie");
	SetColor(15);
	printf ("\n%s\n", "////////////////////////////////");
	printf ("%s\n\n", "////////////////////////////////");
};


int laforcedeGeorges (int forceGeorges) {
	SetColor(2);
	printf ("\n%s\n", "Georges se concentre");
	printf ("%s", "La force de Georges vient de passer a ");
  printf ("%d\n", forceGeorges);
  printf ("%s", "par attaque vous effectuez ");
  printf ("%d", forceGeorges*3);
  printf ("%s\n", " de degats");
	SetColor(15);
	printf ("\n%s\n\n", "--------------------------------");
};

int laforcedeDavid (int forceDavid) {
	SetColor(4);
	printf ("%s\n", "David se concentre");
	printf ("%s", "La force de David vient de passer a ");
  printf ("%d\n", forceDavid);
  printf ("%s", "par attaque il effectue ");
  printf ("%d", forceDavid*3);
  printf ("%s\n", " de degats");
	SetColor(15);
	printf ("\n%s\n", "////////////////////////////////");
	printf ("%s\n\n", "////////////////////////////////");
};


int GeorgesDestabilise () {
	SetColor(2);
	printf ("\n%s\n", "Georges destabilise David");
	printf ("%s\n", "La force de David vient de doucement baisser  ");
	SetColor(15);
	printf ("\n%s\n\n", "--------------------------------");
};

int DavidDestabilise () {
	SetColor(4);
  printf ("%s\n", "David destabilise Georges");
	printf ("%s\n", "La force de Georges vient de doucement baisser  ");
	SetColor(15);
	printf ("\n%s\n", "////////////////////////////////");
	printf ("%s\n\n", "////////////////////////////////");
};


int morphineGeorges () {
	SetColor(2);
	printf ("\n%s\n", "Georges utilise de la morphine");
	printf ("%s\n", "L'effet declencher lui empeche d'attaquer les 2 prochains tours ");
	SetColor(15);
	printf ("\n%s\n\n", "--------------------------------");
};

int morphineDavid () {
	SetColor(4);
  printf ("%s\n", "David utilise de la morphine");
	printf ("%s\n", "L'effet declencher lui empeche d'attaquer les 2 prochains tours ");
	SetColor(15);
	printf ("\n%s\n", "////////////////////////////////");
	printf ("%s\n\n", "////////////////////////////////");
};


int GeorgesMotive (int forceDavid) {
	SetColor(2);
	printf ("\n%s\n", "Georges motive David");
	printf ("%s", "La force de David vient de passer a ");
  printf ("%d\n", forceDavid);
  printf ("%s", "par attaque il effectue ");
  printf ("%d", forceDavid*3);
  printf ("%s\n", " de degats");
	SetColor(15);
	printf ("\n%s\n\n", "--------------------------------");
};

int DavidMotive (int forceGeorges) {
	SetColor(4);
	printf ("%s\n", "David motive Georges");
	printf ("%s", "La force de Georges vient de passer a ");
  printf ("%d\n", forceGeorges);
  printf ("%s", "par attaque il effectue ");
  printf ("%d", forceGeorges*3);
  printf ("%s\n", " de degats");
	SetColor(15);
	printf ("\n%s\n", "////////////////////////////////");
	printf ("%s\n\n", "////////////////////////////////");
};


int coupDeBouleGeorges () {
	SetColor(2);
	printf ("\n%s\n", "Georges utilise coup de boule");
	printf ("%s\n", "Esperant sonner son adversaire ");
};

int coupDeBouleDavid () {
	SetColor(4);
  printf ("%s\n", "David utilise coup de boule");
	printf ("%s\n", "Esperant sonner son adversaire ");
};


int GeorgesProtege () {
	SetColor(2);
	printf ("\n%s\n", "Georges decide de proteger David");
  SetColor(15);
	printf ("\n%s\n\n", "--------------------------------");
};

int DavidProtege () {
	SetColor(4);
  printf ("%s\n", "David decide de proteger Georges");
	SetColor(15);
	printf ("\n%s\n", "////////////////////////////////");
	printf ("%s\n\n", "////////////////////////////////");
};


int patateDeForainVersDavid (int forceDuRandom, int pointDeVieDavid) {
  SetColor(8);
  printf ("\n%s", "Le random envoie une patate de Forain sur David, lui infligeant ");
  printf ("%d", forceDuRandom);
  printf ("%s\n\n", " de degats ");
  printf ("%s", "David a ");
	printf ("%d", pointDeVieDavid);
	printf ("%s\n", " points de vie");
  SetColor(15);
  printf ("\n%s\n\n", "--------------------------------");
}

int patateDeForainVersGeorges (int forceDuRandom, int pointDeVieGeorges) {
  SetColor(8);
  printf ("\n%s", "Le random envoie une patate de Forain sur Georges, lui infligeant ");
  printf ("%d", forceDuRandom);
  printf ("%s\n\n", " de degats ");
  printf ("%s", "Georges a ");
	printf ("%d", pointDeVieGeorges);
	printf ("%s\n", " points de vie");
  SetColor(15);
  printf ("\n%s\n\n", "--------------------------------");
}

int grosseBalayette (int forceDuRandom, int pointDeVieGeorges, int pointDeVieDavid) {
  SetColor(8);
  printf ("\n%s", "Le random envoie une balayette sur Georges et David, leur infligeant ");
  printf ("%d", forceDuRandom);
  printf ("%s\n\n", " de degats chacun ");
  printf ("%s", "Georges a ");
	printf ("%d", pointDeVieGeorges);
	printf ("%s\n", " points de vie");
  printf ("%s", "David a ");
  printf ("%d", pointDeVieDavid);
  printf ("%s\n", " points de vie");
  SetColor(15);
  printf ("\n%s\n\n", "--------------------------------");
}


int poingGeorgesRandom (int pointDeVieLeRandom, int forceGeorges) {
	SetColor(2);
	printf ("\n%s\n", "Georges vient de donner un coup de poing");
	printf ("%s", "Le random a perdu ");
	printf ("%d", forceGeorges*3);
	printf ("%s\n", " points de vie");
	printf ("%s", "Le random a ");
	printf ("%d", pointDeVieLeRandom);
	printf ("%s\n", " points de vie");
	SetColor(15);
	printf ("\n%s\n\n", "--------------------------------");
};

int poingDavidRandom (int pointDeVieLeRandom, int forceDavid) {
	SetColor(4);
	printf ("\n%s\n", "David vient de donner un coup de poing");
	printf ("%s", "Le random a perdu ");
	printf ("%d", forceDavid * 3);
	printf ("%s\n", " points de vie");
	printf ("%s", "Le random a ");
	printf ("%d", pointDeVieLeRandom);
	printf ("%s\n", " points de vie");
	SetColor(15);
	printf ("\n%s\n", "////////////////////////////////");
	printf ("%s\n\n", "////////////////////////////////");
};


int gameover (int pointDeVieGeorges, int pointDeVieDavid) {
	if (pointDeVieGeorges<1) {
  SetColor(2);
	printf ("%s\n", "Georges a perdu");
	}
	else if (pointDeVieDavid<1) {
  SetColor(4);
	printf ("%s\n", "David a perdu");
	}
  SetColor(15);
};

int gameoverEasterEgg (int pointDeVieGeorges, int pointDeVieDavid, int pointDeVieLeRandom) {
	if (pointDeVieGeorges<1) {
    SetColor(2);
	  printf ("%s\n", "Georges a peri au combat, vous avez perdu");
	} else if (pointDeVieDavid<1) {
    SetColor(4);
	  printf ("%s\n", "David a peri au combat, vous avez perdu");
	} else if (pointDeVieLeRandom<1) {
    SetColor(8);
  	printf ("%s\n", "Vous avez vaincu le random, BRAVO");
  }
  SetColor(15);
};

// VARIABLES
// VARIABLES

int main() {

int coffre = 0;
int joueur = 1;

int pointDeVieGeorges = 100;
int pointDeVieDavid = 100;

int forceGeorges = 1;
int forceDavid = 1;

int cooldownMorphine = 0;
int cooldownMorphineApplication = 3;
int pvRenduMorphine = 0;
int cooldownMorphineOrdinateur = 0;
int cooldownMorphineOrdinateurApplication = 3;
int pvRenduMorphineOrdinateur = 0;

int probabiliteAttaqueAdrenaline = 0;
int enchainementAdrenaline = 0;
int cooldownAdrenaline = 0;
int stackDamage = 0;
int probabiliteAttaqueAdrenalineOrdinateur = 0;
int enchainementAdrenalineOrdinateur = 0;
int cooldownAdrenalineOrdinateur = 0;
int stackDamageOrdinateur = 0;

int stunProba = 0;
int stunProbaOrdinateur = 0;
int stunDuration = 0;
int protectionDavid = 0;
int protectionGeorges =0;

int easterEgg = 0;

int pointDeVieLeRandom = 250;
int forceDuRandom = 10;
int viserAleatoire = 0;
int coffreRandom = 0;

// DÉBUT DU JEU
// DÉBUT DU JEU

SetColor(15);
// petite Introduction
printf ("\n\n%s\n\n", "Vous etes Georges et vous allez cassez la gueule a David");

//Boucle permettant le combat entre 1 joueur et "l'ia"
while (pointDeVieDavid>0 && pointDeVieGeorges>0 && easterEgg < 30) {
  //Attaques disponibles pour le joueur (ainsi que l'ordinateur)
if (pointDeVieDavid > 0 && pointDeVieGeorges > 0){
  if (cooldownMorphine == 0){
	printf ("%s\n", "Taper 1 pour donner un coup de poing ; Taper 2 pour vous concentrer ; Taper 3 pour le destabiliser ;");
  printf ("%s\n", "Taper 4 pour utiliser de la morphine ; Taper 5 pour vous donner de l'adrenaline ");
  scanf ("%d", &coffre);
  }

//CHOIX DES ATTAQUES PAR LE JOUEUR
//CHOIX DES ATTAQUES PAR LE JOUEUR

// Coup de poing
	if (coffre == 1 && joueur == 1 && cooldownMorphine == 0){
     pointDeVieDavid = pointDeVieDavid - (forceGeorges*3);
	   poingGeorges(pointDeVieDavid, forceGeorges);
// Augmentre sa force ; concentration
	} else if (coffre == 2 && joueur == 1 && cooldownMorphine == 0) {
     forceGeorges = forceGeorges + 1;
	   laforcedeGeorges(forceGeorges);
// Baisse la force de l'adversaire ; Destabiliser
	} else if (coffre == 3 && joueur == 1 && cooldownMorphine == 0) {
     forceDavid = forceDavid - 1;
	   GeorgesDestabilise();
// Entraîne la regénération des points de vie ; 2 tours sans attaquer avant de les récupérer
	} else if (coffre == 4 && joueur == 1 && cooldownMorphine == 0) {
     cooldownMorphine = 3;
	   morphineGeorges();
     pvRenduMorphine = (rand() % (70 - 40 + 1)) + 40;
/* Permet d'enchaîner plusieurs attaques ; le nombre d'attaques est basé sur un pourcentage de réussite ;
cooldown de 3 tours pour cette attaque */
  } else if (coffre == 5 && joueur == 1 && cooldownMorphine == 0 && cooldownAdrenaline == 0) {
  	SetColor(2);
    if (enchainementAdrenaline == 0) {
  	    printf ("\n%s\n\n", "Georges utilise adrenaline");
  	    printf ("%s", "Il donne un coup de poing a David, lui enlevant ");
        printf ("%d", forceGeorges*3);
        printf ("%s\n", " points de vie");
        printf ("%s\n", "********");
        stackDamage = stackDamage + 1;
        enchainementAdrenaline = 2;
    }
    probabiliteAttaqueAdrenaline = (rand() % (2 - 1 + 1)) + 1;
    if (probabiliteAttaqueAdrenaline == 2 && enchainementAdrenaline == 2) {
        printf ("%s", "Georges donne un second coup de poing a David, lui enlevant ");
        printf ("%d", forceGeorges*3);
        printf ("%s\n", " points de vie");
        printf ("%s\n", "********");
        enchainementAdrenaline = 4;
        stackDamage = stackDamage + 1;
    }
    probabiliteAttaqueAdrenaline = (rand() % (4 - 1 + 1)) + 1;
    if (probabiliteAttaqueAdrenaline == 4 && enchainementAdrenaline == 4) {
        printf ("%s", "Georges donne un troisieme coup de poing a David, lui enlevant ");
        printf ("%d", forceGeorges*3);
        printf ("%s\n", " points de vie");
        printf ("%s\n", "********");
        enchainementAdrenaline = 10;
        stackDamage = stackDamage + 1;
    }
    probabiliteAttaqueAdrenaline = (rand() % (10 - 1 + 1)) + 1;
    if (probabiliteAttaqueAdrenaline == 10 && enchainementAdrenaline == 10) {
        printf ("%s", "Georges donne un quatrieme et dernier coup de poing a David, lui enlevant ");
        printf ("%d", forceGeorges*3);
        printf ("%s\n", " points de vie");
        printf ("%s\n", "********");
        stackDamage = stackDamage + 1;
    }
    enchainementAdrenaline = 0;
    cooldownAdrenaline = 5;
    pointDeVieDavid = pointDeVieDavid - (forceGeorges*3*stackDamage);
    stackDamage = 0;
    printf ("\n%s", "David a ");
    printf ("%d", pointDeVieDavid);
    printf ("%s\n", " points de vie");
    printf ("\n%s\n", "Votre capacite ADRENALINE ne peut plus etre utiliser pendant 5 tours");
    SetColor(15);
    printf ("\n%s\n\n", "--------------------------------");
// Lorsqu'adrénaline est sous cooldown
  } else if (coffre == 5 && joueur == 1 && cooldownMorphine == 0 && cooldownAdrenaline > 0) {
     SetColor(2);
     printf ("\n%s\n", "Adrenaline ne peut etre actuellement utiliser, vous ratez donc votre coup ");
     SetColor(15);
     printf ("\n%s\n\n", "--------------------------------");
// Lorsque le joueur rentre un chiffre correspondant à aucune capacité, cela équivaut à un coup raté
  } else if (coffre >=6 && joueur == 1 && cooldownMorphine == 0) {
     SetColor(2);
     printf ("\n%s\n", "Georges rate son coup, c'est une honte");
   	 SetColor(15);
  	 printf ("\n%s\n\n", "--------------------------------");
	}

joueur = 2;
coffre = (rand() % (10 - 6 + 1)) + 6;

Sleep(1000);

//MORPHINE ET SES COOLDOWNS POUR L'ORDINATEUR
//MORPHINE ET SES COOLDOWNS POUR L'ORDINATEUR

//Cooldown de la morphine pour l'utilisation des autres capacités
if (cooldownMorphineOrdinateur > 0) {
   cooldownMorphineOrdinateur = cooldownMorphineOrdinateur - 1;
   cooldownMorphineOrdinateurApplication = cooldownMorphineOrdinateurApplication - 1;
}

// Annonce tours restant avant de pouvoir attaquer de nouveau
  if (cooldownMorphineOrdinateur == 2) {
    SetColor(4);
    printf ("%s\n", "David doit encore attendre 2 tours avant de pouvoir attaquer de nouveau");
    SetColor(15);
    printf ("\n%s\n", "////////////////////////////////");
    printf ("%s\n\n", "////////////////////////////////");
  } else if (cooldownMorphineOrdinateur == 1) {
    SetColor(4);
    printf ("\n%s\n", "David doit encore attendre 1 tours avant de pouvoir attaquer de nouveau");
    SetColor(15);
    printf ("\n%s\n", "////////////////////////////////");
    printf ("%s\n\n", "////////////////////////////////");
  }

  // tours avant que les Pv générés par la morphine soient appliqués pour l'odinateur
   if (cooldownMorphineOrdinateurApplication == 0) {
      pointDeVieDavid = pointDeVieDavid + pvRenduMorphineOrdinateur;
      cooldownMorphineOrdinateurApplication = 3;
      SetColor(4);
      printf ("%s", "David a recuperer ");
  	  printf ("%d", pvRenduMorphineOrdinateur);
  	  printf ("%s\n", " points de vie");
      printf ("\n%s", "David a maintenant ");
      printf ("%d", pointDeVieDavid);
      printf ("%s\n", " points de vie");
      printf ("\n%s\n\n", "********************************");
      SetColor(15);
  }
   if (pointDeVieDavid > 100) {
      SetColor(4);
      printf ("%s\n", "David ne peux cependant avoir plus de 100 PV, ces PV sont donc remis a 100 ");
      printf ("\n%s\n\n", "********************************");
      SetColor(15);
      pointDeVieDavid = 100;
  }

  //Cooldown de l'adrénaline pour l'utiliser à nouveau (pour l'ordinateur)
  if (cooldownAdrenalineOrdinateur > 0) {
     cooldownAdrenalineOrdinateur = cooldownAdrenalineOrdinateur - 1;
  }

  //Permet d'éviter que les attaques fassent 0 de dégats
    if (forceGeorges == 0) {
      forceGeorges = forceGeorges + 1;
  	} else if (forceDavid == 0) {
       forceDavid = forceDavid + 1;
    }
<<<<<<< HEAD
}
=======

>>>>>>> 1f9d7f3f8cdecabc252807874f11909c4c3a6187

Sleep(1000);

//CHOIX DES ATTAQUES PAR L'ORDINATEUR
//CHOIX DES ATTAQUES PAR L'ORDINATEUR
if (pointDeVieDavid > 0 && pointDeVieGeorges > 0){
// Coup de poing
	if (coffre == 6 && joueur == 2 && cooldownMorphineOrdinateur == 0){
     pointDeVieGeorges = pointDeVieGeorges - (forceDavid*3);
	   poingDavid(pointDeVieGeorges, forceDavid);
// Augmentre sa force ; concentration
	} else if (coffre == 7 && joueur == 2 && cooldownMorphineOrdinateur == 0) {
     forceDavid = forceDavid + 1;
	   laforcedeDavid(forceDavid);
// Baisse la force de l'adversaire ; Destabiliser
	} else if (coffre == 8 && joueur == 2 && forceGeorges > 1 && cooldownMorphineOrdinateur == 0) {
     forceGeorges = forceGeorges - 1;
	   DavidDestabilise();
/* Empêche l'ordinateur d'utiliser la capacité "Destabiliser" lorsqu'il nest pas utile de le faire,
entrainant un coup de poing */
	} else if (coffre == 8 && joueur == 2 && forceGeorges == 1 && cooldownMorphineOrdinateur == 0) {
     pointDeVieGeorges = pointDeVieGeorges - (forceDavid*3);
     poingDavid(pointDeVieGeorges, forceDavid);
// Entraîne la regénération des points de vie ; 2 tours sans attaquer avant de les récupérer
  } else if (coffre == 9 && joueur == 2 && cooldownMorphineOrdinateur == 0 && pointDeVieDavid < 60) {
     cooldownMorphineOrdinateur = 3;
     morphineDavid();
     pvRenduMorphineOrdinateur = (rand() % (70 - 40 + 1)) + 40;
/* Empêche l'ordinateur d'utiliser la capacité "Morphine" lorsqu'il nest pas utile de le faire,
entrainant un coup de poing */
  } else if (coffre == 9 && joueur == 2 && cooldownMorphineOrdinateur == 0 && pointDeVieDavid >= 60) {
     pointDeVieGeorges = pointDeVieGeorges - (forceDavid*3);
     poingDavid(pointDeVieGeorges, forceDavid);
/* Permet d'enchaîner plusieurs attaques ; le nombre d'attaques est basé sur un pourcentage de réussite ;
cooldown de 3 tours pour cette attaque */
  } else if (coffre == 10 && joueur == 2 && cooldownMorphineOrdinateur == 0 && cooldownAdrenalineOrdinateur == 0) {
  SetColor(4);
    if (enchainementAdrenalineOrdinateur == 0) {
      printf ("%s\n\n", "David utilise adrenaline");
      printf ("%s", "Il donne un coup de poing a Georges, lui enlevant ");
      printf ("%d", forceDavid*3);
      printf ("%s\n", " points de vie");
      printf ("%s\n", "********");
      stackDamageOrdinateur = stackDamageOrdinateur + 1;
      enchainementAdrenalineOrdinateur = 2;
    }
    probabiliteAttaqueAdrenaline = (rand() % (2 - 1 + 1)) + 1;
    if (probabiliteAttaqueAdrenalineOrdinateur == 2 && enchainementAdrenalineOrdinateur == 2) {
      printf ("%s", "David donne un second coup de poing a Georges, lui enlevant ");
      printf ("%d", forceDavid*3);
      printf ("%s\n", " points de vie");
      printf ("%s\n", "********");
      enchainementAdrenalineOrdinateur = 4;
      stackDamageOrdinateur = stackDamageOrdinateur + 1;
    }
    probabiliteAttaqueAdrenaline = (rand() % (4 - 1 + 1)) + 1;
    if (probabiliteAttaqueAdrenalineOrdinateur == 4 && enchainementAdrenalineOrdinateur == 4) {
      printf ("%s", "David donne un troisieme coup de poing a Georges, lui enlevant ");
      printf ("%d", forceDavid*3);
      printf ("%s\n", " points de vie");
      printf ("%s\n", "********");
      enchainementAdrenalineOrdinateur = 10;
      stackDamageOrdinateur = stackDamageOrdinateur + 1;
    }
    probabiliteAttaqueAdrenaline = (rand() % (10 - 1 + 1)) + 1;
    if (probabiliteAttaqueAdrenalineOrdinateur == 10 && enchainementAdrenalineOrdinateur == 10) {
      printf ("%s", "David donne un quatrieme et dernier coup de poing a Georges, lui enlevant ");
      printf ("%d", forceDavid*3);
      printf ("%s\n", " points de vie");
      printf ("%s\n", "********");
      stackDamageOrdinateur = stackDamageOrdinateur + 1;
    }
  enchainementAdrenalineOrdinateur = 0;
  cooldownAdrenalineOrdinateur = 5;
  pointDeVieGeorges = pointDeVieGeorges - (forceDavid*3*stackDamageOrdinateur);
  stackDamageOrdinateur = 0;
  printf ("\n%s", "Georges a ");
  printf ("%d", pointDeVieGeorges);
  printf ("%s\n", " points de vie");
  printf ("\n%s\n", "La capacite ADRENALINE ne peut plus etre utiliser pendant 5 tours");
  SetColor(15);
  printf ("\n%s\n", "////////////////////////////////");
  printf ("%s\n\n", "////////////////////////////////");
// Lorsqu'adrénaline est sous cooldown
  } else if (coffre == 10 && joueur == 2 && cooldownMorphine == 0 && cooldownAdrenalineOrdinateur > 0) {
   SetColor(4);
   pointDeVieGeorges = pointDeVieGeorges - (forceDavid*3);
   poingDavid(pointDeVieGeorges, forceDavid);
}

Sleep(1000);

//MORPHINE ET SES COOLDOWNS POUR LE JOUEUR
//MORPHINE ET SES COOLDOWNS POUR LE JOUEUR

//Cooldown de la morphine pour l'utilisation des autres capacités
    if (cooldownMorphine > 0) {
       cooldownMorphine = cooldownMorphine - 1;
       cooldownMorphineApplication = cooldownMorphineApplication -1;
  	}

// tours avant que les Pv générés par la morphine soient appliqués
   if (cooldownMorphineApplication == 0) {
      pointDeVieGeorges = pointDeVieGeorges + pvRenduMorphine;
      cooldownMorphineApplication = 3;
      SetColor(2);
      printf ("%s", "Georges a recuperer ");
  	  printf ("%d", pvRenduMorphine);
  	  printf ("%s\n", " points de vie");
      printf ("\n%s", "Georges a maintenant ");
      printf ("%d", pointDeVieGeorges);
      printf ("%s\n", " points de vie");
      SetColor(15);
  }
   if (pointDeVieGeorges > 100) {
      SetColor(2);
      printf ("\n%s\n\n", "Georges ne peux cependant avoir plus de 100 PV, ces PV sont donc remis a 100 ");
      SetColor(15);
      pointDeVieGeorges = 100;
  }

// Annonce tours restant avant de pouvoir attaquer de nouveau
  if (cooldownMorphine == 2) {
    SetColor(2);
    printf ("%s\n", "Georges doit encore attendre 2 tours avant de pouvoir attaquer de nouveau");
  	SetColor(15);
  	printf ("\n%s\n\n", "--------------------------------");
	} else if (cooldownMorphine == 1) {
    SetColor(2);
    printf ("%s\n", "Georges doit encore attendre 1 tours avant de pouvoir attaquer de nouveau");
  	SetColor(15);
  	printf ("\n%s\n\n", "--------------------------------");
  }


  //Cooldown de l'adrénaline' pour l'utiliser à nouveau
  if (cooldownAdrenaline > 0) {
     cooldownAdrenaline = cooldownAdrenaline - 1;
  }
  //Permet d'éviter que les attaques fassent 0 de dégats
    if (forceGeorges == 0) {
      forceGeorges = forceGeorges + 1;
  	} else if (forceDavid == 0) {
       forceDavid = forceDavid + 1;
    }

//Compteur amenant à l'EasterEgg
  easterEgg = easterEgg + 1;
<<<<<<< HEAD
}
//Permet de désigner le vainqueur du combat et d'arrêter le jeu
  gameover (pointDeVieGeorges, pointDeVieDavid);
=======
//Permet de désigner le vainqueur du combat et d'arrêter le jeu
  gameover (pointDeVieGeorges, pointDeVieDavid, jeu);

>>>>>>> 1f9d7f3f8cdecabc252807874f11909c4c3a6187
  joueur = 1;
}

// DÉBUT EASTER EGG
// DÉBUT EASTER EGG

if (easterEgg == 30 && pointDeVieDavid>0 && pointDeVieGeorges>0){
printf ("%s\n", "*************************");
printf ("%s\n", "Votre combat contre David dure depuis un moment, peut-etre est-ce du au fait que vous ne voulez le combattre ");
Sleep(1000);
printf ("%s\n", "ou que votre endurance/force est similaire, en attendant quelqu'un est intervenu et a decider de se joindre au combat ");
Sleep(1000);
printf ("%s\n", "en vous mettant tout les deux hors d'etat de nuire. Vous et David decidez de vous allier afin de lui faire fermez");
Sleep(1000);
printf ("%s\n\n", "sa gueule, a ce vieux random.");
Sleep(1000);
printf ("%s\n", "Pour gagner ce combat, vous ainsi que David, devez rester en vie et reduire les points de vie de votre adversaire a 0");
Sleep(1000);
printf ("%s\n", "Des competences differentes vont faire leur apparition, vous adaptant a la situation et a votre adversaire");
Sleep(1000);
printf ("%s\n\n", "*************************");
}

cooldownMorphine = 0;
cooldownMorphineOrdinateur = 0;

while (pointDeVieDavid>0 && pointDeVieGeorges>0 && pointDeVieLeRandom>0 && easterEgg >= 30) {

  joueur = 0;
  if (stunDuration > 0){
    stunDuration = stunDuration -1;
  }

Sleep(1000);

  //CHOIX DES ATTAQUES PAR LE RANDOM
  //CHOIX DES ATTAQUES PAR LE RANDOM

  // Équivaut à quelle attaque il va choisir
  coffreRandom = (rand() % (2 - 1 + 1)) + 1;
  viserAleatoire = (rand() % (2 - 1 + 1)) + 1;
// viser aléatoire = 1 = David // viser aléatoire = 2 = Georges
if (pointDeVieDavid > 0 && pointDeVieGeorges > 0 && pointDeVieLeRandom > 0){
  // patate de forain est l'équivalent de coup de poing
    if (coffreRandom == 1 && joueur == 0 && viserAleatoire == 1 && stunDuration == 0){
    if (protectionDavid > 0) {
       SetColor(8);
       printf ("\n%s\n", "Le random envoie une patate de forain sur David et inflige aucun degat, David etant proteger");
       SetColor(15);
       printf ("\n%s\n", "--------------------------------");
    } else if (protectionDavid == 0) {
      pointDeVieDavid = pointDeVieDavid - forceDuRandom;
      patateDeForainVersDavid (forceDuRandom, pointDeVieDavid);
     }

    } else if (coffreRandom == 1 && joueur == 0 && viserAleatoire == 2 && stunDuration == 0) {
     if (protectionGeorges > 0) {
        SetColor(8);
        printf ("\n%s\n", "Le random envoie une patate de forain sur Georges et inflige aucun degat, Georges etant proteger");
        SetColor(15);
        printf ("\n%s\n", "--------------------------------");
     } else if (protectionGeorges == 0) {
       pointDeVieGeorges = pointDeVieGeorges - forceDuRandom;
       patateDeForainVersGeorges (forceDuRandom, pointDeVieGeorges);
      }
    // cette attaque permet de toucher à la fois David et Georges
    } else if (coffreRandom == 2 && joueur == 0 && protectionGeorges == 0 && stunDuration == 0) {
     if (protectionGeorges == 0 && protectionDavid == 0) {
       pointDeVieGeorges = pointDeVieGeorges - forceDuRandom;
       pointDeVieDavid = pointDeVieDavid - forceDuRandom;
       grosseBalayette (forceDuRandom, pointDeVieGeorges, pointDeVieDavid);
     } else if (protectionDavid == 0 && protectionGeorges > 0) {
       pointDeVieDavid = pointDeVieDavid - forceDuRandom;
       SetColor(8);
       printf ("\n%s", "Le random envoie une balayette sur Georges et David, infligeant seulement ");
       printf ("%d", forceDuRandom);
       printf ("%s\n\n", " de degats a David, Georges etant proteger ");
       printf ("%s", "Georges a ");
       printf ("%d", pointDeVieGeorges);
       printf ("%s\n", " points de vie");
       printf ("%s", "David a ");
       printf ("%d", pointDeVieDavid);
       printf ("%s\n", " points de vie");
       SetColor(15);
       printf ("\n%s\n", "--------------------------------");
     } else if (protectionGeorges == 0 && protectionDavid > 0) {
       pointDeVieGeorges = pointDeVieGeorges - forceDuRandom;
       SetColor(8);
       printf ("\n%s", "Le random envoie une balayette sur Georges et David, infligeant seulement ");
       printf ("%d", forceDuRandom);
       printf ("%s\n\n", " de degats a Georges, David etant proteger ");
       printf ("%s", "Georges a ");
       printf ("%d", pointDeVieGeorges);
       printf ("%s\n", " points de vie");
       printf ("%s", "David a ");
       printf ("%d", pointDeVieDavid);
       printf ("%s\n", " points de vie");
       SetColor(15);
       printf ("\n%s\n", "--------------------------------");
     } else if (protectionDavid > 0 && protectionGeorges > 0) {
       SetColor(8);
       printf ("\n%s\n", "Le random envoie une balayette sur Georges et David, et inflige aucun degat, David et Georges etant proteger");
       SetColor(15);
     }
    } else if (stunDuration > 0) {
      SetColor(8);
      printf ("\n%s\n", "Le random est encore sonner");
      SetColor(15);
      printf ("\n%s\n", "--------------------------------");
    }

}

if (pointDeVieDavid > 0 && pointDeVieGeorges > 0 && pointDeVieLeRandom > 0){
  protectionDavid = 0;
  joueur = 1;

<<<<<<< HEAD
Sleep(1000);
=======
if (cooldownMorphine == 0 && pointDeVieGeorges>0) {
	printf ("%s\n", "Taper 1 pour donner un coup de poing ; Taper 2 pour donner un coup de boule ; Taper 3 pour motiver David ;");
  printf ("%s\n", "Taper 4 pour utiliser de la morphine ; Taper 5 pour proteger David ");
  scanf ("%d", &coffre);
}


>>>>>>> 1f9d7f3f8cdecabc252807874f11909c4c3a6187
  //CHOIX DES ATTAQUES PAR LE JOUEUR
  //CHOIX DES ATTAQUES PAR LE JOUEUR

  if (cooldownMorphine == 0 && pointDeVieGeorges>0) {
  	printf ("%s\n", "Taper 1 pour donner un coup de poing ; Taper 2 pour donner un coup de boule ; Taper 3 pour motiver David ;");
    printf ("%s\n", "Taper 4 pour utiliser de la morphine ; Taper 5 pour proteger David ");
    scanf ("%d", &coffre);
  }


  // Coup de poing
  	if (coffre == 1 && joueur == 1 && cooldownMorphine == 0){
       pointDeVieLeRandom = pointDeVieLeRandom - (forceGeorges*3);
  	   poingGeorgesRandom(pointDeVieLeRandom, forceGeorges);
  // Capacité permettant de stun son adversaire : 25% de chance
    } else if (coffre == 2 && joueur == 1 && cooldownMorphine == 0 && stunDuration == 0) {
       stunProba = (rand() % (4 - 1 + 1)) + 1;
       coupDeBouleGeorges(forceGeorges);
       if (stunProba == 1) {
     	    printf ("%s\n", "Georges a reussi a sonner son adversaire, ce dernier ne pourra plus attaquer pendant 3 tours");
          stunDuration = 3;
          SetColor(15);
        	printf ("\n%s\n\n", "--------------------------------");
       }
       if (stunProba > 1) {
     	    printf ("\n%s\n", "Georges a rater son coup de boule");
          SetColor(15);
        	printf ("\n%s\n\n", "--------------------------------");
       }
  // Si l'ennemi est déjà stun, votre attaque rate
    } else if (coffre == 2 && joueur == 1 && cooldownMorphine == 0) {
      SetColor(2);
      printf ("\n%s\n", "Votre ennemi est deja stun, vous ratez votre coup");
      SetColor(15);
      printf ("\n%s\n\n", "--------------------------------");
  // Augmente la force de son allié
  	} else if (coffre == 3 && joueur == 1 && cooldownMorphine == 0) {
       forceDavid = forceDavid + 1;
  	   GeorgesMotive(forceDavid);
  // Entraîne la regénération des points de vie ; 2 tours sans attaquer avant de les récupérer
  	} else if (coffre == 4 && joueur == 1 && cooldownMorphine == 0) {
       cooldownMorphine = 3;
  	   morphineGeorges();
       pvRenduMorphine = (rand() % (70 - 40 + 1)) + 40;
    } else if (coffre == 5 && joueur == 1 && cooldownMorphine == 0) {
       protectionDavid = 1;
       GeorgesProtege ();
  // Lorsque le joueur rentre un chiffre correspondant à aucune capacité, cela équivaut à un coup raté
    } else if (coffre >=6 && joueur == 1 && cooldownMorphine == 0) {
       SetColor(2);
       printf ("\n%s\n", "Georges rate son coup, c'est une honte");
     	 SetColor(15);
    	 printf ("\n%s\n\n", "--------------------------------");
  	}

  joueur = 2;
  protectionGeorges = 0;
  coffre = (rand() % (10 - 6 + 1)) + 6;

Sleep(1000);

  //MORPHINE ET SES COOLDOWNS POUR L'ORDINATEUR
  //MORPHINE ET SES COOLDOWNS POUR L'ORDINATEUR

  //Cooldown de la morphine pour l'utilisation des autres capacités
  if (cooldownMorphineOrdinateur > 0) {
     cooldownMorphineOrdinateur = cooldownMorphineOrdinateur - 1;
     cooldownMorphineOrdinateurApplication = cooldownMorphineOrdinateurApplication - 1;
  }

  // Annonce tours restant avant de pouvoir attaquer de nouveau
    if (cooldownMorphineOrdinateur == 2) {
      SetColor(4);
      printf ("%s\n", "David doit encore attendre 2 tours avant de pouvoir attaquer de nouveau");
      SetColor(15);
      printf ("\n%s\n", "////////////////////////////////");
      printf ("%s\n\n", "////////////////////////////////");
    } else if (cooldownMorphineOrdinateur == 1) {
      SetColor(4);
      printf ("\n%s\n", "David doit encore attendre 1 tours avant de pouvoir attaquer de nouveau");
      SetColor(15);
      printf ("\n%s\n", "////////////////////////////////");
      printf ("%s\n\n", "////////////////////////////////");
    }

    // tours avant que les Pv générés par la morphine soient appliqués pour l'odinateur
     if (cooldownMorphineOrdinateurApplication == 0) {
        pointDeVieDavid = pointDeVieDavid + pvRenduMorphineOrdinateur;
        cooldownMorphineOrdinateurApplication = 3;
        SetColor(4);
        printf ("%s", "David a recuperer ");
    	  printf ("%d", pvRenduMorphineOrdinateur);
    	  printf ("%s\n", " points de vie");
        printf ("\n%s", "David a maintenant ");
        printf ("%d", pointDeVieDavid);
        printf ("%s\n", " points de vie");
        printf ("\n%s\n\n", "********************************");
        SetColor(15);
    }
     if (pointDeVieDavid > 100) {
        SetColor(4);
        printf ("%s\n", "David ne peux cependant avoir plus de 100 PV, ces PV sont donc remis a 100 ");
        printf ("\n%s\n\n", "********************************");
        SetColor(15);
        pointDeVieDavid = 100;
    }

    //Cooldown de l'adrénaline pour l'utiliser à nouveau (pour l'ordinateur)
    if (cooldownAdrenalineOrdinateur > 0) {
       cooldownAdrenalineOrdinateur = cooldownAdrenalineOrdinateur - 1;
    }

    //Permet d'éviter que les attaques fassent 0 de dégats
      if (forceGeorges == 0) {
        forceGeorges = forceGeorges + 1;
    	} else if (forceDavid == 0) {
         forceDavid = forceDavid + 1;
      }
}

Sleep(1000);

<<<<<<< HEAD
=======

>>>>>>> 1f9d7f3f8cdecabc252807874f11909c4c3a6187
  //CHOIX DES ATTAQUES PAR L'ORDINATEUR
  //CHOIX DES ATTAQUES PAR L'ORDINATEUR
if (pointDeVieDavid > 0 && pointDeVieGeorges > 0 && pointDeVieLeRandom > 0){
  // Coup de poing
  	if (coffre == 6 && joueur == 2 && cooldownMorphineOrdinateur == 0){
       pointDeVieLeRandom = pointDeVieLeRandom - (forceDavid*3);
  	   poingDavidRandom(pointDeVieLeRandom, forceDavid);
  // Capacité permettant de stun son adversaire : 25% de chance
    } else if (coffre == 7 && joueur == 2 && cooldownMorphineOrdinateur == 0 && stunDuration == 0) {
     stunProbaOrdinateur = (rand() % (4 - 1 + 1)) + 1;
     coupDeBouleDavid(forceDavid);
     if (stunProbaOrdinateur == 1) {
        printf ("%s\n", "David a reussi a sonner son adversaire, ce dernier ne pourra plus attaquer pendant 3 tours");
        stunDuration = 3;
        SetColor(15);
        printf ("\n%s\n", "////////////////////////////////");
        printf ("%s\n\n", "////////////////////////////////");
     }
     if (stunProbaOrdinateur > 1) {
        printf ("\n%s\n", "David a rater son coup de boule");
        SetColor(15);
        printf ("\n%s\n", "////////////////////////////////");
        printf ("%s\n\n", "////////////////////////////////");
     }
  // empêche l'ordinateur d'utiliser la capacité si l'ennemi est déjà stun
    } else if (coffre == 7 && joueur == 2 && cooldownMorphineOrdinateur == 0) {
      pointDeVieLeRandom = pointDeVieLeRandom - (forceDavid*3);
      poingDavidRandom(pointDeVieLeRandom, forceDavid);
  // Baisse la force de l'adversaire ; Destabiliser
  	} else if (coffre == 8 && joueur == 2 && forceGeorges > 1 && cooldownMorphineOrdinateur == 0) {
       forceGeorges = forceGeorges - 1;
  	   DavidDestabilise(forceGeorges);
  /* Empêche l'ordinateur d'utiliser la capacité "Destabiliser" lorsqu'il nest pas utile de le faire,
  entrainant un coup de poing */
  	} else if (coffre == 8 && joueur == 2 && forceGeorges == 1 && cooldownMorphineOrdinateur == 0) {
      pointDeVieLeRandom = pointDeVieLeRandom - (forceDavid*3);
      poingDavidRandom(pointDeVieLeRandom, forceDavid);
  // Entraîne la regénération des points de vie ; 2 tours sans attaquer avant de les récupérer
    } else if (coffre == 9 && joueur == 2 && cooldownMorphineOrdinateur == 0 && pointDeVieDavid < 60) {
       cooldownMorphineOrdinateur = 3;
       morphineDavid();
       pvRenduMorphineOrdinateur = (rand() % (70 - 40 + 1)) + 40;
  /* Empêche l'ordinateur d'utiliser la capacité "Morphine" lorsqu'il nest pas utile de le faire,
  entrainant un coup de poing */
    } else if (coffre == 9 && joueur == 2 && cooldownMorphineOrdinateur == 0 && pointDeVieDavid >= 60) {
      pointDeVieLeRandom = pointDeVieLeRandom - (forceDavid*3);
      poingDavidRandom(pointDeVieLeRandom, forceDavid);
  /* Permet d'enchaîner plusieurs attaques ; le nombre d'attaques est basé sur un pourcentage de réussite ;
  cooldown de 3 tours pour cette attaque */
    } else if (coffre == 10 && joueur == 2 && cooldownMorphineOrdinateur == 0 && cooldownAdrenalineOrdinateur == 0) {
        protectionGeorges = 1;
        DavidProtege ();
    }


  //MORPHINE ET SES COOLDOWNS POUR LE JOUEUR
  //MORPHINE ET SES COOLDOWNS POUR LE JOUEUR
Sleep(1000);
  //Cooldown de la morphine pour l'utilisation des autres capacités
      if (cooldownMorphine > 0) {
         cooldownMorphine = cooldownMorphine - 1;
         cooldownMorphineApplication = cooldownMorphineApplication -1;
    	}

  // tours avant que les Pv générés par la morphine soient appliqués
     if (cooldownMorphineApplication == 0) {
        pointDeVieGeorges = pointDeVieGeorges + pvRenduMorphine;
        cooldownMorphineApplication = 3;
        SetColor(2);
        printf ("%s", "Georges a recuperer ");
    	  printf ("%d", pvRenduMorphine);
    	  printf ("%s\n", " points de vie");
        printf ("\n%s", "Georges a maintenant ");
        printf ("%d", pointDeVieGeorges);
        printf ("%s\n", " points de vie");
        SetColor(15);
    }
     if (pointDeVieGeorges > 100) {
        SetColor(2);
        printf ("\n%s\n\n", "Georges ne peux cependant avoir plus de 100 PV, ces PV sont donc remis a 100 ");
        SetColor(15);
        pointDeVieGeorges = 100;
    }

  // Annonce tours restant avant de pouvoir attaquer de nouveau
    if (cooldownMorphine == 2) {
      SetColor(2);
      printf ("%s\n", "Georges doit encore attendre 2 tours avant de pouvoir attaquer de nouveau");
    	SetColor(15);
    	printf ("\n%s\n\n", "--------------------------------");
  	} else if (cooldownMorphine == 1) {
      SetColor(2);
      printf ("%s\n", "Georges doit encore attendre 1 tours avant de pouvoir attaquer de nouveau");
    	SetColor(15);
    	printf ("\n%s\n\n", "--------------------------------");
    }

    //Permet d'éviter que les attaques fassent 0 de dégats
      if (forceGeorges == 0) {
        forceGeorges = forceGeorges + 1;
    	} else if (forceDavid == 0) {
         forceDavid = forceDavid + 1;
      }

}
//Permet de désigner le vainqueur du combat et d'arrêter le jeu
<<<<<<< HEAD
    gameoverEasterEgg (pointDeVieGeorges, pointDeVieDavid, pointDeVieLeRandom);

=======
    gameoverEasterEgg (pointDeVieGeorges, pointDeVieDavid, jeu, pointDeVieLeRandom);
>>>>>>> 1f9d7f3f8cdecabc252807874f11909c4c3a6187
  }
}
