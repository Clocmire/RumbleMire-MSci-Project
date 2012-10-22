#ifndef leaf
#define leaf
class leaf: public treenode
{
public:
leaf(&particle particle_ref);
int& getitsparticle();
private:
itsparticle(int &particle particle);

};

leaf::leaf(&particle particle_ref)
{
setitsparticle(particle_ref); //Do we set itsparticle (a reference) to another reference or the particle directly?
setcount(1);
setcom(getitsparticle().getposition()); //?!?!?!??!
}

leaf::int& getitsparticle()
{
return itsparticle;
}

//HELLO HELLO, HOLA


#endif
