/*
 * V1053MidiSynth.h
 * A library for MusicShield 2.0
 *
 * Copyright (c) 2012 seeed technology inc.
 * Website    : www.seeed.cc
 * Author     : Jack Shao (jacky.shaoxg@gmail.com)
 * Create Time: Mar 2014
 * Change Log :
 *
 * The MIT License (MIT)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef V1053MidiSynth_H
#define V1053MidiSynth_H

#include "vs10xx.h"
#include  <avr/pgmspace.h>

/*****************class for the music player*******************/
class V1053MidiSynth
{
public:
  V1053MidiSynth(uint8_t _VS_XRESET, uint8_t _VS_DREQ, uint8_t _VS_XDCS, uint8_t _VS_XCS);
  void begin(void);
  void midiDemoPlayer(void);		//oliver wang
  //for Midi Player
  void midiWriteData(byte cmd, byte high, byte low);
  void midiNoteOn(byte channel, byte note, byte rate);
  void midiNoteOff(byte channel, byte note, byte rate);
  void midiSendByte(byte data);
private:
  uint8_t VS_XRESET;
  uint8_t VS_DREQ;
  uint8_t VS_XDCS;
  uint8_t VS_XCS;
};

#endif
