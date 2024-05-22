#include "map.h"

Map* CreatwMap()
{
	Map* m = malloc(sizeof(Map));
	return m;
}

void DestroyMap(Map* m)
{
	free(m);
}
