#include "Point.h"
#include "snake.h"
#include "Board.h"
#include <iostream>


using namespace std ;

snake::snake()
{
    for(int x = 0; x < longueur; x++)
    {
        serpent[x].setPoint(0,x);
    }
}


snake::snake(int x,int y)
{
    for(int d = 0; d < longueur; d++)
    {
        serpent[d].setPoint(x,d+y);
    }
}


void snake::affichSerpent()
{
    /**Parcours du tableau*/
    for(int d = 0; d < longueur; d++)
    {
        serpent[d].drawPoint(); /** utilisation de la méthode drawPoint*/
    }
}

void snake::move(int direction)
{
    for(int d = longueur; d > 0 ; d--)
    {
        serpent[d].erasePoint();
        serpent[d] = serpent[d-1];

    }

    if(direction == 1)
    {
        serpent[0].moveUp();
    }

    else if(direction == 2)
    {
        serpent[0].moveDown();
    }
    else if(direction == 3)
    {
        serpent[0].moveLeft();
    }
    else if(direction == 4)
    {
        serpent[0].moveRight();
    }

}

bool snake::checkColisionWithBoard()//mort serpent rebord de map
{
    Board *b;
    b = Board::getInstance(); // on recup l'instance de board
    if (serpent[0].getX() == 0 || serpent[0].getX() == b->getXSize()-1) return TRUE;
    if (serpent[0].getY() == 0 || serpent[0].getY() == b->getYSize()-1) return TRUE;
    return FALSE;
}
bool snake::checkColisionWithSnake()//mort serpent touche corp ou queue
{

    for(int i = 1; i < longueur; i++)
    {
        if(serpent[0] == serpent[i]) return TRUE;
    }
    return FALSE;
}

