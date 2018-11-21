#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>


float sigmoid(float x, float y, float Theta);
float step(float x, float y, float Theta);
float sign(float x, float y, float Theta);
float sigma(float x, float y, float w);
float linear(float x, float y, float Theta);

//std::fixed
float Theta[5] = {};
float x1[4] = {};
float x2[4] = {};
float x3[4] = {};

float X[3] = { 0.1, 0.5, 0.8 };
float Y[3] = { 0.7, 0.2, 0.6 };

float w[10] = {};

int Niteration;
int p;

float Alpha;

int main()
{
	//float A = 1, B = 1, Theta;
	//
	//Theta = 1.5;
	//sign(A, B, Theta);
	//std::cout << A << " "<< B << " "<< Theta;




	float a, b, c, f, g, x1, x2;
	g = 12345675.0;
	f = 12345674.7;
	a = g - f;
	b = 2.0;
	c = 1.0;
	x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);


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