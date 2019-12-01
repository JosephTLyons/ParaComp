/*
  ==============================================================================

    CompressorUI.h
    Created: 30 Nov 2019 2:06:24am
    Author:  Joseph Lyons

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "ControlStrip.h"

//==============================================================================
/*
*/
class CompressorUI    : public Component
{
public:
    CompressorUI();
    ~CompressorUI();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CompressorUI)

    ControlStrip controlStripOne;
    ControlStrip controlStripTwo;
    
    Slider levelSlider;
};
