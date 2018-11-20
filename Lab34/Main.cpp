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
	
//	X1 = 0.1;
//	X2 = 0.5;
//	X3 = 0.8;
//
//	W1 = 0.7;
//	W2 = 0.2;
//	W3 = 0.6;
	
	Niteration = 10000;
	// Number of iterations(by this number, you should have
		//the result, otherwise, there may be something wrong in your code.
		// Set initial weights(normally they are random numbers, but for
			// simplicity, in this experiment we set to those values
	w(1, 3) = 0.5; w(2, 3) = 0.4;
	w(1, 4) = 0.9; w(2, 4) = 1.0;
	w(3, 5) = -1.2; w(4, 5) = 1.1;
	// Set threshold theta(for each neuron) and learning rate
		Theta(3) = 0.8; Theta(4) = -0.1; Theta(5) = 0.3;
	Alpha = 0.1;
	//Prepare training data - inputs and correct outputs according to the
		//decision table
	x1(1) = 1; x2(1) = 1; Yd5(1) = 0;
	x1(2) = 0; x2(2) = 1; Yd5(2) = 1;
	x1(3) = 1; x2(3) = 0; Yd5(3) = 1;
	x1(4) = 0; x2(4) = 0; Yd5(4) = 0;
	p = 1;
	//iteration numb	4
		while
			p <= (Niteration - 4)
			EpocSumError = 0;
	// Innitiate the termination condition value
		for
			i = 1:4
			p
			// print iteration number
			// Calculate output for neuron 3
			X(3) = x1(i)*w(1, 3) + x2(i)*w(2, 3);
	// Activation Function - change to Sigmoid function
		//if X(3) >= (Theta(3) - 0.00000001)
		// y(3) = 1;
	//else
		//    y(3) = 0;
	//end
		y(3) = 1 / (1 + (exp(1)) ^ (-(X(3) - Theta(3))));
	// Calculate output for neuron 4
		X(4) = x1(i)*w(1, 4) + x2(i)*w(2, 4);
	// Activation Function - change to Sigmoid function
		//         if X(4) >= (Theta(3) - 0.00000001)
		// y(4) = 1;
	//         else
		//             y(4) = 0;
	//         end
		y(4) = 1 / (1 + (exp(1)) ^ (-(X(4) - Theta(4))));
	// Calculate output for neuron 5
		X(5) = y(3)*w(3, 5) + y(4)*w(4, 5);
	% Activation Function - change to Sigmoid function
		//         if X(5) >= (Theta(3) - 0.00000001)
		// y(5) = 1;
	//         else
		//             y(5) = 0;
	//         end
		y(5) = 1 / (1 + (exp(1)) ^ (-(X(5) - Theta(5))));
	// Back propagate the error and use the learning rule to update the
		// weights
		// Starting from neuron 5
		e(5) = Yd5(i) - y(5)
		Delta(5) = y(5)*(1 - y(5))*e(5)
		Wcurrent(3, 5) = w(3, 5);
	// safe the current value before updating it
		Wcurrent(4, 5) = w(4, 5);
	// safe the current value before updating it
		w(3, 5) = w(3, 5) + Alpha * y(3)*Delta(5);
	w(4, 5) = w(4, 5) + Alpha * y(4)*Delta(5);
	Theta(5) = Theta(5) + Alpha * (-1)*Delta(5);
	// neuron 3
		// e(3) = Wcurrent(3, 5)*e(5);
	Delta(3) = y(3)*(1 - y(3))*Delta(5)*Wcurrent(3, 5);
	w(1, 3) = w(1, 3) + Alpha * x1(i)*Delta(3);
	w(2, 3) = w(2, 3) + Alpha * x2(i)*Delta(3);
	Theta(3) = Theta(3) + Alpha * (-1)*Delta(3);
	// neuron 4
		// e(4) = Wcurrent(4, 5)*e(5);
	Delta(4) = y(4)*(1 - y(4))*Delta(5)*Wcurrent(4, 5);
	w(1, 4) = w(1, 4) + Alpha * x1(i)*Delta(4);
	w(2, 4) = w(2, 4) + Alpha * x2(i)*Delta(4);
	Theta(4) = Theta(4) + Alpha * (-1)*Delta(4);
	5
		// Accumulating the sum of errors in the Epoc
		// Recalculate the error at the end e(5) after updating all the
		// weights and Thetas
		tX(3) = x1(i)*w(1, 3) + x2(i)*w(2, 3);
	ty(3) = 1 / (1 + (exp(1)) ^ (-(tX(3) - Theta(3))));
	tX(4) = x1(i)*w(1, 4) + x2(i)*w(2, 4);
	ty(4) = 1 / (1 + (exp(1)) ^ (-(tX(4) - Theta(4))));
	tX(5) = ty(3)*w(3, 5) + ty(4)*w(4, 5);
	ty(5) = 1 / (1 + (exp(1)) ^ (-(tX(5) - Theta(5))));
	te(5) = Yd5(i) - ty(5)
		// Squared error
		EpocSumError = EpocSumError + (te(5)) ^ 2;
	p = p + 1;
	end
		// for i = 1:4
		// The training process is repeted unitl the sum of of squared error in
		// the Epoc is less than, for example, 0.001. *** Put termination
		condition here ****
		EpocSumError
		end
		// while p <= (Niteration - 4


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