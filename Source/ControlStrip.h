/*
  ==============================================================================

    ControlStrip.h
    Created: 30 Nov 2019 1:39:59am
    Author:  Joseph Lyons

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "ThreeWayToggle.h"

//==============================================================================
/*
*/
class ControlStrip    : public Component
{
public:
    ControlStrip();
    ~ControlStrip();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ControlStrip);

    ThreeWayToggle threeWayToggleOne;
    ThreeWayToggle threeWayToggleTwo;

    Slider rotaryKnob;
};
