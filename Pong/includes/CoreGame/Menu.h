// Menu.h
#ifndef MENU_H
#define MENU_H

#include <SFML/Graphics.hpp>
#include <string>
#include <thread>

class Menu {
public:
    Menu(sf::RenderWindow& window);
    void handleEvent(sf::Event& event);
    void update();
    void draw();
    bool isServerRunning() const;
    bool isConnected() const;

private:
    sf::RenderWindow& window;
    sf::Font font;
    sf::Text menuItems[2];
    sf::Text inputText;
    sf::Text serverStatus;
    std::string titles[2];
    std::string userInput;
    bool enteringText;
    int selectedItem;
    bool serverRunning;
    bool isConnectedFlag;
    std::thread serverThread;  // To handle the server
};

#endif // MENU_H

