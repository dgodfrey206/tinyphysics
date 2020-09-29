#ifndef TINYPHYSICS_SFML_DEMO3_DEMO_H
#define TINYPHYSICS_SFML_DEMO3_DEMO_H

//STL headers
#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <cstdlib>

//Tinyphysics headers
#include "tinyphysics/sfml/application.h"
#include "tinyphysics/sfml/fpscounter.h"
#include "tinyphysics/sfml/color.h"
#include "tinyphysics/geometry/rectangle2d.h"
#include "tinyphysics/geometry/point2d.h"
#include "tinyphysics/geometry/algorithms.h"

namespace tinyphysics
{

struct Particle
{    
    Point2D position;      //Current position
    Vector2D speed;        //Speed
    double weight;         //Weight used for gravitational attraction
    double color;          //Hue value
    double luminance;      //Minimum distance to attractor
};

class Demo3State: public State
{
public:
    
    Demo3State(Application* application);
    void onKeyPressed(sf::Keyboard::Key key, uint modifiers) override;
    void onMouseClicked(sf::Mouse::Button button, sf::Vector2f position) override;
    void onMouseMoved(sf::Vector2f position) override;
    void update(double dtime) override;
    void draw(double dtime) override;
    
private:
    //Attributes
    sf::Texture mTexture;
    std::vector<Particle> mParticles;
    std::vector<Particle> mAttractors;
    double mMaxSpeed;
    double mMinSpeed;
    double mRepulsionMagnitude;
    Point2D mRepulsionSource;
    sf::Shader mShader;
    bool mDrawField;
};

class Demo3: public Application
{
public:
    
    Demo3();
    ~Demo3();
    
private:
    State* mDefaultState;
    State* mFpsCounterState;
    
};


}

#endif /* TINYPHYSICS_SFML_DEMO3_DEMO_H */
