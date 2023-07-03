#ifndef HMODEL_H
#define HMODEL_H
#include "HMath.h"
#include "../../include/HEngine.h"

struct HVertex
{
    HVector3f position;              // 顶点位置
    HVector3f normal;                // 顶点法线
    HVector4f tangent;               // 顶点切线
    std::vector<HVector2f> texcoord; // 顶点纹理坐标
};

class Model : public IHModel_Base
{
public:
    std::vector<HVertex> m_Vertices;        // 顶点数据
    std::vector<unsigned short> m_Indice16; // 16 位索引数据
    std::vector<unsigned long> m_Indice32;  // 32 位索引数据
};
#endif // HMODEL_H