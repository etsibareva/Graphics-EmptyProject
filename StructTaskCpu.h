struct MTask {
	int ID         = -1; // id задачи
	int countCpu   = -1; // необходимое количество процессоров
	int countTact  = -1; // необходимое количество тактов
};

struct MCpu {
	bool Busy    = false; // занят или нет процессор
	int  TaskID  = -1;    // ID исполняемой сейчас задачи
	int perfTact = -1;    // сколько осталось тактов в текущей задаче
};