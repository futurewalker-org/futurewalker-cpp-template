cmake_minimum_required(VERSION 3.31)

project(TemplateProject)

include(FetchContent)

FetchContent_Declare(
  futurewalker
  GIT_REPOSITORY https://github.com/futurewalker-org/futurewalker
  GIT_TAG main
)
FetchContent_MakeAvailable(futurewalker)

add_subdirectory(src)
