#include "BasicSceleton.h"

int main(int argc, char** argv) 
{
    auto creator = [](const Wt::WEnvironment& env) {return std::move(std::make_unique<ControlExample>(env)); };
    return Wt::WRun(argc, argv, creator);
}