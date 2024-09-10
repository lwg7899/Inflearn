#pragma once
#include "Types.h"

struct Vertex 
{
    Vec3 position;  //12
    //Color color;    //16
    Vec2 uv;
};

//상수버퍼를 만들때 사용되는 D3D11_BUFFER_DESC에 사용
struct TransformData 
{
    Vec3 offset;
    float dummy;//상수 버퍼를 만들 때는 16바이트로 정렬해야하기 때문에 float(4바이트) 더비 변수 생성함
};

/*
    정점버퍼와 인덱스버퍼 차이
*/