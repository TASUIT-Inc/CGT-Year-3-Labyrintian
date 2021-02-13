#pragma once
#define PCUBE 0x001
#define PPYRAMID 0x002
#define PSPHERE 0x003
#define PPLANE 0x004

#include <glm/glm.hpp>

#include <vector>
#include <cmath>

struct VertexData {
	glm::vec3 m_Pos;
	glm::vec3 m_Norm;
	glm::vec2 m_TexCoord;
};

class LoaderParams
{
public:
	LoaderParams(int Type, glm::vec2 Segments = glm::vec2(50.0f)) :isSphere(false) {
		
		switch (Type) {
		case PCUBE:
			CreateCube();
			break;
		case PPYRAMID:
			CreatePyramid();
			break;
		case PSPHERE:
			CreateSphere(Segments);
			break;
		case PPLANE:
			CreatePlane();
			break;
		default:
			
			break;
		}
	}

	void PushVertexOrder(VertexData* V1, VertexData* V2, VertexData* V3);

	virtual ~LoaderParams() {}
private:
	std::vector<VertexData*> m_InterLeavedVertices;
	bool isSphere;

	void CreateCube();
	void CreatePyramid();
	void CreateSphere(glm::vec2 Segments);
	void CreatePlane();



};