/*
  ==============================================================================

    ThreeWayToggle.h
    Created: 30 Nov 2019 12:37:03am
    Author:  Joseph Lyons

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class ThreeWayToggle    : public ToggleButton,
                          public ToggleButton::Listener
{
public:
    ThreeWayToggle();
    ~ThreeWayToggle();

    void paint (Graphics&) override;
    void resized() override;

    virtual void buttonClicked (Button* buttonThatWasClicked) override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ThreeWayToggle)

    ToggleButton toggleOne;
    ToggleButton toggleTwo;
    ToggleButton toggleThree;
};
