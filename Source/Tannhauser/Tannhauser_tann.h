/*
 * DO NOT MODIFY. THIS CODE IS MACHINE GENERATED BY THE TANNHÄUSER PD COMPILER.
 * THIS HEADER DEFINES THE EXTERNAL TANNHÄUSER API.
 */

#ifndef _TANNHAUSER_TANN_H_
#define _TANNHAUSER_TANN_H_

#include "TannBase.h"

#define Context(_x) ((Tann_tann *) (_x))

// object includes
#include "DspAdd.h"
#include "DspMultiply.h"
#include "DspOscillator.h"
#include "MessageAdd.h"
#include "MessageMultiply.h"

typedef struct Tann_tann {
	TannBase base;
	
	// objects
	DspOsc dOsc_yd3Kz;
	DspOsc dOsc_lFWZE;
	MessageAdd mAdd_DUfyp;
	MessageMultiply mMultiply_2cB96;
	MessageAdd mAdd_n5QY1;
	MessageMultiply mMultiply_vyKkT;
} Tann_tann;

Tann_tann *ctx_tann_new(int numInputChannels, int numOutputChannels, int nominalBlockSize, double sampleRate);

void ctx_tann_free(Tann_tann *c);

/**
 * Note that the block size (n) may be different from the nominal block size reported at
 * initialisation. Note that input and output buffers _MUST_ be independent non-overlapping
 * regions in memory.
 */
void ctx_tann_process(Tann_tann *_c, float *inputBuffers, float *outputBuffer, int n);

static inline TannBase *ctx_tann_getBase(Tann_tann *_c) {
	return &_c->base;
}

#endif // _TANNHAUSER_TANN_H_
