#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>


float sigmoid(float x, float y, float Theta);
float step(float x, float y, float Theta);
float sign(float x, float y, float Theta);
float sigma(float x, float y, float w);
float linear(float x, float y, float Theta);

//std::fixed
float Theta = 0.2f;
float X1;
float X2;
float X3;

float X[3] = { 0.1, 0.5, 0.8 };
float Y[3] = { 0.7, 0.2, 0.6 };

float W1;
float W2;
float W3;

int main()
{

//	X1 = 0.1;
//	X2 = 0.5;
//	X3 = 0.8;
//
//	W1 = 0.7;
//	W2 = 0.2;
//	W3 = 0.6;
	



	std::cin.get();

	return 0;
}





float sign(float x, float y, float Theta)
{
	if (x >= (Theta - 0.00000001f))
	{
		y = 1;
	}
	else if (x < Theta)
	{
		y = -1;

	}

	return y;
}

float step(float x, float y, float Theta)
{
	if (x >= (Theta - 0.00000001f))
	{
		y = 1;
	}
	else if (x < Theta)
	{
		y = 0;

	}

	return y;
}


float sigmoid(float x, float y, float Theta)
{


	float epow = pow(M_E, (-(x - Theta)));

	y = 1 / (1 + epow);

	return y;
}


float sigma(float x, float y, float w)
{

	y += x * w;
	return y;
}

float linear(float x, float y, float Theta)
{


	return x - Theta;
}