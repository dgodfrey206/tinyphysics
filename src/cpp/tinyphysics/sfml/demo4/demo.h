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

class Demo4State: public State
{
public:
    
    Demo4State(Application* application);
    void onKeyPressed(sf::Keyboard::Key key, uint modifiers) override;
    void onMouseClicked(sf::Mouse::Button button, sf::Vector2f position) override;
    void onMouseMoved(sf::Vector2f position) override;
    void update(double dtime) override;
    void draw(double dtime) override;
    
private:
    //Attributes
    sf::Texture mSpaceBackground;
    sf::View mView;
    sf::Vector2f mBackgroundTextRect;
    sf::Sprite mBackgroundSprite;
    std::vector<sf::Texture> mFighterTextures;
    sf::Sprite mFighterSprite;
};

class Demo4: public Application
{
public:
    
    Demo4();
    ~Demo4();
    
private:
    State* mDefaultState;
    State* mFpsCounterState;
};


}

#endif /* TINYPHYSICS_SFML_DEMO3_DEMO_H */

