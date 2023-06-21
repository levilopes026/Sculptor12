#ifndef SCULPTOR_H
#define SCULPTOR_H



struct Voxel {
  float r, g, b;
  float a;
  bool isOn;
} ;


class Sculptor {

private:
  Voxel ***v;

  int nx,ny,nz;
  float r,g,b,a;

public:


  Sculptor(int _nx=1, int _ny=1, int _nz=1);

  ~Sculptor();

  void setColor(float r, float g, float b, float a);

  void putVoxel(int x, int y, int z);

  void cutVoxel(int x, int y, int z);

  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);

  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);

  void putSphere(int xcenter, int ycenter, int zcenter, int radius);

  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);

  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

  void writeOFF(const char* filename);

};

#endif
