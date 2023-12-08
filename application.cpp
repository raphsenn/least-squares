#include "./application.hpp"

// Constructor
Application::Application(int w, int h) : WIDTH(w), HEIGHT(h), window(sf::VideoMode(WIDTH, HEIGHT), "window") {

}

void Application::run() {
  // standard sfml window loop 
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }
    window.clear();
    window.display(); 
  }
}


