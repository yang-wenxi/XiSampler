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
class XiSamplerAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    XiSamplerAudioProcessorEditor (XiSamplerAudioProcessor&);
    ~XiSamplerAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    XiSamplerAudioProcessor& audioProcessor;
    // Fuck you github
    juce::String shit {"github is full of shit"};
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (XiSamplerAudioProcessorEditor)
};
