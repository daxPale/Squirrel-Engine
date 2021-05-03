#include "Light.h"

Light::Light()
{
	auto transformComponent = new TransformComponent();
	transformComponent->setParent(this);
	this->transformComponent = transformComponent;
	insertComponent("transformComponent", transformComponent);

	auto lightComponent = new LightComponent();
	lightComponent->setParent(this);
	this->lightComponent = lightComponent;
	insertComponent("lightComponent", lightComponent);
}

void Light::BeginPlay()
{
}

void Light::Update()
{
	float timeValue = glfwGetTime();
	float greenValue = sin(timeValue) / 2.0f + 0.5f;
	lightComponent->color.g = greenValue;
}