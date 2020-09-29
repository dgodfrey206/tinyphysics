#ifndef TINYPHYSICS_SFML_DEMO2_DEMO_H
#define TINYPHYSICS_SFML_DEMO2_DEMO_H

//STL headers
#include <iostream>
#include <vector>
#include <sstream>

//Tinyphysics headers
#include "tinyphysics/sfml/application.h"
#include "tinyphysics/sfml/color.h"
#include "tinyphysics/geometry/rectangle2d.h"
#include "tinyphysics/geometry/point2d.h"
#include "tinyphysics/geometry/algorithms.h"

namespace tinyphysics
{

class Demo2State: public State
{
public:
    
    Demo2State(Application* application);
    void onKeyPressed(sf::Keyboard::Key key, uint modifiers) override;
    void draw(double dtime) override;
    
private:
    //Attributes
    sf::Vector3f mHslColor;
    sf::Texture mTexture;
    bool mUseTexture;
    bool mUseShader;
};


class Demo2: public Application
{
public:
    
    Demo2();
    ~Demo2();
    
private:
    State* mDefaultState;
};


}

#endif /* TINYPHYSICS_SFML_DEMO2_DEMO_H */
