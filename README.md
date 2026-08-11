# futurewalker-cpp-template

A minimal C++ application project template using [Futurewalker](https://github.com/futurewalker-org/futurewalker).  
You can copy this repository and start developing your own application.  

## How to build the project

### Preparation

#### Install Conan package manager

This project uses [Conan](https://conan.io/) package manager for downloading dependencies.  
Install Conan with `pip`:

```bash
pip install conan
```

#### Add Skia local package

The default conan registry currently does not provide recipe for [Skia](https://skia.org/) graphics library.  
Add custom recipe for Skia as [Local Recipe Index Repository](https://docs.conan.io/2/tutorial/conan_repositories/setup_local_recipes_index.html):

```bash
git clone https://github.com/mocabe/conan-skia
conan remote add conan_skia ./conan-skia
```

### Building

#### Install dependencies (first time only)

Install dependencies required to build the app.  
This will generate CMake scripts to consume dependencies at build folder.   
It also generates `CMakeUserPresets.json`, which can be used to populate CMake arguments automatically.

```bash
# For Windows:
conan install -pr:h=./profile/windows_x86_64_Debug.profile --build=missing
# For macOS:
conan install -pr:h=./profile/macOS_armv8_Debug.profile --build=missing
```

#### Configure with CMake (first time only)

```bash
cmake --preset conan-default  
```

#### Build with CMake

```bash
cmake --build --preset conan-debug 
```

## Start building your app

1. grep `TemplateProject` and replace it to whatever name your prefer.
2. grep `uuid=` and change it to unique one.
3. See [examples](https://github.com/futurewalker-org/futurewalker/tree/main/examples) to learn how to implement your UI with the framework.

## License

Public Domain (the CC0 1.0 Universal)
