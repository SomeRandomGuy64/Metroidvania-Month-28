#pragma once

class Renderer {

public:

	Renderer(int width, int height);
	~Renderer() = default;

	void onUpdate();

private:

	int m_width{};
	int m_height{};

};
