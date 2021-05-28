#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
using namespace sf;
using namespace std;

struct Info_people
{
    string name = "";
    string surname = "";
    int answers = 0;
    int level_difficult = 0;
    string array_answers[5] = {};
};

void push_answer()
{
    
}

void draw_buttons(RenderWindow& app)
{
    Texture button_send_1, button_send_2, button_sumbit, input_label_n, input_label_sn;
    button_send_1.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//button_send.png");
    button_send_2.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//button_send.png");
    button_sumbit.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//button_send.png");
    input_label_n.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//input_zone.png");
    input_label_sn.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//input_zone.png");

    if (!button_send_1.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//button_send.png"))
    {
        cout << "can't open file";
    }

    Sprite sprite_b_1(button_send_1, IntRect(0, 0, 900, 450));//button_1
    Sprite sprite_b_2(button_send_2, IntRect(0, 0, 900, 450));//button_2
    Sprite sprite_b_s(button_sumbit, IntRect(0, 0, 900, 450));//button_sumbit
    Sprite sprite_input_n(input_label_n, IntRect(0, 0, 1800, 450));//button_2
    Sprite sprite_input_sn(input_label_sn, IntRect(0, 0, 1800, 450));//button_sumbit

    sprite_b_1.setPosition(450, 100);
    sprite_b_2.setPosition(450, 180);
    sprite_b_s.setPosition(450, 400);
    sprite_input_n.setPosition(200, 100);
    sprite_input_sn.setPosition(200, 180);

    sprite_b_1.scale(0.3, 0.3);
    sprite_b_2.scale(0.3, 0.3);
    sprite_b_s.scale(0.3, 0.3);
    sprite_input_n.scale(0.3, 0.3);
    sprite_input_sn.scale(0.3, 0.3);

    
    app.draw(sprite_b_1);
    app.draw(sprite_b_2);
    app.draw(sprite_b_s);
    app.draw(sprite_input_n);
    app.draw(sprite_input_sn);
}

void choose_level(RenderWindow& app, bool choice)
{
    Texture choose_button;
    choose_button.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//level_c.png");

    Sprite choose_b(choose_button, IntRect(0, 0, 1600, 450));
    choose_b.scale(0.3, 0.3);
    choose_b.setPosition(20, 300);

    app.draw(choose_b);
}

void choose_button(RenderWindow& app)
{
    Texture button_easy, button_medium, button_hard;
    button_easy.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//easy_b.png");
    button_medium.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//medium_b.png");
    button_hard.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//hard_b.png");

    if (!button_easy.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//easy_b.png"))
    {
        cout << "can't open file";
    }

    Sprite sprite(button_easy, IntRect(0, 0, 900, 450));//button_1
    Sprite sprite_1(button_medium, IntRect(0, 0, 900, 450));//button_2
    Sprite sprite_2(button_hard, IntRect(0, 0, 900, 450));//button_sumbit

    sprite.setPosition(230, 300);
    sprite_1.setPosition(340, 300);
    sprite_2.setPosition(450, 300);

    sprite.scale(0.3, 0.3);
    sprite_1.scale(0.3, 0.3);
    sprite_2.scale(0.3, 0.3);

    app.draw(sprite);
    app.draw(sprite_1);
    app.draw(sprite_2);
    cout << "bitch";
}

void logic_button(Info_people data, RenderWindow& app)
{
    if (IntRect(450, 100, 90, 45).contains(Mouse::getPosition(app)))
    {
        data.name = "Nikita";
        cout << "name: " << data.name;
    }

    if(IntRect(450, 180, 90, 45).contains(Mouse::getPosition(app)))
    {
        data.surname = "Topchiy";
        cout << "surname: " << data.surname;
    }

    if (IntRect(230, 300, 90, 45).contains(Mouse::getPosition(app)))
    {
        data.level_difficult = 1;
    }

    if (IntRect(340, 300, 90, 45).contains(Mouse::getPosition(app)))
    {
        data.level_difficult = 2;
    }

    if (IntRect(450, 300, 90, 45).contains(Mouse::getPosition(app)))
    {
        data.level_difficult = 3;
    }

}

void draw_test(RenderWindow& app, int x, bool pressed)
{
    Texture logo_test, question_zone, checkbox_a, checkbox_p, right_b, left_b;

    logo_test.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//logo.png");
    question_zone.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//question_zone.png");
    checkbox_p.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//checkbox_passive.png");
    checkbox_a.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//checkbox_active.png");
    right_b.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//right_b.png");
    left_b.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//left_b.png");

    Sprite logo(logo_test);
    Sprite question_z(question_zone);
    Sprite checkbox_z_p(checkbox_p);
    Sprite checkbox_z_a(checkbox_a);
    Sprite checkbox_left_b(left_b);
    Sprite checkbox_right_b(right_b);

    logo.setPosition(295, 50);
    question_z.setPosition(30, 150);
    checkbox_z_p.setPosition(30, 300);
    checkbox_left_b.setPosition(640, 600);
    checkbox_right_b.setPosition(690, 600);

    logo.scale(0.3, 0.3);
    question_z.scale(0.25, 0.3);
    checkbox_z_p.scale(0.3, 0.3);
    checkbox_left_b.scale(0.3, 0.3);
    checkbox_right_b.scale(0.3, 0.3);

    Font font;
    /*font.loadFromFile("C://Users//Ðîìà//source//repos//testss_kr//res//main_font.otf");*/

    Text answer_1, answer_2, answer_3, answer_4, answer_5;
    /*answer_1.setFont(font);
    answer_2.setFont(font);
    answer_3.setFont(font);
    answer_4.setFont(font);
    answer_5.setFont(font);*/

    answer_1.setFillColor(Color::Black);
    answer_2.setFillColor(Color::Black);
    answer_3.setFillColor(Color::Black);
    answer_4.setFillColor(Color::Black);
    answer_5.setFillColor(Color::Black);

    answer_1.setString("answer first");

    answer_1.setPosition(100, 300);

    app.draw(answer_1);

    app.draw(logo);
    app.draw(question_z);
    app.draw(checkbox_left_b);
    app.draw(checkbox_right_b);
    /*app.draw(checkbox_z_a);
    app.draw(checkbox_z_p);*/

    for (int i = 0; i < 300; i += 60)
    {
        checkbox_z_p.setPosition(30, 300 + i);
        checkbox_z_a.setPosition(30, 300 + i);
        if (i == x && pressed)
        {
            checkbox_z_a.scale(0.3, 0.3);
            app.draw(checkbox_z_a);
        }
        else
        {
            app.draw(checkbox_z_p);
        }   
    }
    
}

void logic_test(Info_people data, RenderWindow& app)
{

}

int main()
{
    sf::RenderWindow app(sf::VideoMode(800, 700), L"SFML window");
   
    Info_people data;
    bool var = 0, var_next = 1;
    int choice_answer = 0;
    bool pressed = false;

    while (app.isOpen())
    {
        sf::Event event;
        while (app.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
                app.close();

            if (var_next == 1)
            {
                if (event.type == sf::Event::MouseButtonPressed)
                {
                    if (event.mouseButton.button == sf::Mouse::Left)
                    {
                        logic_button(data, app);
                    }
                }
            }

            if (var_next == 0)
            {
                if (event.type == sf::Event::MouseButtonPressed)
                {
                    if (event.mouseButton.button == sf::Mouse::Left)
                    {
                        logic_test(data, app);
                    }
                }
            }


            if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    if (IntRect(20, 300, 160, 45).contains(Mouse::getPosition(app)))
                    {
                        var = 1;
                    }
                }
                if (event.mouseButton.button == sf::Mouse::Right)
                {
                    if (IntRect(20, 300, 160, 45).contains(Mouse::getPosition(app)))
                    {
                        var = 0;
                    }
                } 
            }
            if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    if (IntRect(450, 400, 160, 45).contains(Mouse::getPosition(app)))
                    {
                        var_next = 0;
                    }
                }
            }
            if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    if (IntRect(30, 300, 45, 45).contains(Mouse::getPosition(app)))
                    {
                        choice_answer = 0;
                        pressed = true;
                    }
                }
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    if (IntRect(30, 360, 45, 45).contains(Mouse::getPosition(app)))
                    {
                        choice_answer = 60;
                        pressed = true;
                    }
                }
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    if (IntRect(30, 420, 45, 45).contains(Mouse::getPosition(app)))
                    {
                        choice_answer = 120;
                        pressed = true;
                    }
                }
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    if (IntRect(30, 460, 45, 45).contains(Mouse::getPosition(app)))
                    {
                        choice_answer = 180;
                        pressed = true;
                    }
                }
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    if (IntRect(30, 520, 45, 45).contains(Mouse::getPosition(app)))
                    {
                        choice_answer = 240;
                        pressed = true;
                    }
                }
            }

        }
        app.clear(Color::White);
        if (var_next)
        {
            if (var)
            {
                choose_button(app);
            }
            draw_buttons(app);
            choose_level(app, 0);
        }
        if (!var_next)
        {
            cout << "loop_is_broken";
            draw_test(app, choice_answer, pressed);
        }
        app.display();
    }

}