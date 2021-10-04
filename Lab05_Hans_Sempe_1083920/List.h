#include "Nodo.h"

#pragma once
class List
{
public:
	Nodo* start;
	Nodo* end;
	int count;

	Nodo_Group_1* start_Group_1;
	Nodo_Group_1* end_Group_1;
	int count_Group_1;

	Nodo_Group_2* start_Group_2;
	Nodo_Group_2* end_Group_2;
	int count_Group_2;

	Nodo_Group_3* start_Group_3;
	Nodo_Group_3* end_Group_3;
	int count_Group_3;

	Nodo_Group_4* start_Group_4;
	Nodo_Group_4* end_Group_4;
	int count_Group_4;

	Nodo_Group_5* start_Group_5;
	Nodo_Group_5* end_Group_5;
	int count_Group_5;

	Nodo_Group_6* start_Group_6;
	Nodo_Group_6* end_Group_6;
	int count_Group_6;

	Nodo_Group_7* start_Group_7;
	Nodo_Group_7* end_Group_7;
	int count_Group_7;

	List();
	void Insert_Begining(int value, int Color);
	void Insert_Begining_Group1(int value_Group_1, int Color_Group_1);
	void Insert_Begining_Group2(int value_Group_2, int Color_Group_2);
	void Insert_Begining_Group3(int value_Group_3, int Color_Group_3);
	void Insert_Begining_Group4(int value_Group_4, int Color_Group_4);
	void Insert_Begining_Group5(int value_Group_5, int Color_Group_5);
	void Insert_Begining_Group6(int value_Group_6, int Color_Group_6);
	void Insert_Begining_Group7(int value_Group_7, int Color_Group_7);

	void Cambiar_PosCarta(int pos, int G_I, int G_F);
	void Insert_Cartas_Begin(int Val, int Color, int grupo_1, int grupo_2);


	Nodo* Extraer_De_Grupos(int Posicion, int Groupo_Inicial, int Grupo_Final);
	Nodo* Extract_Active_Grupos_Begin(int pos, int grupo, int Final_Group);
	Nodo* Extract_Active_Grupo_End(int pos, int grupo, int Final_Group);



	Nodo* Extract_Mazo(int Random_Num, int grupo);
	Nodo* Extract_First(int grupo);
	Nodo* Extract_Last(int grupo);



	bool isEmpty();
	~List() {};

};
