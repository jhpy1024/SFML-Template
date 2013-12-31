#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <memory>

#include "Entity.hpp"

class Game
{
public:
	Game();

	void run();

	int getWidth() const { return Width;  }
	int getHeight() const { return Height; }
	std::vector<std::unique_ptr<Entity>>& getEntities() { return entities_; }

private:
	void handleInput();
	void update(sf::Time delta);
	void render();

private:
	const int Width;
	const int Height;
	const std::string Title;
	const sf::Time TimePerFrame;

	sf::RenderWindow window_;
	std::vector<std::unique_ptr<Entity>> entities_;
};

#endif