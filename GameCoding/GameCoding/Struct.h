#pragma once
#include "Types.h"

struct Vertex 
{
    Vec3 position;  //12
    //Color color;    //16
    Vec2 uv;
};

//������۸� ���鶧 ���Ǵ� D3D11_BUFFER_DESC�� ���
struct TransformData 
{
    Vec3 offset;
    float dummy;//��� ���۸� ���� ���� 16����Ʈ�� �����ؾ��ϱ� ������ float(4����Ʈ) ���� ���� ������
};

/*
    �������ۿ� �ε������� ����
*/