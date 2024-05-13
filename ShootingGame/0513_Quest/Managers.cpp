#include "Managers.h"

void Managers::Initial(HANDLE hOut)
{
	Cursor.Initial(hOut);
	Unit.player.Initial();
}
