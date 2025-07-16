#include <SFML/Graphics.hpp>

int main()
{

	sf::RenderWindow window(sf::VideoMode(800, 600), "Snowman :)");

	while (window.isOpen())
	{

		sf::CircleShape shape(50);
		sf::CircleShape shape2(75);
		sf::CircleShape shape3(100);

		// set the shape color to green
		shape.setFillColor(sf::Color(255, 255, 255));
		shape2.setFillColor(sf::Color(255, 255, 255));
		shape3.setFillColor(sf::Color(255, 255, 255));

		shape.setPosition(40, 0);    // My attempt at positioning the circles
		shape2.setPosition(20, 100);
		shape3.setPosition(0, 200);

		sf::CircleShape leftEye;
		leftEye.setPointCount(3);
		leftEye.setRadius(10);
		leftEye.setFillColor(sf::Color:: Black);
		leftEye.setPosition(50, 40);

		sf::CircleShape rightEye;
		rightEye.setPointCount(3);
		rightEye.setRadius(10);
		rightEye.setFillColor(sf::Color::Black);
		rightEye.setPosition(100, 40); 

		sf::CircleShape nose;
		nose.setPointCount(3);
		 nose.setRadius(10);
		 nose.setFillColor(sf::Color(255, 165, 0));
		 nose.setPosition(75, 50);


		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) window.close();
		}

		window.clear(sf::Color::Black);
		window.draw(shape);
		window.draw(shape2);
		window.draw(shape3);
		window.draw(leftEye);
		window.draw(rightEye);
		window.draw(nose);
		window.display();
	}

	return 0;
}
