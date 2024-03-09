void task1() {
    enum class Task1States {
        INIT,
        WAIT_FOR_TIMEOUT
    };

    static Task1States task1State = Task1States::INIT;
    static uint32_t lastTimeTask1;
    static constexpr uint32_t INTERVAL_TASK1 = 1000; // 1 Hz

    switch (task1State) {
        case Task1States::INIT: {
            Serial.begin(115200);
            lastTimeTask1 = millis();
            task1State = Task1States::WAIT_FOR_TIMEOUT;
            break;
        }

        case Task1States::WAIT_FOR_TIMEOUT: {
            uint32_t currentTime = millis();
            if ((currentTime - lastTimeTask1) >= INTERVAL_TASK1) {
                lastTimeTask1 = currentTime;
                Serial.print("Mensaje a 1 Hz\n");
            }
            break;
        }

        default: {
            break;
        }
    }
}

void task2() {
    enum class Task2States {
        INIT,
        WAIT_FOR_TIMEOUT
    };

    static Task2States task2State = Task2States::INIT;
    static uint32_t lastTimeTask2;
    static constexpr uint32_t INTERVAL_TASK2 = 2000; // 0.5 Hz

    switch (task2State) {
        case Task2States::INIT: {
            lastTimeTask2 = millis();
            task2State = Task2States::WAIT_FOR_TIMEOUT;
            break;
        }

        case Task2States::WAIT_FOR_TIMEOUT: {
            uint32_t currentTime = millis();
            if ((currentTime - lastTimeTask2) >= INTERVAL_TASK2) {
                lastTimeTask2 = currentTime;
                Serial.print("Mensaje a 0.5 Hz\n");
            }
            break;
        }

        default: {
            break;
        }
    }
}

void task3() {
    enum class Task3States {
        INIT,
        WAIT_FOR_TIMEOUT
    };

    static Task3States task3State = Task3States::INIT;
    static uint32_t lastTimeTask3;
    static constexpr uint32_t INTERVAL_TASK3 = 4000; // 0.25 Hz

    switch (task3State) {
        case Task3States::INIT: {
            lastTimeTask3 = millis();
            task3State = Task3States::WAIT_FOR_TIMEOUT;
            break;
        }

        case Task3States::WAIT_FOR_TIMEOUT: {
            uint32_t currentTime = millis();
            if ((currentTime - lastTimeTask3) >= INTERVAL_TASK3) {
                lastTimeTask3 = currentTime;
                Serial.print("Mensaje a 0.25 Hz\n");
            }
            break;
        }

        default: {
            break;
        }
    }
}

void setup() {
    Serial.begin(115200);
}

void loop() {
    task1();
    task2();
    task3();
}
