
#ifndef TINYPHYSICS_GEOMETRY_LINE2D_H
#define TINYPHYSICS_GEOMETRY_LINE2D_H

//Tinyphysics headers
#include "tinyphysics/geometry/point2d.h"
#include "tinyphysics/geometry/vector2d.h"


namespace tinyphysics
{

/**
 * @brief Infinite line in 2D dimension
 */
class Line2D
{
public:
    
    /**
     * @brief Constructor.
     * 
     * Build a 2D line passing by two points
     */
    Line2D(const Point2D& point1, const Point2D& point2);
    
    /**
     * @brief Constructor.
     * 
     * Build a 2D line passing by a point in the direction of provided vector
     */
    Line2D(const Point2D& point, const Vector2D& vect);
    
    /**
     * @brief Destructor.
     */
    virtual ~Line2D() = default;
    
    /**
     * @brief Copy constructor.
     * 
     * @param other object to be copied from
     */
    Line2D(const Line2D& other) = default;
    
    /**
     * @brief Move constructor.
     * 
     * @param other object to be moved from
     */
    Line2D(Line2D&& other) = default;
    
    /**
     * @brief Assignment operator.
     * 
     * @param other object to be assigned from
     */
    Line2D& operator=(const Line2D& other) = default;
    
    /**
     * @brief Move assignment operator.
     * 
     * @param other object to be moved-assigned from
     */
    Line2D& operator=(Line2D&& other) = default;

    /**
     * @brief Return direction vector.
     */
    Vector2D getDirectionVector() const;
    
    /**
     * @brief Return unit direction vector.
     */
    Vector2D getUnitDirectionVector() const;
    
    /**
     * @brief Return first point defining the line.
     */
    inline Point2D getFirstPoint() const
    {
        return mA;
    }
    
    /**
     * @brief Return first point defining the line.
     */
    inline Point2D getSecondPoint() const
    {
        return mB;
    }
    
    /**
     * @brief Create a perpendicular line passing by given point.
     * 
     * @param point
     */
    Line2D createPerpendicularLine(const Point2D& point) const;
    
    /**
     * @brief Create a parallel line passing by given point.
     * 
     * @param point
     */
    Line2D createParallelLine(const Point2D& point) const;
    

private:
    
    //Attributes
    Point2D mA;
    Point2D mB;  
};

}

#endif /* TINYPHYSICS_GEOMETRY_LINE2D_H */

