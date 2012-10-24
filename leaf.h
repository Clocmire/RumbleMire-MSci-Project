#ifndef leaf
#define leaf
class leaf: public treenode
{
public:
leaf(&particle particle_ref);
particle& getitsparticle();

private:
particle& itsparticle;

};

leaf::leaf(&particle particle_ref)
{
  itsparticle = particle_ref;
}

leaf::particle& getitsparticle()
{
  return itsparticle;
}

#endif
