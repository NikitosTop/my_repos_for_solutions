#include <SFML/Graphics.hpp>
#include <time.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace sf;
using namespace std;

int main()
{
    srand(time(0));

    RenderWindow app(VideoMode(520, 450), "Arkanoid!");
    app.setFramerateLimit(60);

    Texture t1, t2, t3, t4;
    t1.loadFromFile("D://res//images//block01.png");
    t2.loadFromFile("D://res//images//background.jpg");
    t3.loadFromFile("D://res//images//ball.png");
    t4.loadFromFile("D://res//images//paddle.png");

    Sprite sBackground(t2), sBall(t3), sPaddle(t4);
    sPaddle.setPosition(300, 440);

    Sprite block[1000];

    sf::Font font;
    font.loadFromFile("C://Users//Рома//source//repos//testss_kr//res//font_main.otf");

    Text text;

    text.setFont(font);

    int n = 0;
    for (int i = 1; i <= 10; i++)
        for (int j = 2; j <= 10; j++)
        {
            block[n].setTexture(t1);
            block[n].setPosition(i * 43, j * 20);
            n++;
        }

    float dx = 6, dy = 5;
    float x = 260, y = 400;

    float spaddle_x = 300;

    string score = "";

    text.setPosition(380, 0);

    int scope = 0;

    while (app.isOpen())
    {
        Event e;
        while (app.pollEvent(e))
        {
            if (e.type == Event::Closed)
                app.close();
        }

        x += dx;
        for (int i = 0; i < n; i++)
            if (FloatRect(x + 3, y + 3, 6, 6).intersects(block[i].getGlobalBounds()))
            {
                block[i].setColor(Color::Red);
                block[i].setPosition(-100, 0);
                dx = -dx;
                scope++;
            }

        y += dy;
        for (int i = 0; i < n; i++)
            if (FloatRect(x + 3, y + 3, 6, 6).intersects(block[i].getGlobalBounds()))
            {
                block[i].setColor(Color::Red);
                block[i].setPosition(-100, 0);
                dy = -dy;
                scope++;
            }

        if (x < 0 || x>520)  dx = -dx;
        if (y < 0)  dy = -dy;
        if (y > 520) break;
        if (spaddle_x < 0 || spaddle_x > 440) spaddle_x = -spaddle_x;

        if (Keyboard::isKeyPressed(Keyboard::Right))
        {
            spaddle_x += 6;
            sPaddle.setPosition(spaddle_x, 440);
        }
        if (Keyboard::isKeyPressed(Keyboard::Left))
        {
            spaddle_x -= 6;
            sPaddle.setPosition(spaddle_x, 440);
        }

        if (FloatRect(x, y, 12, 12).intersects(sPaddle.getGlobalBounds())) dy = -(rand() % 5 + 2);

        sBall.setPosition(x, y);

        score = to_string(scope);

        text.setString("score: " + score);

        app.clear();
        app.draw(sBackground);
        app.draw(sBall);
        app.draw(sPaddle);
        app.draw(text);

        for (int i = 0; i < n; i++)
            app.draw(block[i]);

        app.display();
    }


    printf("score: %d", scope);

    return 0;
}
