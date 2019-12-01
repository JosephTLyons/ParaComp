/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "CompressorUI.h"

//==============================================================================
/**
*/
class ParaCompAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    ParaCompAudioProcessorEditor (ParaCompAudioProcessor&);
    ~ParaCompAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    ParaCompAudioProcessor& processor;

    CompressorUI compressorUIOne;
    CompressorUI compressorUITwo;
    CompressorUI compressorUIThree;
    CompressorUI compressorUIFour;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ParaCompAudioProcessorEditor)
};
