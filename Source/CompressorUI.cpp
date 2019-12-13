/*
  ==============================================================================

    CompressorUI.cpp
    Created: 30 Nov 2019 2:06:24am
    Author:  Joseph Lyons

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "CompressorUI.h"
#include "UIColors.h"

//==============================================================================
CompressorUI::CompressorUI()
{
    addAndMakeVisible (bypassButton);
    addAndMakeVisible (controlStripOne);
    addAndMakeVisible (controlStripTwo);

    levelSlider.setSliderStyle (Slider::LinearVertical);
    levelSlider.setTextBoxStyle(Slider::NoTextBox, false, 0, 0);

    levelSlider.setColour (Slider::ColourIds::thumbColourId, UIColors::getSliderThumbColor());
    levelSlider.setColour (Slider::ColourIds::backgroundColourId, UIColors::getSliderBackgroundColor());
    levelSlider.setColour (Slider::ColourIds::trackColourId, UIColors::getSliderForegroundColor());

    addAndMakeVisible (levelSlider);
}

CompressorUI::~CompressorUI()
{
}

void CompressorUI::paint (Graphics& g)
{
}

void CompressorUI::resized()
{
    FlexBox innerFb;
    innerFb.flexDirection = FlexBox::Direction::row;
//    fb.alignContent = FlexBox::AlignContent::spaceBetween;

    const float FLEX_VALUE = 2.5;
    innerFb.items.add (FlexItem (controlStripOne).withFlex (FLEX_VALUE));
    innerFb.items.add (FlexItem (controlStripTwo).withFlex (FLEX_VALUE));
    innerFb.items.add (FlexItem (levelSlider).withFlex (FLEX_VALUE));

    FlexBox outerFb;
    outerFb.flexDirection = FlexBox::Direction::column;
    outerFb.items.add (FlexItem (bypassButton).withFlex (FLEX_VALUE).withMaxHeight (30));
    outerFb.items.add (FlexItem (innerFb).withFlex (FLEX_VALUE));
    
    outerFb.performLayout (getLocalBounds().toFloat());
}
