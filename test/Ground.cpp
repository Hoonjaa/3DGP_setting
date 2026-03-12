#include "stdafx.h"
#include "Ground.h"

Ground::Ground(ID3D12Device* pd3dDevice, ID3D12GraphicsCommandList* pd3dCommandList, XMFLOAT3 pos)
{
	Mesh* GroundMesh = new GroundMeshDiffused(pd3dDevice, pd3dCommandList, 20.0f, 20.0f);
	SetMesh(GroundMesh);
}

Ground::~Ground()
{
}