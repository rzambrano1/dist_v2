#include "aux_functions.h"
#include <stdlib.h> // supports dynamic memory management

#define N2 20000     // Specify a constant value for array length - Originally: 20000000

int main()
{
	// Create 2 arrays of N floats (initialized to 0.0)
	// We will overwrite theese values to store inputs and outputs
	
	// Original: float in[N] = { 0.0f };
	float *in2 = (float*)calloc(N2, sizeof(float));
	
	// Original: float out[N] = { 0.0f };
	float *out2 = (float*)calloc(N2, sizeof(float));

	// Choose a reference value from which distances are measured
	const float ref = 0.5f;

	//Iteration loop computes array of scaled input values
	for (int i = 0; i < N2; ++i)
	{
		in2[i] = scale(i, N2);
	}

	// Single function call to compute entire distance array
	distanceArray(out2, in2, ref, N2);

	// Release the heap memory after we are done using it
	free(in2);
	free(out2);

	return 0;
}