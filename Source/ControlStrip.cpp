/*
  ==============================================================================

    ControlStrip.cpp
    Created: 30 Nov 2019 1:39:59am
    Author:  Joseph Lyons

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "ControlStrip.h"

//==============================================================================
ControlStrip::ControlStrip()
{
    addAndMakeVisible (threeWayToggleOne);
    addAndMakeVisible (threeWayToggleTwo);

    rotaryKnob.setTextBoxStyle (Slider::TextBoxBelow, false, 70, 25);
    rotaryKnob.setSliderStyle (Slider::RotaryVerticalDrag);
    addAndMakeVisible (rotaryKnob);
}

ControlStrip::~ControlStrip()
{
}

void ControlStrip::paint (Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
}

void ControlStrip::resized()
{
    FlexBox fb;
    fb.flexDirection = FlexBox::Direction::column;

    const short unsigned int FLEX_VALUE = 2.5;
    const short unsigned int MAX_HEIGHT = 100;
    fb.items.add (FlexItem (threeWayToggleOne).withFlex (FLEX_VALUE).withMaxHeight (MAX_HEIGHT));
    fb.items.add (FlexItem (threeWayToggleTwo).withFlex (FLEX_VALUE).withMaxHeight (MAX_HEIGHT));
    fb.items.add (FlexItem (rotaryKnob).withFlex (FLEX_VALUE).withMaxHeight (MAX_HEIGHT));
    fb.justifyContent = FlexBox::JustifyContent::spaceAround;
    
    fb.performLayout (getLocalBounds().toFloat());
}
