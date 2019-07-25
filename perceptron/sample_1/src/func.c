/* Andre Augusto Giannotti Scota (a2gs)                              
 * andre.scota@gmail.com
 *
 *
 *
 * MIT License
 *
 */

/* func.c
 *
 *  Who     | When       | What
 *  --------+------------+----------------------------
 *   a2gs   | 18/07/2019 | Creation
 *          |            |
 */

float weight(float prevWeight, float learningRate, float error, float input)
{
 	return(prevWeight + (learningRate * error * input));
}

float activationFunction(float weights[], unsigned int wLen)
{
	unsigned int i = 0;
	float ret = 0.0;

	for(i = 0; i < wLen; i++){
		ret += weights[i];
	}

	return(ret);
}

float deltaErrorCorrection(float prevError, float desired)
{
	return(desired - prevError);
}

float TransferFunction_BinaryStep(float af)
{
	return(af <= 0 ? 0 : 1);
}
