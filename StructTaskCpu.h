struct MTask {
	int ID         = -1; // id ������
	int countCpu   = -1; // ����������� ���������� �����������
	int countTact  = -1; // ����������� ���������� ������
};

struct MCpu {
	bool Busy    = false; // ����� ��� ��� ���������
	int  TaskID  = -1;    // ID ����������� ������ ������
	int perfTact = -1;    // ������� �������� ������ � ������� ������
};