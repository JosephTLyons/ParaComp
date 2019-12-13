/*
  ==============================================================================

    NWayToggle.h
    Created: 30 Nov 2019 12:37:03am
    Author:  Joseph Lyons

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class NWayToggle    : public ToggleButton,
                      public ToggleButton::Listener
{
public:
    NWayToggle (const unsigned short int numberOfToggles);
    ~NWayToggle();

    void paint (Graphics&) override;
    void resized() override;

    virtual void buttonClicked (Button* buttonThatWasClicked) override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NWayToggle)
    OwnedArray<ToggleButton> toggleButtons;
};
