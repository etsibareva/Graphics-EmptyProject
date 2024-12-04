#include "C:/Users/catri/source/repos/mp2-lab5/mp2-lab5/TQueue.h"
#include "StructTaskCpu.h"
#include <string>
#include <iostream>

public class Executor {
	TQueue<MTask> qTask;
	MCpu* allCpu;

	int countCpu           = 0;
	int maxCountCpu        = 0; // ���������� ���������� ����������� ����������� ��� ������
	int maxCountTact       = 0; // ���������� ���������� ������ ����������� ��� ������
	int addProbability     = 70;

	int countBusyProc      = 0; // ���������� ��������������� �����������
	int currAddID          = 0; // ID ����������� �������

public:
	Executor(int _countCpu, int _maxCountCpu, int _maxCountTact, int _addProbability) {
		countCpu       = _countCpu;
		allCpu = new MCpu[countCpu];
		maxCountCpu    = _maxCountCpu;
		maxCountTact   = _maxCountTact;
		addProbability = _addProbability;
	}

	void addTask();  // ���������� ������� � �������
	void execTask(); // ����������� ������� �� ����������
	void tick();     // ����������� ���� ��� ���� ����� �� �����������

	std::string getCpu(int ind) {
		return 
		std::to_string(allCpu[ind].TaskID) +
		" : " +
		std::to_string(allCpu[ind].perfTact);
	}

	void getQ   (std::string* arr); // ���������� ������ ����� ���� "<ID �������> : <� countTact>"
	void getProc(std::string* arr); // ���������� ������ ����� ���� "<TaskID ����������> : <��� perfTact>"

	int getCountBusyProc() { return countBusyProc; }
	int getCountQTask()    { return qTask.getCounterSize(); }
	int getTaskID(int ind) { return allCpu[ind].TaskID; }
};

void Executor::addTask() {
	int randCpuCount = rand() % maxCountCpu;
	int randTactCount = rand() % maxCountTact;

	MTask currTask = { currAddID, randCpuCount, randTactCount };

	int res = 0;
	int randNum = rand() % 100;
	if (randNum < addProbability)
		if (!qTask.isFull()) {
			qTask.Push(currTask);
			currAddID++;
		}

}  // ���������� ������� � �������


void Executor::execTask() {
	if (!qTask.isEmpty()) {
		MTask currTask = qTask.Pop();

		if (currTask.countCpu <= countCpu-countBusyProc) {
			countBusyProc += currTask.countCpu;

			int ProcNeeded = currTask.countCpu;
			for (int i = 0; i < countCpu; i++)
				if (ProcNeeded > 0)
				if (allCpu[i].Busy == false) {
					allCpu[i].Busy = true;
					ProcNeeded--;
					allCpu[i].TaskID = currTask.ID;
					allCpu[i].perfTact = currTask.countTact;
				}
		}
		else {
			qTask.Push(currTask);
		}
	}


}; // ����������� ������� �� ����������



void Executor::tick() {
	for (int i = 0; i < countCpu; i++) {
		if (allCpu[i].Busy) {
			allCpu[i].perfTact--;
			if (allCpu[i].perfTact <= 0)
			{
				allCpu[i].Busy = false;
				allCpu[i].TaskID = -1;
				countBusyProc--;
			}
		}
	}
};     // ����������� ���� ��� ���� ����� �� �����������

void Executor::getQ(std::string* arr) {
	if (qTask.getCounterSize() != 0) {
		std::string* tmp = new std::string[qTask.getCounterSize()];
		MTask* tasks = new MTask[qTask.getCounterSize()];

		// ��������� ������� �������
		qTask.getQ(tasks);

		for (int i = 0; i < qTask.getCounterSize(); i++)
			arr[i] =
			std::to_string(tasks[i].ID) +
			" : " +
			std::to_string(tasks[i].countTact);
	}
};

void Executor::getProc(std::string* arr) {
	for (int i = 0; i < countBusyProc; i++)
	//for (int i = 0; i < countCpu-countBusyProc; i++)
		arr[i] = 
			std::to_string(allCpu[i].TaskID) + 
			" : " + 
			std::to_string(allCpu[i].perfTact);
};
