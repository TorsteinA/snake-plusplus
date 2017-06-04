//
// Created by thomas on 03.06.17.
//

#ifndef SNAKE_PLUSPLUS_APPLERENDERER_H
#define SNAKE_PLUSPLUS_APPLERENDERER_H


#include "Renderer.h"

class AppleRenderer : Renderer {
public:
	AppleRenderer(const shared_ptr<SDLPng> &apple) : apple(apple) {}
	void renderApple(Node& node);
	virtual void render() override;
private:
	std::shared_ptr<SDLPng> apple;
};

#endif //SNAKE_PLUSPLUS_APPLERENDERER_H