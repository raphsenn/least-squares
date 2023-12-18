#include "./application.hpp"

// Constructor
Application::Application(int w, int h) : WIDTH(w), HEIGHT(h), window(sf::VideoMode(WIDTH, HEIGHT), "window"), view(sf::FloatRect(0, 0, WIDTH, HEIGHT)) {
  // More initialization
  window.setView(view);
  // data = {std::make_tuple(1, 1), std::make_tuple(2, 2),std::make_tuple(3, 3),std::make_tuple(4, 4)};
  lastMousePos = sf::Vector2f(sf::Mouse::getPosition(window));
  std::srand(static_cast<unsigned>(std::time(nullptr)));
  for (int i = 0; i < 200; ++i) {
    double x = static_cast<double>(std::rand()) / RAND_MAX * 20.0;
    double y = x + (static_cast<double>(std::rand()) / RAND_MAX - 0.5) * 10.0; // y = x + small random value 
    data.emplace_back(std::make_tuple(x, y));
  }

  // function_data = squared(data, 1, 0, 0);
  function_data = linear(data, 1, 0);
  // function_data = exponential(data, 1, 1, 0);

  WIDTH_PLOT = WIDTH - 100;
  HEIGHT_PLOT = HEIGHT - 200;
}

void Application::draw_data(const std::vector<std::tuple<float, float>>& dataset, const sf::Color& color) {
  // scale data to window screen 
  // Find min and max values in the dataset
  double minX = std::get<0>(*std::min_element(dataset.begin(), dataset.end(), [](auto a, auto b) { return std::get<0>(a) < std::get<0>(b); }));
  double maxX = std::get<0>(*std::max_element(dataset.begin(), dataset.end(), [](auto a, auto b) { return std::get<0>(a) < std::get<0>(b); }));
  double minY = std::get<1>(*std::min_element(dataset.begin(), dataset.end(), [](auto a, auto b) { return std::get<1>(a) < std::get<1>(b); }));
  double maxY = std::get<1>(*std::max_element(dataset.begin(), dataset.end(), [](auto a, auto b) { return std::get<1>(a) < std::get<1>(b); }));

  // Calculate scaling factors for x and y directions
  double scaleX = WIDTH_PLOT / (maxX - minX);
  double scaleY = HEIGHT_PLOT / (maxY - minY);

  for (const auto& point : dataset) {
    sf::CircleShape datapoint(5);
    datapoint.setFillColor(color);

    // Scale and position the data based on the window size
    float scaledX = static_cast<float>((std::get<0>(point) - minX) * scaleX);
    float scaledY = static_cast<float>((maxY - std::get<1>(point)) * scaleY);

    datapoint.setPosition(scaledX + 50, scaledY + 50);
    window.draw(datapoint);
  }
}

void Application::draw() {
  draw_data(data, sf::Color::Blue);
  draw_data(function_data, sf::Color::Red);

  // create simulation box lines
  sf::Vertex lines[] = {
    sf::Vertex(sf::Vector2f(50, 50), sf::Color::Black),  // Line 1 start (top)
    sf::Vertex(sf::Vector2f(950, 50), sf::Color::Black), // Line 1 end

    sf::Vertex(sf::Vector2f(50, 650), sf::Color::Black),  // Line 2 start (bottom)
    sf::Vertex(sf::Vector2f(950, 650), sf::Color::Black), // Line 2 end

    sf::Vertex(sf::Vector2f(50, 50), sf::Color::Black), // Line 3 start (left)
    sf::Vertex(sf::Vector2f(50, 650), sf::Color::Black), // Line 3 end

    sf::Vertex(sf::Vector2f(950, 50), sf::Color::Black),  // Line 4 start (right)
    sf::Vertex(sf::Vector2f(950, 650), sf::Color::Black)}; // Line 4 end

  // draw the lines
  window.draw(lines, 10, sf::Lines);
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
    // change_view(event);
    }
    update();
  }
}


