#ifndef TINYPHYSICS_GEOMETRY_RECTANGLE2D_H
#define TINYPHYSICS_GEOMETRY_RECTANGLE2D_H

#include "polygon2d.h"
#include "point2d.h"

namespace tinyphysics
{

class Rectangle2D: public Polygon2D
{
public:
    
    /**
     * @brief Constructor.
     * 
     * Build a rectangle between given bottom-left point and top-right point.
     * The rectangle is supposed to be parallel to X and Y axes.
     * 
     * @param bottomLeft bottom-left point
     * @param topRight top-right point
     */
    Rectangle2D(const Point2D& bottomLeft, const Point2D& topRight);
    
    /**
     * @brief Constructor.
     * 
     * Build a rectangle from three points.
     * The third point is projected onto a perpendicular line to the line 
     * defined by the first two points and passign by the second point.
     * 
     * @param bottomLeft bottom-left point
     * @param bottomRight bottom-right point
     * @param point point to be projected.
     */
    Rectangle2D(const Point2D& bottomLeft, 
                const Point2D& bottomRight, 
                const Point2D& point);

    /**
     * @brief Virtual copy constructor.
     */
    Shape2D* clone() const override;
    
    /**
     * @brief Return rectangle area.
     */
    double getArea() const override;
    
    /**
     * @brief Return rectangle width (along X axis).
     */
    double getWidth() const;
    
    /**
     * @brief Return rectangle height (along Y axis).
     */
    double getHeight() const;

};

}


#endif /* TINYPHYSICS_GEOMETRY_RECTANGLE2D_H */
