struct stud
{
	int r_num;
	char name[50];
}info[15];
struct stud *point[15];

void display(int z);
void bubble_sort_name(int x);
void sort(void(*r)(int),int x);
void bubble_sort_roll(int x);
