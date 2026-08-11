#include "TemplateProject.Application.hpp"

#include <Futurewalker.Base.Environment.hpp>

#include <Futurewalker.Main.Main.hpp>

namespace Futurewalker
{
auto Main() -> Async<ExitCode>
{
    try
    {
        auto env = Environment();
        auto app = TemplateProject::Application::Make();
        co_await app->Run();
    }
    catch (...)
    {
        co_return ExitCode::Failure;
    }
    co_return ExitCode::Success;
}
}
