#pragma once
using namespace glm;

class Shader
{
public:
	struct ShaderProgramSource
	{
		std::string VertexSource;
		std::string FragmentSource;
	};

	enum class ShaderType { NONE = -1, VERTEX = 0, FRAGMENT = 1 };

	unsigned int ID;

	Shader()
	{
	}

	Shader(const std::string& filepath);
	~Shader();

	void use();

	// utility uniform functions
	void setBool(const std::string& name, bool value) const;
	void setInt(const std::string& name, int value) const;
	void setFloat(const std::string& name, float value) const;
	void setVec2(const std::string& name, const vec2& value) const;
	void setVec2(const std::string& name, float x, float y) const;
	void setVec3(const std::string& name, const vec3& value) const;
	void setVec3(const std::string& name, float x, float y, float z) const;
	void setVec4(const std::string& name, const vec4& value) const;
	void setVec4(const std::string& name, float x, float y, float z, float w) const;
	void setIVec4(const std::string& name, const ivec4& value) const;
	void setMat2(const std::string& name, const mat2& mat) const;
	void setMat3(const std::string& name, const mat3& mat) const;
	void setMat4(const std::string& name, const mat4& mat) const;
private:
	mutable std::unordered_map<std::string, GLint> m_UniformCache;
	unsigned int vertex, fragment;

private:
	void checkCompileErrors(unsigned int shader, std::string type);
	GLint getUniformLocation(const std::string& name) const;
};
