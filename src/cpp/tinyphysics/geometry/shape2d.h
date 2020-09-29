#ifndef TINYPHYSICS_GEOMETRY_SHAPE2D_H
#define TINYPHYSICS_GEOMETRY_SHAPE2D_H

#include "point2d.h"

namespace tinyphysics
{

/**
 * @brief Abstract base class for all geometrical 2D shapes
 */
class Shape2D
{
public:
    
    /**
     * @brief Destructor.
     */
    virtual ~Shape2D() = default;
    
    /**
     * @brief Virtual copy constructor.
     */
    virtual Shape2D* clone() const = 0;
    
    /**
     * @brief Return shape area.
     */
    virtual double getArea() const = 0;
    
    //void setRotationPoint(const Point2D& point);
    //void rotate(double angle);
    //void translate(const Vector2D& vect);
    //void scale(double float);
    
protected:
    
    /**
     * @brief Constructor.
     */
    Shape2D() = default;

    /**
     * @brief Copy constructor.
     * 
     * @param other object to be copied from
     */
    Shape2D(const Shape2D& other) = default;
    
    /**
     * @brief Move constructor.
     * 
     * @param other object to be moved from
     */    
    Shape2D(Shape2D&& other) = default;
    
    /**
     * @brief Assignment operator.
     * 
     * @param other object to be assigned from
     */
    Shape2D& operator=(const Shape2D& other) = default;
    
    /**
     * @brief Move assignement operator.
     * 
     * @param other object to be moved-assigned from
     */    
    Shape2D& operator=(Shape2D&& other) = default;

    //Attributes
    //Point2D mRotationPoint; //rotation point
    
};

}

#endif /* TINYPHYSICS_GEOMETRY_SHAPE2D_H */
