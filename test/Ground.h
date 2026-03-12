#pragma once
#include "Object.h"
class Ground : public Object
{
public:
	Ground(ID3D12Device* pd3dDevice, ID3D12GraphicsCommandList* pd3dCommandList, XMFLOAT3 pos);
	~Ground();
};

