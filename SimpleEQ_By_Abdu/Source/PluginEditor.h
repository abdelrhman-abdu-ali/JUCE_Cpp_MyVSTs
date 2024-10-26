/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class SimpleEQ_By_AbduAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    SimpleEQ_By_AbduAudioProcessorEditor (SimpleEQ_By_AbduAudioProcessor&);
    ~SimpleEQ_By_AbduAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SimpleEQ_By_AbduAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SimpleEQ_By_AbduAudioProcessorEditor)
};
