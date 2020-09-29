#ifndef TINYPHYSICS_GEOMETRY_RAY2D_H
#define TINYPHYSICS_GEOMETRY_RAY2D_H

#include "line2d.h"

namespace tinyphysics
{

/**
 * @brief 2D ray class (semi-infinite line)
 */
class Ray2D: public Line2D
{
    
public:
    
    /**
     * @brief Constructor.
     * 
     * @param point point
     * @param vect direction vector
     */
    Ray2D(const Point2D& point, const Vector2D vect)
            :Line2D(point, vect)
    { }
};

}

#endif /* TINYPHYSICS_GEOMETRY_RAY2D_H */
