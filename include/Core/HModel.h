#ifndef HMODEL_H
#define HMODEL_H
#include "HMath.h"
#include "../../include/HEngine.h"
struct HVertex
{
    HVector3f position;
    HVector3f normal;
    HVector4f tangent;
    std::vector<HVector2f> texcoord;
};
class Model:public IHModel_Base
{
public:
    std::vector<HVertex> m_Vertices;
    std::vector<unsigned short> m_Indice16;
    std::vector<unsigned long> m_Indice32;
};
#endif // HMODEL_H