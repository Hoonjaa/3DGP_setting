#pragma once
#include "Object.h"
class Airplane : public Object
{
public:
	Airplane(ID3D12Device* pd3dDevice, ID3D12GraphicsCommandList* pd3dCommandList, XMFLOAT3 pos);
	~Airplane();

	//void Animate(float fTimeElapsed) {};
};

