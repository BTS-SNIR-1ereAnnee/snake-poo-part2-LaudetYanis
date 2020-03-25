#include "Point.h"
#include "Board.h"
#include <iostream>


using namespace std;

Point::Point()
{
    m_x = m_y = 10;
	cout<<"quelque chose"<< endl;
}
Point::Point(int x, int y)
{
    this->m_x = x;
    this->m_y = y;
	cout<<"quelque chose"<< endl;
}

void Point::setPoint(int x, int y)
{
    this->m_x = x;
    this->m_y = y;
}

void Point::moveDown()
{
    m_y++;
}

void Point::moveUp()
{
    m_y--;
}

void Point::moveRight()
{
    m_x++;
}
void Point::moveLeft()
{
    m_x--;
}

int Point::getX() const
{
    return m_x;
}


void Point::setX(int val)
{
    m_x = val;
}

int Point::getY() const
{
    return m_y;
}

void Point::setY(int val)
{
    m_y = val;
}


void Point::drawPoint()
{
    Board *b;
    b = Board::getInstance(); // dessine les points
    b->dessinerPoint(*this);
}

void Point::erasePoint()
{
    Board *b;
    b = Board::getInstance(); //efface les points
    b->effacerPoint(*this);
}

void Point::debug()
{
    cout << "(" << this->m_x << "," << this->m_y << ")";
}

Point::~Point()
{
    //dtor
}

