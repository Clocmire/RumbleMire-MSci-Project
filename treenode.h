#ifndef treenode
#define treenode
{
public:
setcom();
double* getcom();
int getlevel();
int getlabel();
int& getparent();


protected:
itscom(POSITION); //placeholder
itscount(int number); //spladp
itsparent(int &parent treenode); //? Check references etc
int itslabel;
int itslevel;
double itscom[3];
int& itsparent;

};

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