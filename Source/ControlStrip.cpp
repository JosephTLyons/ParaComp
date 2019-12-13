/*
  ==============================================================================

    ControlStrip.cpp
    Created: 30 Nov 2019 1:39:59am
    Author:  Joseph Lyons

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "ControlStrip.h"
#include "UIColors.h"

//==============================================================================
ControlStrip::ControlStrip()
    : threeWayToggleOne (3),
      threeWayToggleTwo (3)
{
    addAndMakeVisible (threeWayToggleOne);
    addAndMakeVisible (threeWayToggleTwo);

    rotaryKnob.setTextBoxStyle (Slider::TextBoxBelow, false, 70, 25);
    rotaryKnob.setSliderStyle (Slider::RotaryVerticalDrag);

    rotaryKnob.setColour (Slider::ColourIds::thumbColourId, UIColors::getSliderThumbColor());
    rotaryKnob.setColour (Slider::ColourIds::rotarySliderOutlineColourId, UIColors::getSliderBackgroundColor());
    rotaryKnob.setColour (Slider::ColourIds::rotarySliderFillColourId, UIColors::getSliderForegroundColor());

    addAndMakeVisible (rotaryKnob);
}

ControlStrip::~ControlStrip()
{
}

void ControlStrip::paint (Graphics& g)
{
    g.fillAll (UIColors::getBackgroungColor());
}

void ControlStrip::resized()
{
    FlexBox fb;
    fb.flexDirection = FlexBox::Direction::column;

    const float FLEX_VALUE = 2.5;
    const short unsigned int MAX_HEIGHT = 100;
    fb.items.add (FlexItem (threeWayToggleOne).withFlex (FLEX_VALUE).withMaxHeight (MAX_HEIGHT));
    fb.items.add (FlexItem (threeWayToggleTwo).withFlex (FLEX_VALUE).withMaxHeight (MAX_HEIGHT));
    fb.items.add (FlexItem (rotaryKnob).withFlex (FLEX_VALUE).withMaxHeight (MAX_HEIGHT));
    fb.justifyContent = FlexBox::JustifyContent::spaceAround;
    
    fb.performLayout (getLocalBounds().toFloat());
}
