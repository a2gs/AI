#ifndef __AI_FUNC__
#define __AI_FUNC__

float weight(float prevWeight, float learningRate, float error, float input);
float activationFunction(float weights[], unsigned int wLen);
float deltaErrorCorrection(float prevError, float desired);
float TransferFunction_BinaryStep(float af);

#endif
