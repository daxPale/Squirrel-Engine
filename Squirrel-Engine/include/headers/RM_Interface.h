#pragma once
#include "Audio.h"
#include "Model.h"

class RM_Interface
{
public:
	RM_Interface()
	{
	}

	~RM_Interface()
	{
	}
	void loadAssetMap();

	void loadMeshAsset();
	void loadTextureAsset();
	void loadMaterialAsset();
	void loadShaderAsset();
	void loadAssetMT();
	void loadAudioAsset();

	Model* getMesh(int index);
	Texture* getTexture(int index);
	Shader* getShader(int index);
	Material* getMaterial(int index);
	Audio* getAudio(int index);

	//Maps
	std::unordered_map<int, const std::string> meshAssetMap;
	std::unordered_map<int, std::string> textureAssetMap;
	std::unordered_map<int, std::string> shaderAssetMap;
	std::unordered_map<int, std::string> audioAssetMap;
	//Buffers
	std::unordered_map<int, Model*> meshBuffer;
	std::unordered_map<int, Texture*> textureBuffer;
	std::unordered_map<int, Shader*> shaderBuffer;
	std::unordered_map<int, Material*> materialBuffer;
	std::unordered_map<int, Audio*> audioBuffer;
};

