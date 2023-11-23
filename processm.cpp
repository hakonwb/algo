#include <iostream>
#include <string>
#include <vector>

class ProcessControlBlock {
public:
    int processID;
    std::string state;
    int programCounter;
    // Aquí puedes agregar más atributos como uso de memoria, tiempos, etc.

    ProcessControlBlock(int id) : processID(id), state("new"), programCounter(0) {}

    void displayInfo() {
        std::cout << "Proceso ID: " << processID << "\n";
        std::cout << "Estado: " << state << "\n";
        std::cout << "Contador de Programa: " << programCounter << "\n\n";
    }
};

class Scheduler {
private:
    std::vector<ProcessControlBlock> queue;

public:
    void addProcess(ProcessControlBlock pcb) {
        queue.push_back(pcb);
    }

    void displayQueue() {
        for (auto& pcb : queue) {
            pcb.displayInfo();
        }
    }
};

int main() {
    Scheduler scheduler;

    // Creando y añadiendo procesos
    ProcessControlBlock pcb1(1);
    ProcessControlBlock pcb2(2);
    ProcessControlBlock pcb3(3);

    scheduler.addProcess(pcb1);
    scheduler.addProcess(pcb2);
    scheduler.addProcess(pcb3);

    // Mostrando la cola del scheduler
    scheduler.displayQueue();

    std::cout << "El Hakon";

    return 0;
}
