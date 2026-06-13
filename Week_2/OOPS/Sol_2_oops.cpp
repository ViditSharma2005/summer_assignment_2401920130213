#include <iostream>

namespace music {
    class Playable {
    public:
        virtual void play() = 0;
        virtual ~Playable() = default;
    };

    namespace string {
        class Veena : public Playable {
        public:
            void play() override {
                std::cout << "Playing Veena..." << std::endl;
            }
        };
    }

    namespace wind {
        class Saxophone : public Playable {
        public:
            void play() override {
                std::cout << "Playing Saxophone..." << std::endl;
            }
        };
    }
}

namespace live {
    class Test {
    public:
        static void run() {
            music::string::Veena veena;
            std::cout << "a. Veena instance directly: ";
            veena.play();

            music::wind::Saxophone saxophone;
            std::cout << "b. Saxophone instance directly: ";
            saxophone.play();

            music::Playable* playable1 = &veena;
            std::cout << "c. Playable variable (holding Veena): ";
            playable1->play();

            music::Playable* playable2 = &saxophone;
            std::cout << "c. Playable variable (holding Saxophone): ";
            playable2->play();
        }
    };
}

int main() {
    live::Test::run();
    return 0;
}
