# SFMLproj_0001
My First SFML Project.

Now the third time I uploaded this into github, this time through the Desktop app.

<img src="https://github.com/GianPDev/SFMLproj_0001/blob/master/Screenshots/Screenshot_51.png" height=480>

Code below allows the shape to move using keyboard.

```cpp
if(sf::Keyboard::isKeyPressed(sf::Keyboard::F)) //Checks if keystroke is pressed.
{
  shape.move(1.f, 1.f); //moves the shape.
}
```
