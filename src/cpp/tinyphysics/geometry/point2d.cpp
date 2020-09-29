#include "point2d.h"
#include "vector2d.h"


namespace tinyphysics
{

Point2D::Point2D(): Coord2D(0., 0.)
{ }

Point2D::Point2D(double x, double y): Coord2D(x, y)
{ }

Point2D& Point2D::move(const Vector2D& vect)
{
    operator[](0) += vect.getX();
    operator[](1) += vect.getY();
    return *this;
}

}
