#include <iostream>

char * my_strstr(char * str1, const char * str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);

	for (int i = 0; i < (len1 - len2); i++)
	{
		if (str1[i] == str2[0])
		{
			bool flag = true;
			for (int j = 1; j < len2; j++)
			{
				if (str1[i + j] != str2[j])
					flag = false;
			}
			if (flag)
				return (str1 + i);
		}
	}
	return nullptr;
}


int main()
{
	char *str1 = "Hi my name is Denis";
	char *str2 = "my";

	std::cout << "My: " << my_strstr(str1, str2) << std::endl;
	std::cout << "String:  " << strstr(str1, str2) << std::endl;
	system("pause");
	return 0;
}