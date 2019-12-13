/*
  ==============================================================================

    UIColors.h
    Created: 9 Dec 2019 10:24:23pm
    Author:  Joseph Lyons

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class UIColors
{
private:
    UIColors() {}
public:
    static Colour getBackgroungColor() { return Colour (47, 27, 49); }

    static Colour getSliderBackgroundColor() { return Colour (81, 47, 85); }
    static Colour getSliderForegroundColor() { return Colour (150, 49, 142); }
    static Colour getSliderThumbColor() { return Colour (228, 217, 228); }
};
