#include <iostream>

// Dependency class
class Logger {
public:
    void log(const std::string& message) {
        std::cout << "Logging: " << message << std::endl;
    }
};

// Class with dependency injected through constructor
class Service {
private:
    Logger& logger; // Reference to Logger dependency
public:
    // Constructor Injection
    Service(Logger& logger) : logger(logger) {}

    void doSomething() {
        logger.log("Doing something in Service");
    }
};

int main() {
    Logger logger;
    Service service(logger); // Dependency injected into Service
    service.doSomething();

    return 0;
}
