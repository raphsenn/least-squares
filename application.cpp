#include "./application.hpp"

// Constructor
Application::Application(int w, int h) : WIDTH(w), HEIGHT(h), window(sf::VideoMode(WIDTH, HEIGHT), "window"), view(sf::FloatRect(0, 0, WIDTH, HEIGHT)) {
  // More initialization
  window.setView(view);
  data = {std::make_tuple(1, 1), std::make_tuple(2, 2),std::make_tuple(3, 3),std::make_tuple(4, 4)};
  lastMousePos = sf::Vector2f(sf::Mouse::getPosition(window));

}

void Application::draw() {
  for (int i = 0; i < data.size(); i++) {
    sf::CircleShape datapoint(5);
    datapoint.setFillColor(sf::Color::Blue);
    datapoint.setPosition(100*std::get<0>(data[i]) , 100*std::get<1>(data[i]));
    window.draw(datapoint); 
  }
}

void Application::change_view(sf::Event& event) {
  // screen dragging with mouse 
  sf::Vector2f offset;
  if (event.type == sf::Event::MouseMoved) {
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
      offset = lastMousePos - sf::Vector2f(sf::Mouse::getPosition(window));
    }
    view.move(offset);
    window.setView(view);
  }
  // zooming with mouse wheel
  else if (event.type == sf::Event::MouseWheelScrolled) {
    float zoomFactor = 1.0f + (-1) * event.mouseWheelScroll.delta * 0.1f;
    view.zoom(zoomFactor);
  }
  lastMousePos = sf::Vector2f(sf::Mouse::getPosition(window));
}

void Application::update() {
  window.clear(sf::Color::White);
  draw();
  window.display();

}

void Application::run() {
  // standard sfml window loop 
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    change_view(event);
    }
    update();
  }
}


