#include "stdafx.h"
#include "Airplane.h"
#include "ResourceMgr.h"

Airplane::Airplane(ID3D12Device* pd3dDevice, ID3D12GraphicsCommandList* pd3dCommandList, XMFLOAT3 pos)
{
	Mesh* pAirplaneMesh = ResourceMgr::Instance()->LoadMeshObj(pd3dDevice, pd3dCommandList, L"Airplane", "Res/Meshes/11803_Airplane_v1_l1.obj");
	SetMesh(pAirplaneMesh);
	XMFLOAT3 scale = XMFLOAT3(0.01f, 0.01f, 0.01f);
	Scale(&scale);
	//Move(&pos);
}

Airplane::~Airplane()
{
}
