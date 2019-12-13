/*
  ==============================================================================

    NWayToggle.cpp
    Created: 30 Nov 2019 12:37:03am
    Author:  Joseph Lyons

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "NWayToggle.h"
#include "UIColors.h"

//==============================================================================
NWayToggle::NWayToggle (const unsigned short int numberOfToggles)
{
    for (unsigned short int i = 0; i < numberOfToggles; i++)
    {
        toggleButtons.add (new ToggleButton());
        addAndMakeVisible (toggleButtons[i]);
        toggleButtons[i]->addListener (this);

        toggleButtons[i]->setColour(ToggleButton::ColourIds::tickColourId, UIColors::getSliderThumbColor());
        toggleButtons[i]->setColour(ToggleButton::ColourIds::textColourId, UIColors::getSliderThumbColor());
    }
}

NWayToggle::~NWayToggle()
{
}

void NWayToggle::paint (Graphics& g)
{
}

void NWayToggle::resized()
{
    FlexBox fb;
    fb.flexDirection = FlexBox::Direction::column;

    for (unsigned short int i = 0; i < toggleButtons.size(); i++)
        fb.items.add (FlexItem (*toggleButtons[i]).withFlex (2.5));
    
    fb.performLayout (getLocalBounds().toFloat());
}

void NWayToggle::buttonClicked (Button* buttonThatWasClicked)
{
    for (unsigned short int i = 0; i < toggleButtons.size(); i++)
    {
        if (buttonThatWasClicked == toggleButtons[i])
            toggleButtons[i]->setToggleState (true, dontSendNotification);

        else
            toggleButtons[i]->setToggleState (false, dontSendNotification);
    }
}
