/*
  ==============================================================================

    ThreeWayToggle.cpp
    Created: 30 Nov 2019 12:37:03am
    Author:  Joseph Lyons

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "ThreeWayToggle.h"

//==============================================================================
ThreeWayToggle::ThreeWayToggle()
{
    addAndMakeVisible (toggleOne);
    addAndMakeVisible (toggleTwo);
    addAndMakeVisible (toggleThree);

    toggleOne.addListener (this);
    toggleTwo.addListener (this);
    toggleThree.addListener (this);
}

ThreeWayToggle::~ThreeWayToggle()
{
}

void ThreeWayToggle::paint (Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
}

void ThreeWayToggle::resized()
{
    FlexBox fb;
    fb.flexDirection = FlexBox::Direction::column;

    const unsigned int FLEX_VALUE = 2.5;
    fb.items.add (FlexItem (toggleOne).withFlex (FLEX_VALUE));
    fb.items.add (FlexItem (toggleTwo).withFlex (FLEX_VALUE));
    fb.items.add (FlexItem (toggleThree).withFlex (FLEX_VALUE));
    
    fb.performLayout (getLocalBounds().toFloat());
}

void ThreeWayToggle::buttonClicked (Button* buttonThatWasClicked)
{
    toggleOne.setToggleState (false, dontSendNotification);
    toggleTwo.setToggleState (false, dontSendNotification);
    toggleThree.setToggleState (false, dontSendNotification);

    if (buttonThatWasClicked == &toggleOne)
        toggleOne.setToggleState (true, dontSendNotification);

    else if (buttonThatWasClicked == &toggleTwo)
        toggleTwo.setToggleState (true, dontSendNotification);

    else
        toggleThree.setToggleState (true, dontSendNotification);
}
