#include <iostream>
#include <cmath>
#include <fstream>
#include "Sculptor.h"


using namespace std;


Sculptor :: Sculptor(int _nx, int _ny, int _nz)
{
    nx = _nx;
    ny = _ny;
    nz = _nz;




    v = new Voxel**[nx];

    for(int i=0; i<nx; i++)
    {
        v[i] = new Voxel*[ny];
    }

    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            v[i][j] = new Voxel[nz];
        }
    }

    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {

                v[i][j][k].isOn = false;

                v[i][j][k].r = r;
                v[i][j][k].g = g;
                v[i][j][k].b = b;
                v[i][j][k].a = a;
            }
        }
    }
}



Sculptor :: ~Sculptor()
{


    for(int i=0; i < nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            delete[] v[i][j];
        }
    }

    for(int i=0; i<nx; i++)
    {
        delete[] v[i];
    }

    delete[] v;

}



void Sculptor :: setColor(float r, float g, float b, float a)
{
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}



void Sculptor :: putVoxel(int x, int y, int z)
{
    v[x][y][z].isOn = true;
    v[x][y][z].r = r;
    v[x][y][z].g = g;
    v[x][y][z].b = b;
    v[x][y][z].a = a;
}


void Sculptor :: cutVoxel(int x, int y, int z)
{
    v[x][y][z].isOn = false;
}



void Sculptor :: putBox(int x0, int x1, int y0, int y1, int z0, int z1)
{

    for(int i=x0; i<x1; i++)
    {
        for(int j=y0; j<y1; j++)
        {
            for(int k=z0; k<z1; k++)
            {
                v[i][j][k].isOn = true;
                v[i][j][k].r = r;
                v[i][j][k].g = g;
                v[i][j][k].b = b;
                v[i][j][k].a = a;
            }
        }
    }
}


void Sculptor :: cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{

    for(int i=x0; i<x1; i++)
    {
        for(int j=y0; j<y1; j++)
        {
            for(int k=z0; k<z1; k++)
            {
                v[i][j][k].isOn = false;
            }
        }
    }
}



void Sculptor :: putSphere(int xcenter, int ycenter, int zcenter, int radius)
{

    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {


                if((pow(i-xcenter,2) +pow(j-ycenter,2)  + pow(k-zcenter,2)) < pow(radius,2))
                {
                    v[i][j][k].isOn = true;
                    v[i][j][k].r = r;
                    v[i][j][k].g = g;
                    v[i][j][k].b = b;
                    v[i][j][k].a = a;
                }
            }
        }
    }
}



void Sculptor :: cutSphere(int xcenter, int ycenter, int zcenter, int radius)
{

    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {


                if((pow(i-xcenter,2) +pow(j-ycenter,2)  + pow(k-zcenter,2)) < pow(radius,2))
                {
                    v[i][j][k].isOn = false;
                }
            }
        }
    }
}


void Sculptor :: putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{

    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {

                if(pow((i-xcenter),2)/pow(rx,2)+pow((j-ycenter),2)/pow(ry,2)+pow((k-zcenter),2)/pow(rz,2)<1)
                {
                    v[i][j][k].isOn = true;
                    v[i][j][k].r = r;
                    v[i][j][k].g = g;
                    v[i][j][k].b = b;
                    v[i][j][k].a = a;
                }
            }
        }
    }
}

void Sculptor :: cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{


    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {




                if(pow((i-xcenter),2)/pow(rx,2)+pow((j-ycenter),2)/pow(ry,2)+pow((k-zcenter),2)/pow(rz,2)<1)
                {
                    v[i][j][k].isOn = false;
                }
            }
        }
    }
}



void Sculptor :: writeOFF(const char *filename)
{
    ofstream quadra1;

    fixed(quadra1);

    int Nv=0,Nf=0,auxiliar=0;

    quadra1.open(filename);

    if(quadra1.is_open())
    {
        cout << "Aguarde...Salvando o arquivo OFF."<<endl;
    }
    else
    {
        cout << "Arquivo OFF nao foi aberto"<<endl;

    }

    quadra1<<"OFF"<<endl;

    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {
                if(v[i][j][k].isOn == true)
                {
                    Nv=Nv+8;
                    Nf=Nf+6;
                }
            }
        }
    }

    quadra1<<Nv<<" "<<Nf<<" "<<0<<endl;


    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {
                if(v[i][j][k].isOn == true)
                {


                    quadra1<< i-0.5 << " " << j+0.5 << " " << k-0.5 <<endl;
                    quadra1<< i-0.5 << " " << j-0.5 << " " << k-0.5 <<endl;
                    quadra1<< i+0.5 << " " << j-0.5 << " " << k-0.5 <<endl;
                    quadra1<< i+0.5 << " " << j+0.5 << " " << k-0.5 <<endl;
                    quadra1<< i-0.5 << " " << j+0.5 << " " << k+0.5 <<endl;
                    quadra1<< i-0.5 << " " << j-0.5 << " " << k+0.5 <<endl;
                    quadra1<< i+0.5 << " " << j-0.5 << " " << k+0.5 <<endl;
                    quadra1<< i+0.5 << " " << j+0.5 << " " << k+0.5 <<endl;

                }
            }
        }
    }

    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {
                if(v[i][j][k].isOn == true)
                {
                    quadra1<<4<<" "<<auxiliar+0<<" "<<auxiliar+3<<" "<<auxiliar+2<<" "<<auxiliar+1<<" "<<v[i][j][k].r<<" "
                           <<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                    quadra1<<4<<" "<<auxiliar+4<<" "<<auxiliar+5<<" "<<auxiliar+6<<" "<<auxiliar+7<<" "<<v[i][j][k].r<<" "
                           <<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                    quadra1<<4<<" "<<auxiliar+0<<" "<<auxiliar+1<<" "<<auxiliar+5<<" "<<auxiliar+4<<" "<<v[i][j][k].r<<" "
                           <<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                    quadra1<<4<<" "<<auxiliar+0<<" "<<auxiliar+4<<" "<<auxiliar+7<<" "<<auxiliar+3<<" "<<v[i][j][k].r<<" "
                           <<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                    quadra1<<4<<" "<<auxiliar+3<<" "<<auxiliar+7<<" "<<auxiliar+6<<" "<<auxiliar+2<<" "<<v[i][j][k].r<<" "
                           <<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                    quadra1<<4<<" "<<auxiliar+1<<" "<<auxiliar+2<<" "<<auxiliar+6<<" "<<auxiliar+5<<" "<<v[i][j][k].r<<" "
                           <<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                    auxiliar=auxiliar+8;
                }
            }
        }
    }


}



