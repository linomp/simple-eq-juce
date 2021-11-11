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
class SimpleEQ_VS2019AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    SimpleEQ_VS2019AudioProcessorEditor (SimpleEQ_VS2019AudioProcessor&);
    ~SimpleEQ_VS2019AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SimpleEQ_VS2019AudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SimpleEQ_VS2019AudioProcessorEditor)
};
