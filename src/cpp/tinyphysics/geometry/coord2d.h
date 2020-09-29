#ifndef TINYPHYSICS_GEOMETRY_COORD2D_H
#define TINYPHYSICS_GEOMETRY_COORD2D_H

//STL headers
#include <array>
#include <cmath>

namespace tinyphysics
{
    
/**
 * @brief Coordinates in 2D space
 */ 
class Coord2D
{
public:
    
    /**
     * @brief Destructor.
     */
    virtual ~Coord2D() = default;
    
    /**
     * @brief Copy constructor.
     * 
     * @param other object to be copied from
     */
    Coord2D(const Coord2D& other) = default;
    
    /**
     * @brief Move constructor.
     * 
     * @param other object to be moved from
     */
    Coord2D(Coord2D&& other) = default;
    
    /**
     * @brief Assignment operator.
     * 
     * @param other object to be assigned from
     */
    Coord2D& operator=(const Coord2D& other) = default;
    
    /**
     * @brief Move assignment operator.
     * 
     * @param other object to be assigned from
     */
    Coord2D& operator=(Coord2D&& other) = default;
    
    /**
     * @brief Return X coordinate.
     */
    inline double getX() const
    {
        return mArray[0];
    }

    /**
     * @brief Return Y coordinate.
     */    
    inline double getY() const
    {
        return mArray[1];
    }
    
    /**
     * @brief Return coordinate at given index.
     * 
     * @param index coordinate index.
     */
    inline double get(size_t index) const
    {
        return mArray[index];
    }

    /**
     * @brief Return coordinate at given index.
     * 
     * @param index coordinate index.
     */
    inline const double& operator[](size_t index) const
    {
        return mArray[index];
    }
    
    /**
     * @brief Return coordinate at given index.
     * 
     * @param index coordinate index.
     */
    inline double& operator[](size_t index)
    {
        return mArray[index];
    }

protected:
    
    /**
     * @brief Constructor.
     * 
     * @param x
     * @param y
     */
    Coord2D(double x, double y);
    
private:
    
    //Attributes
    std::array<double, 2> mArray; //hold coordinates
};
    
}



#endif /* TINYPHYSICS_GEOMETRY_COORD2D_H */
