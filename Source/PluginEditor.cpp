/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "UIColors.h"

//==============================================================================
ParaCompAudioProcessorEditor::ParaCompAudioProcessorEditor (ParaCompAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    setSize (1200, 500);

    addAndMakeVisible (compressorUIOne);
    addAndMakeVisible (compressorUITwo);
    addAndMakeVisible (compressorUIThree);
    addAndMakeVisible (compressorUIFour);
}

ParaCompAudioProcessorEditor::~ParaCompAudioProcessorEditor()
{
}

//==============================================================================
void ParaCompAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll (UIColors::getBackgroungColor());
}

void ParaCompAudioProcessorEditor::resized()
{
    FlexBox fb;
    fb.flexDirection = FlexBox::Direction::row;

    const float FLEX_VALUE = 2.5;
    fb.items.add (FlexItem (compressorUIOne).withFlex (FLEX_VALUE));
    fb.items.add (FlexItem (compressorUITwo).withFlex (FLEX_VALUE));
    fb.items.add (FlexItem (compressorUIThree).withFlex (FLEX_VALUE));
    fb.items.add (FlexItem (compressorUIFour).withFlex (FLEX_VALUE));

    fb.performLayout (getLocalBounds()
        .withSizeKeepingCentre (getWidth() - 80, getHeight() - 40)
        .toFloat());
}
