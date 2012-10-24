#ifndef particle
#define particle

class particle
{
public: 
particle(threevector vel, double position[3]);
double* getposition();
setposition(int x, y, z);
threevector getvelocity();
setvelocity(threevector vel);
threevector getforce();
setforce(threevector force);

private:
threevector itsvelocity;
double itsposition[3];
threevector itsforce;
};

particle::particle(threevector vel, double position[3])
{
 itsvelocity = vel;
// check if this works - itsposition = position;
 itsposition[0] = position[0];
 itsposition[1] = position[1];
 itsposition[2] = position[2];
}

particle::double* getposition()
{
 return itsposition;
}

particle::setposition(int x, y, z)
{
 itsposition[0] = x;
 itsposition[1] = y;
 itsposition[2] = z;
}

particle::threevector getvelocity()
{
 return itsvelocity;
}

particle::setvelocity(threevector vel)
{
 itsvelocity = vel;
}

particle::threevector getforce()
{
 return itsforce;
}

particle::setforce(threevector force)
{
 itsforce = force;
}

 
#endif