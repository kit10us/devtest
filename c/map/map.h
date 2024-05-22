#ifndef SS_MAP_H
#define SS_MAP_He

struct Entry_t
{
	char * value;
};
typedef Entry_t Entry;

struct Map_t
{
};

typedef Map_t Map;

Map* CreateMap();
void DestroyMap(Map* map);

#endif
