#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
	Kp = Kp_;
	Ki = Ki_;
	Kd = Kd_;

	d_error = 0.0;
	p_error = 0.0;
	i_error = 0.0;

}

void PID::UpdateError(double cte) {
	// Just taked the calculation from the lessons
	d_error = (cte - p_error);
	p_error = cte;
	i_error += cte;
}

double PID::TotalError() {
	// Just taked the calculation from the lessons
	return -Kp * p_error - Kd * d_error - Ki * i_error;
}

