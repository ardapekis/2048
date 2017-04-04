#include "keys.h"

char previous[10];
char buttons[10];

int buttonJustPressed(Button button)
{
	return !previous[button] && buttons[button];
}

void updateAllKeys()
{
	for (int i = 0; i < 10; i++)
	{
		previous[i] = buttons[i];
	}
	for (int i = A_BUTTON; i <= L_BUTTON; i++)
	{
		buttons[i] = KEY_DOWN_NOW(i);
	}
}
