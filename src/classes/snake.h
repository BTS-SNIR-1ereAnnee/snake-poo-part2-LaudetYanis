/**

Classe de gestion du serpent (déplacement, manger fruits)
*/


#include <iostream>
#include "Point.h"
#include "Board.h"




class snake
{
public:

    /** Default constructor */
    snake();
    /** Constructeur
     * \param x position sur l'axe des x
     * \param y position sur l'axe des y
     */
    snake (int x, int y);

    /** déplace le snake
     * \param direction la direction du déplacement
     */
    void move(int direction); // déplacement du serpent


    /** affiche le serpent
    */
    void affichSerpent();

    /** vérifie que le serpent ne touche pas les bords
    * \return true en cas de collision
    */
    bool checkColisionWithBoard();


private:
    /** tableau de point, corps du serpent*/
    Point serpent[50];
    /** longueur du serpent */
    int longeur = 3;
};
