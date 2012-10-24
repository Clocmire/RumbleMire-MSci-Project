#ifndef treenode
#define treenode
{
public:
treenode(int level, label);
setcom();
double* getcom();
int getlevel();
int getlabel();
int& getparent();


protected:
int itslabel;
int itslevel;
double itscom[3];
int& itsparent;

};

treenode::treenode(int level, label)
{
  itslevel = level;
  itslabel = label;
  
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

treenode::int& getparent()
{
  return itsparent;
}

#endif