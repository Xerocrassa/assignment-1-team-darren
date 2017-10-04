#include "projectile.hpp"

const double m = 1; // in kg
const double g = 9.8066; // no longer used
const double dt = 0.001;
const double k = 0.5; // in m^-1 - added
const double q = 1; //  in C - added
const double w = 2 // in s^-1 - added
const double Eo = 1 // in V m^-1 - added



//auto force(TState s) { return VecR2<double>{0, -m * g}; }
// Added
auto force(TState s) {return q * VecR3<double>{cos(k*z-w*t), sin(k*z-w*t), 0}; }

// changed from VecR2 -- Will not use this -- use Verlet instead.
auto euler_step(TState s, VecR3<double> accel) { 
  TState next;
  next.t = s.t + dt;
  next.position = s.position + (s.velocity * dt);
  next.velocity = s.velocity + (accel * dt);
  return next;
}

// added,, not sure
auto verlet_algorithm(TState s, VecR3<double) accel) {
  TState next;
  ne
}

// not yet touched
void n_steps(unsigned n, TState state0) {
  print_tstate(state0);
  if (n == 0)
    return;
  else {
    auto state = state0;
    for (unsigned j = 0; j < n; ++j) {
      state = euler_step(state, force(state) / m);
      print_tstate(state);
    }
  }
}

// not yet touched.
int main() { 
  n_steps(1200, TState{0., {0, 0.1}, {5, 5}, {0, 0}});
  return 0;
}
