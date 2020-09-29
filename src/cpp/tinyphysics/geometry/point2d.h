#ifndef TINYPHYSICS_GEOMETRY_POINT2D_H
#define TINYPHYSICS_GEOMETRY_POINT2D_H

//Tinyphysics
#include "coord2d.h"


namespace tinyphysics
{

class Vector2D;

/**
 * @brief A point in 2D space
 */
class Point2D: public Coord2D
{
public:

    /**
     * @brief Constructor.
     * 
     * A point with X = 0 and Y = 0 is created.
     */
    Point2D();
    
    /**
     * @brief Constructor.
     * 
     * @param x X coordinate
     * @param y Y coordinate
     */
    Point2D(double x, double y);
    
    /**
     * @brief Destructor.
     */
    virtual ~Point2D() = default;
    
    /**
     * @brief Copy constructor.
     * 
     * @param other object to be copied from
     */
    Point2D(const Point2D& other) = default;

    /**
     * @brief Move constructor.
     * 
     * @param other object to be moved from
     */    
    Point2D(Point2D&& other) = default;
    
    /**
     * @brief Assignment operator.
     * 
     * @param other object to be assigned from
     */
    Point2D& operator=(const Point2D& other) = default;
    
    /**
     * @brief Move assignment operator.
     * 
     * @param other object to be moved-assigned from
     */
    Point2D& operator=(Point2D&& other) = default;
    
    /**
     * @brief Move point along given vector.
     * 
     * This method return a reference to current 2D point.
     * 
     * @param vect translation vector
     * TODO test
     */
    Point2D& move(const Vector2D& vect);

};
       
} // namespace tinyphysics


#endif /* TINYPHYSICS_GEOMETRY_POINT2D_H */
