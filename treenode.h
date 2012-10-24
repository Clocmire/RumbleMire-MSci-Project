#ifndef treenode
#define treenode
{
public:
treenode(int level, label, treenode& parent_ref);
setcom();
double* getcom();
int getlevel();
int getlabel();
treenode& getparent();
setparticle(particle* particle_ref);
particle* getparticle();



protected:
int itslabel;
int itslevel;
double itscom[3];
treenode& itsparent;
particle* itsparticle;
boolean isleaf;
treenode* daughters[4] = 0;

};

treenode::treenode(int level, label, treenode& parent_ref)
{
  itslevel = level;
  itslabel = label;
  itsparent = parent_ref;
  
}

treenode::setcom(double x, y, z)
{
  itscom[0] = x;
  itscom[1] = y;
  itscom[2] = z;
}

treenode::double* getcom()
{
  return itscom;
}

treenode::int getlevel()
{
  return itslevel;
}

treenode::int getlabel()
{
  return itslabel;
}

treenode::treenode& getparent()
{
  return itsparent;
}

treenode::setparticle(particle* particle_ref)
{
  itsparticle = particle_ref;
}

treenode::particle* getparticle()
{
  return itsparticle;
}


#endif