#include "../header/window.h"
#include <stdio.h>
#include "../../../SDL2/include/SDL2/SDL.h"

//fonction de creation de fenetre, mise en place de tout les trucs importants de SDL (a documenter plus par la suite)

int initialiser_fenetre(){
  int i; // a enlever
  //initialisation de SDL---------------------------------------------------------------
  if (SDL_Init(SDL_INIT_VIDEO) != 0 ) {
      fprintf(stdout,"Échec de l'initialisation de la SDL (%s)\n",SDL_GetError());
      return -1;
  }else{
    //creation de la fenetre-------------------------------------------------------------
    SDL_Window * pWindow = NULL;
    pWindow = SDL_CreateWindow(
      "UnivArena", //nom fenetre
      SDL_WINDOWPOS_CENTERED, //x fenetre centré
      SDL_WINDOWPOS_CENTERED, //y fenetre centré
      1600, //largeur fenetre
      900, //hauteur fenetre, deux valeurs à modifier potentiellement, a voir avec redimensionnement de la fenetre
      SDL_WINDOW_RESIZABLE //fenetre redimensioable
    );
    if(pWindow){
      scanf("%i", &i);
      SDL_DestroyWindow(pWindow);
    }else{
      printf("erreur de creation de fenetre\n");
      return -1;
    }
  }

}
