#include "projectile.hpp"

const double m = 1; // in kg
const double g = 9.8066; // no longer used
const double dt = 0.001;
const double k = 0.5; // in m^-1 - added
const double q = 1; //  in C - added
const double w = 2 // in s^-1 - added
const double Eo = 1 // in V m^-1 - added

// Added
auto electric_field(TState s) {
 double E = (Eo/sqrt(2)) 
  return E;
}

//auto force(TState s) { return VecR2<double>{0, -m * g}; }
// Added
auto force(TState s) {return VecR3<double>{q * E}; }

// changed from VecR2
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
    for (unsigned k = 0; k < n; ++k) {
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
