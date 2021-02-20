#pragma once
#include <stdio.h>;

char* max_lenght_word(char *string)
{
	int max = 0;
	char *max_word = (char*)malloc(sizeof(char) * 100);
	char word[100];
	int counter = 0;
	for (int i = 0; i < 200; i++)
	{
		if (string[i] != ' ' && string[i] != '\n' && string[i] != '.' 
			&& string[i] != ',' && string[i] != ':' && string[i] != ';'
			&& string[i] != '?' && string[i] != '!')
		{
			word[counter] = string[i];
			counter += 1;
		}
		else
		{
			if (counter > max)
			{
				max = counter;
				for (i = 0; i < max; i++)
				{
					max_word[i] = word[i];
				}
				counter = 0;
			}
			else
			{
				counter = 0;
			}

			if (string[i] == '\n')
			{
				break;
			}
		}
	}
	max_word[max] = '\0';
	return max_word;
}

