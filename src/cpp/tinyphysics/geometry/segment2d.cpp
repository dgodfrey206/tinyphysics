#include "segment2d.h"
#include "algorithms.h"

namespace tinyphysics
{

Segment2D::Segment2D(const Point2D& point1, const Point2D& point2)
        :Line2D(point1, point2)
{ }

double Segment2D::getLength() const
{
    return distance(getFirstPoint(), getSecondPoint());
}

} // namespace tinyphysics

