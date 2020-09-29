#include "vector2d.h"


namespace tinyphysics
{
    Vector2D::Vector2D(): Coord2D(0., 0.)
    { }
    
    Vector2D::Vector2D(double x, double y): Coord2D(x, y)
    { }
    
    Vector2D::Vector2D(const Point2D& point1, const Point2D& point2):
        Coord2D(point2.getX() - point1.getX(), point2.getY() - point1.getY())
    { }
}
