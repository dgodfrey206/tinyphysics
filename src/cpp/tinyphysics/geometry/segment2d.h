#ifndef TINYPHYSICS_GEOMETRY_SEGMENT2D_H
#define TINYPHYSICS_GEOMETRY_SEGMENT2D_H

#include "tinyphysics/geometry/line2d.h"

namespace tinyphysics
{

class Segment2D: public Line2D
{
    
public:
    
    /**
     * @brief Constructor.
     * 
     * @param point1 first point
     * @param point2 second point
     */
    Segment2D(const Point2D& point1, const Point2D& point2);
    
    /**
     * @brief Return length of segment.
     */
    double getLength() const;
        
};

} // namespace tinyphysics

#endif /* TINYPHYSICS_GEOMETRY_SEGMENT2D_H */

