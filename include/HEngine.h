#ifndef HENGINE_H
#define HENGINE_H
#include <windows.h>
#include <HMath.h>
#define API __declspec(dllexport)

class IHEngine;
class IHResourceMananger;
class IHActor;
class IHModel_Base;
class IHMaterial;
class IHMaterialSystem;
class IHScene;
class IHComponent;
class IHSceneView;

class IHActor
{
public:
}

class IHEngine
{
public:
    HRESULT GetReSourceManager(IHResourceMananger **resourceManager) = 0;
    HRESULT CreateActorFromFile(const char *path, IHActor **actor) = 0;
}

class IHModel_Base
{
public:
};
namespace Utils
{
    HRESULT API GetEngine(IHEngine **engine);
}

#endif // HENGINE_H