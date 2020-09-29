
#ifndef TINYPHYSICS_SMFL_COLOR_H
#define TINYPHYSICS_SMFL_COLOR_H

//STL headers
#include <algorithm>
#include <cmath>

//SFML headers
#include <SFML/Graphics.hpp>

namespace tinyphysics
{

/**
 * @brief Convert a RGB color into a HSL (Hue/Saturation/Luminance) color.
 * 
 * @param color RGB color
 */
sf::Vector3f convertRgbToHslColor(sf::Color color);
    
/**
 * @brief Convert a HSL (Hue/Saturation/Luminance) color into a RGB color.
 * 
 * @param color HSL color
 */
sf::Color convertHslToRgbColor(sf::Vector3f color);

} // namespace tinyphysics

#endif /* TINYPHYSICS_SFML_COLOR_H */
