#ifndef particle
#define particle

class particle
{
public: 
particle(threevector velocity(x,y,z), position(x,y,z)); //PLACEHOLDER
getposition();
getvelocity();
setposition();
setvelocity();
getacceleration();
setacceleration();
getforce();
setforce();

private:
itsvelocity(threevector vel(x,y,z));
itsposition();
itsacceleration();
itsforce(threevector force(x,y,z));
};
 
#endif