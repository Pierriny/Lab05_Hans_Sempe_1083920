#include "List.h"

List::List() {
	start = nullptr;
	end = nullptr;
	count == 0;

	start_Group_1 = nullptr;
	end_Group_1 = nullptr;
	count_Group_1 == 0;

	start_Group_2 = nullptr;
	end_Group_2 = nullptr;
	count_Group_2 == 0;

	start_Group_3 = nullptr;
	end_Group_3 = nullptr;
	count_Group_3 == 0;

	start_Group_4 = nullptr;
	end_Group_4 = nullptr;
	count_Group_4 == 0;

	start_Group_5 = nullptr;
	end_Group_5 = nullptr;
	count_Group_5 == 0;

	start_Group_6 = nullptr;
	end_Group_6 = nullptr;
	count_Group_6 == 0;

	start_Group_7 = nullptr;
	end_Group_7 = nullptr;
	count_Group_7 == 0;
};





void List::Insert_Begining(int value, int color) {
	Nodo* new_nodo = new Nodo();
	new_nodo->Card_Val = value;
	new_nodo->Card_color = color;

	if (isEmpty())
	{
		start = new_nodo;
		end = new_nodo;
	}
	else
	{
		new_nodo->next = start;
		start = new_nodo;
	}
	count++;
}


Nodo* List::Extract_First(int grupo_) {
	Nodo* temp = start;
	if (!isEmpty())
	{
		if (grupo_ == 1)
		{
			Insert_Begining_Group1(temp->Card_Val, temp->Card_color);
		}
		else if (grupo_ == 2)
		{
			Insert_Begining_Group2(temp->Card_Val, temp->Card_color);
		}
		else if (grupo_ == 3)
		{
			Insert_Begining_Group3(temp->Card_Val, temp->Card_color);
		}
		else if (grupo_ == 4)
		{
			Insert_Begining_Group4(temp->Card_Val, temp->Card_color);
		}
		else if (grupo_ == 5)
		{
			Insert_Begining_Group5(temp->Card_Val, temp->Card_color);
		}
		else if (grupo_ == 6)
		{
			Insert_Begining_Group6(temp->Card_Val, temp->Card_color);
		}
		else if (grupo_ == 7)
		{
			Insert_Begining_Group7(temp->Card_Val, temp->Card_color);
		}
		start = start->next;
		if (count == 1)
		{
			end = start;
		}
		count--;
	}
	return temp;

}

void List::Insert_Begining_Group1(int value, int color) {

	Nodo_Group_1* new_nodo_G1 = new Nodo_Group_1();
	new_nodo_G1->Card_Val = value;
	new_nodo_G1->Card_color = color;

	if (isEmpty())
	{
		start_Group_1 = new_nodo_G1;
		end_Group_1 = new_nodo_G1;
	}
	else
	{
		new_nodo_G1->next = start_Group_1;
		start_Group_1 = new_nodo_G1;
	}
	count_Group_1++;
}


void List::Insert_Begining_Group2(int value, int color) {

	Nodo_Group_2* new_nodo_G2 = new Nodo_Group_2();
	new_nodo_G2->Card_Val = value;
	new_nodo_G2->Card_color = color;

	if (isEmpty())
	{
		start_Group_2 = new_nodo_G2;
		end_Group_2 = new_nodo_G2;
	}
	else
	{
		new_nodo_G2->next = start_Group_2;
		start_Group_2 = new_nodo_G2;
	}
	count_Group_2++;
}

void List::Insert_Begining_Group3(int value, int color) {

	Nodo_Group_3* new_nodo_G3 = new Nodo_Group_3();
	new_nodo_G3->Card_Val = value;
	new_nodo_G3->Card_color = color;

	if (isEmpty())
	{
		start_Group_3 = new_nodo_G3;
		end_Group_3 = new_nodo_G3;
	}
	else
	{
		new_nodo_G3->next = start_Group_3;
		start_Group_3 = new_nodo_G3;
	}
	count_Group_3++;
}

void List::Insert_Begining_Group4(int value, int color) {

	Nodo_Group_4* new_nodo_G4 = new Nodo_Group_4();
	new_nodo_G4->Card_Val = value;
	new_nodo_G4->Card_color = color;

	if (isEmpty())
	{
		start_Group_4 = new_nodo_G4;
		end_Group_4 = new_nodo_G4;
	}
	else
	{
		new_nodo_G4->next = start_Group_4;
		start_Group_4 = new_nodo_G4;
	}
	count_Group_4++;
}


void List::Insert_Begining_Group5(int value, int color) {

	Nodo_Group_5* new_nodo_G5 = new Nodo_Group_5();
	new_nodo_G5->Card_Val = value;
	new_nodo_G5->Card_color = color;

	if (isEmpty())
	{
		start_Group_5 = new_nodo_G5;
		end_Group_5 = new_nodo_G5;
	}
	else
	{
		new_nodo_G5->next = start_Group_5;
		start_Group_5 = new_nodo_G5;
	}
	count_Group_5++;
}


void List::Insert_Begining_Group6(int value, int color) {

	Nodo_Group_6* new_nodo_G6 = new Nodo_Group_6();
	new_nodo_G6->Card_Val = value;
	new_nodo_G6->Card_color = color;

	if (isEmpty())
	{
		start_Group_6 = new_nodo_G6;
		end_Group_6 = new_nodo_G6;
	}
	else
	{
		new_nodo_G6->next = start_Group_6;
		start_Group_6 = new_nodo_G6;
	}
	count_Group_6++;
}

void List::Insert_Begining_Group7(int value, int color) {

	Nodo_Group_7* new_nodo_G7 = new Nodo_Group_7();
	new_nodo_G7->Card_Val = value;
	new_nodo_G7->Card_color = color;

	if (isEmpty())
	{
		start_Group_7 = new_nodo_G7;
		end_Group_7 = new_nodo_G7;
	}
	else
	{
		new_nodo_G7->next = start_Group_7;
		start_Group_7 = new_nodo_G7;
	}
	count_Group_7++;
}


Nodo* List::Extract_Last(int grupo_) {
	Nodo* temp = end;
	if (!isEmpty())
	{
		if (count == 1)
		{
			end = end->next;
			start = end;
		}
		else
		{
			Nodo* pretemp = start;
			temp = pretemp->next;
			while (temp != end)
			{
				pretemp = temp;
				temp = pretemp->next;
			}
			if (grupo_ == 1)
			{
				Insert_Begining_Group1(temp->Card_Val, temp->Card_color);
			}
			else if (grupo_ == 2)
			{
				Insert_Begining_Group2(temp->Card_Val, temp->Card_color);
			}
			else if (grupo_ == 3)
			{
				Insert_Begining_Group3(temp->Card_Val, temp->Card_color);
			}
			else if (grupo_ == 4)
			{
				Insert_Begining_Group4(temp->Card_Val, temp->Card_color);
			}
			else if (grupo_ == 5)
			{
				Insert_Begining_Group5(temp->Card_Val, temp->Card_color);
			}
			else if (grupo_ == 6)
			{
				Insert_Begining_Group6(temp->Card_Val, temp->Card_color);
			}
			else if (grupo_ == 7)
			{
				Insert_Begining_Group7(temp->Card_Val, temp->Card_color);
			}
			pretemp->next = temp->next;
			end = pretemp;
		}
		count--;
	}
	return temp;
}


Nodo* List::Extract_Mazo(int Random_Position, int grupo_) {
	Nodo* temp = start;
	if (!isEmpty())
	{
		if ((count == 1) || (Random_Position == 0))
		{
			return Extract_First(grupo_);
		}
		else
		{
			if (Random_Position >= count)
			{
				return Extract_Last(grupo_);
			}
			else
			{
				Nodo* pretemp = start;
				temp = pretemp->next;
				int index = 1;
				while ((temp) && (index < Random_Position))
				{
					pretemp = temp;
					temp = pretemp->next;
					index++;
				}
				if (grupo_ == 1)
				{
					Insert_Begining_Group1(temp->Card_Val, temp->Card_color);
				}
				else if (grupo_ == 2)
				{
					Insert_Begining_Group2(temp->Card_Val, temp->Card_color);
				}
				else if (grupo_ == 3)
				{
					Insert_Begining_Group3(temp->Card_Val, temp->Card_color);
				}
				else if (grupo_ == 4)
				{
					Insert_Begining_Group4(temp->Card_Val, temp->Card_color);
				}
				else if (grupo_ == 5)
				{
					Insert_Begining_Group5(temp->Card_Val, temp->Card_color);
				}
				else if (grupo_ == 6)
				{
					Insert_Begining_Group6(temp->Card_Val, temp->Card_color);
				}
				else if (grupo_ == 7)
				{
					Insert_Begining_Group7(temp->Card_Val, temp->Card_color);
				}


				pretemp->next = temp->next;
				count--;

			}
		}
	}
	return temp;
}






void List::Cambiar_PosCarta(int pos, int G_I, int G_F)
{
	if (G_I == 1)
	{
		Nodo_Group_1* temp = start_Group_1;
		if (!isEmpty())
		{
			if ((count_Group_1 == 1) || (pos == 0))
			{
				Extract_Active_Grupos_Begin(pos, G_I, G_F);
			}
			else
			{
				if (pos >= count_Group_1)
				{
					Extract_Active_Grupo_End(pos, G_I, G_F);
				}
				else
				{
					Nodo_Group_1* pretemp = start_Group_1;
					temp = pretemp->next;
					int index = 1;
					while ((temp) && (index < pos))
					{
						pretemp = temp;
						temp = pretemp->next;
						index++;
					}
					pretemp->next = temp->next;
					count_Group_1--;
				}
			}
		}
	}


}


Nodo* List::Extract_Active_Grupos_Begin(int Pos, int grupo, int Final_Group) {
	if (grupo == 1)
	{
		Nodo_Group_1* temp = start_Group_1;
		if (!isEmpty())
		{
			Insert_Cartas_Begin(temp->Card_Val, temp->Card_color, grupo, Final_Group);
			start_Group_1 = start_Group_1->next;
			if (count_Group_1 == 1) {
				end_Group_1 = start_Group_1;
			}
			count_Group_1--;
		}

	}
	else
	{
		return 0;
	}


}


Nodo* List::Extract_Active_Grupo_End(int Pos, int grupo, int Final_group) {
	if (grupo == 1)
	{
		Nodo_Group_1* temp = end_Group_1;
		if (!isEmpty())
		{
			if (count_Group_1 == 1)
			{
				end_Group_1 = end_Group_1->next;
				start_Group_1 = end_Group_1;
			}
			else
			{
				Nodo_Group_1* pretemp = start_Group_1;
				temp = pretemp->next;
				while (temp != end_Group_1)
				{
					pretemp = temp;
					temp = pretemp->next;


					if (Final_group == 2)
					{

						Insert_Cartas_Begin(pretemp->Card_Val, pretemp->Card_color, grupo, Final_group);

					}




					count_Group_1--;
				}




				pretemp->next = temp->next;
				end_Group_1 = pretemp;

			}
			count_Group_1--;
		}
	}
	else
	{
		return 0;
	}
}


void List::Insert_Cartas_Begin(int Val, int Color, int grupo_1, int grupo_2) {
	if (grupo_1 == 1)
	{
		if (grupo_2 == 2)
		{
			Nodo_Group_2* new_nodo = new Nodo_Group_2();
			new_nodo->Card_Val = 84;
			new_nodo->Card_color = 1;

			if (isEmpty())
			{
				start_Group_2 = new_nodo;
				end_Group_2 = new_nodo;
			}
			else
			{
				new_nodo->next = start_Group_2;
				start_Group_2 = new_nodo;
			}
			count_Group_2++;

		}
	}


}






Nodo* List::Extraer_De_Grupos(int Pos, int G_I, int G_F)
{

	Nodo* temp_R = start;
	if (G_I != G_F)
	{
		if (G_I == 1)
		{
			Nodo_Group_1* temp = start_Group_1;
			Nodo_Group_1* temp_Anterior = start_Group_1;
			if (!isEmpty())
			{
				if (Pos <= count_Group_1)
				{
					for (size_t i = 0; i < Pos; i++)
					{
						temp = temp->next;
					}
					if (Pos != 1)
					{
						for (size_t i = 0; i < Pos - 1; i++)
						{
							temp_Anterior = temp_Anterior->next;
						}
					}



					if (G_F == 2)
					{
						Nodo_Group_2* tem2 = start_Group_2;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{
							Cambiar_PosCarta(Pos, G_I, G_F);

						}
					}
					else if (G_F == 3)
					{
						Nodo_Group_3* tem2 = start_Group_3;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 4)
					{
						Nodo_Group_4* tem2 = start_Group_4;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 5)
					{
						Nodo_Group_5* tem2 = start_Group_5;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 6)
					{
						Nodo_Group_6* tem2 = start_Group_6;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{


						}
					}
					else if (G_F == 7)
					{
						Nodo_Group_7* tem2 = start_Group_7;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
				}
			}
		}
		else if (G_I == 2)
		{
			Nodo_Group_2* temp = start_Group_2;
			Nodo_Group_2* temp_Anterior = start_Group_2;
			if (!isEmpty())
			{
				if (Pos <= count_Group_2)
				{
					for (size_t i = 0; i < Pos; i++)
					{
						temp = temp->next;
					}

					if (Pos != 1)
					{
						for (size_t i = 0; i < Pos - 1; i++)
						{
							temp_Anterior = temp_Anterior->next;
						}
					}

					if (G_F == 1)
					{
						Nodo_Group_1* tem2 = start_Group_1;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 3)
					{
						Nodo_Group_3* tem2 = start_Group_3;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 4)
					{
						Nodo_Group_4* tem2 = start_Group_4;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 5)
					{
						Nodo_Group_5* tem2 = start_Group_5;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 6)
					{
						Nodo_Group_6* tem2 = start_Group_6;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 7)
					{
						Nodo_Group_7* tem2 = start_Group_7;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
				}
			}

		}
		else if (G_I == 3)
		{
			Nodo_Group_3* temp = start_Group_3;
			Nodo_Group_3* temp_Anterior = start_Group_3;
			if (!isEmpty())
			{
				if (Pos <= count_Group_3)
				{
					for (size_t i = 0; i < Pos; i++)
					{
						temp = temp->next;
					}

					if (Pos != 1)
					{
						for (size_t i = 0; i < Pos - 1; i++)
						{
							temp_Anterior = temp_Anterior->next;
						}
					}


					if (G_F == 1)
					{
						Nodo_Group_1* tem2 = start_Group_1;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 2)
					{
						Nodo_Group_2* tem2 = start_Group_2;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 4)
					{
						Nodo_Group_4* tem2 = start_Group_4;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 5)
					{
						Nodo_Group_5* tem2 = start_Group_5;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 6)
					{
						Nodo_Group_6* tem2 = start_Group_6;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 7)
					{
						Nodo_Group_7* tem2 = start_Group_7;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
				}

			}
		}
		else if (G_I == 4)
		{
			Nodo_Group_4* temp = start_Group_4;
			Nodo_Group_4* temp_Anterior = start_Group_4;
			if (!isEmpty())
			{
				if (Pos <= count_Group_4)
				{
					for (size_t i = 0; i < Pos; i++)
					{
						temp = temp->next;
					}

					if (Pos != 1)
					{
						for (size_t i = 0; i < Pos - 1; i++)
						{
							temp_Anterior = temp_Anterior->next;
						}
					}

					if (G_F == 1)
					{
						Nodo_Group_1* tem2 = start_Group_1;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 2)
					{
						Nodo_Group_2* tem2 = start_Group_2;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 3)
					{
						Nodo_Group_3* tem2 = start_Group_3;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 5)
					{
						Nodo_Group_5* tem2 = start_Group_5;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 6)
					{
						Nodo_Group_6* tem2 = start_Group_6;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 7)
					{
						Nodo_Group_7* tem2 = start_Group_7;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
				}

			}
		}
		else if (G_I == 5)
		{
			Nodo_Group_5* temp = start_Group_5;
			Nodo_Group_5* temp_Anterior = start_Group_5;
			if (!isEmpty())
			{
				if (Pos <= count_Group_5)
				{
					for (size_t i = 0; i < Pos; i++)
					{
						temp = temp->next;
					}

					if (Pos != 1)
					{
						for (size_t i = 0; i < Pos - 1; i++)
						{
							temp_Anterior = temp_Anterior->next;
						}
					}

					if (G_F == 1)
					{
						Nodo_Group_1* tem2 = start_Group_1;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 2)
					{
						Nodo_Group_2* tem2 = start_Group_2;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 4)
					{
						Nodo_Group_3* tem2 = start_Group_3;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 3)
					{
						Nodo_Group_4* tem2 = start_Group_4;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 6)
					{
						Nodo_Group_6* tem2 = start_Group_6;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 7)
					{
						Nodo_Group_7* tem2 = start_Group_7;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
				}

			}


		}
		else if (G_I == 6)
		{
			Nodo_Group_6* temp = start_Group_6;
			Nodo_Group_6* temp_Anterior = start_Group_6;
			if (!isEmpty())
			{
				if (Pos <= count_Group_6)
				{
					for (size_t i = 0; i < Pos; i++)
					{
						temp = temp->next;
					}


					if (Pos != 1)
					{
						for (size_t i = 0; i < Pos - 1; i++)
						{
							temp_Anterior = temp_Anterior->next;
						}
					}

					if (G_F == 1)
					{
						Nodo_Group_1* tem2 = start_Group_1;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 2)
					{
						Nodo_Group_2* tem2 = start_Group_2;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 4)
					{
						Nodo_Group_3* tem2 = start_Group_3;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 3)
					{
						Nodo_Group_4* tem2 = start_Group_4;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 5)
					{
						Nodo_Group_5* tem2 = start_Group_5;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 7)
					{
						Nodo_Group_7* tem2 = start_Group_7;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
				}

			}
		}
		else
		{
			Nodo_Group_7* temp = start_Group_7;
			Nodo_Group_7* temp_Anterior = start_Group_7;
			if (!isEmpty())
			{
				if (Pos <= count_Group_7)
				{
					for (size_t i = 0; i < Pos; i++)
					{
						temp = temp->next;
					}

					if (Pos != 1)
					{
						for (size_t i = 0; i < Pos - 1; i++)
						{
							temp_Anterior = temp_Anterior->next;
						}
					}

					if (G_F == 1)
					{
						Nodo_Group_1* tem2 = start_Group_1;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 2)
					{
						Nodo_Group_2* tem2 = start_Group_2;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 4)
					{
						Nodo_Group_3* tem2 = start_Group_3;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 3)
					{
						Nodo_Group_4* tem2 = start_Group_4;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 5)
					{
						Nodo_Group_5* tem2 = start_Group_5;
						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}
					else if (G_F == 6)
					{
						Nodo_Group_6* tem2 = start_Group_6;

						if (temp->Card_Val > tem2->Card_Val && temp->Card_color != tem2->Card_color)
						{



						}
					}



				}

			}
		}




		return temp_R;
	}
	else
	{

	}
}



bool List::isEmpty() {
	return count == 0;

}