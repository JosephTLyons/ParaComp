/*
  ==============================================================================

    CompressorUI.cpp
    Created: 30 Nov 2019 2:06:24am
    Author:  Joseph Lyons

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "CompressorUI.h"

//==============================================================================
CompressorUI::CompressorUI()
{
    addAndMakeVisible (controlStripOne);
    addAndMakeVisible (controlStripTwo);

    levelSlider.setSliderStyle (Slider::LinearVertical);
    levelSlider.setTextBoxStyle(Slider::NoTextBox, false, 0, 0);

    addAndMakeVisible (levelSlider);
}

CompressorUI::~CompressorUI()
{
}

void CompressorUI::paint (Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
}

void CompressorUI::resized()
{
    FlexBox fb;
    fb.flexDirection = FlexBox::Direction::row;

    const float FLEX_VALUE = 2.5;
    fb.items.add (FlexItem (controlStripOne).withFlex (FLEX_VALUE));
    fb.items.add (FlexItem (controlStripTwo).withFlex (FLEX_VALUE));
    fb.items.add (FlexItem (levelSlider).withFlex (FLEX_VALUE));
    
    fb.performLayout (getLocalBounds().toFloat());
}
