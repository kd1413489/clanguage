#include<stdio.h>
main()
{
	typedef struct {
		char Wname[20];
		int bullet;
		floatatk;
	}Weapon;
	typedef struct {
		char name[20];
		int hp;
		Weapon wpn;
	}Soldier;
	void SetInfo(Soldier* s, char* filename);
	void Display(Soldier s);
	main() {
		Soldier sol;
		SetInfo(&sol, "file03.txt");
		Display(sol);
	}
	void SetInfo(Soldier* s, char* filename) {
		FILE* fp;
		if (fp = fopen(filename, "r")) {
			fscanf(fp, "%s%d%s%d%f", s->name, &s->hp,
				s->wpn.Wname, &s->wpn.bullet,
				&s->wpn.atk);
			fclose(fp);
		}
	}
	void Display(Soldier s) {
		printf("%s\t�̗́F%d\n", s.name, s.hp);
		printf("����F%s\t�e���F%d\t�U���́F%.2f\n",
			s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
	}
}