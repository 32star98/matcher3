#pragma once
class cmds
{
public:
	static cmds* ins;
	~cmds();
private:
	cmds();
public:
	cmds instance();
public:
	char* nums_con = ".";
	int nums_con_int[1] = { -1 };
	char* types_1 = ".+?*|^()[]{}\\";
	char* types_2 = "^-]\\";
	char* types_3 = ",}";

	int maxlen = 1024;
	int strlen(char* ins);
	int strlen(int* ins);
};

