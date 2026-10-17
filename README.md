# C++ Training

Three small C++ exercises exploring function overloading, shape interfaces, and argument passing. Each exercise has its own Visual Studio solution and executable entry point.

## Exercise index

| Exercise | Entry point | Focus |
| --- | --- | --- |
| [Polymorphism](Polymorphism/Polymorphism.sln) | [main.cpp](Polymorphism/main.cpp) | Overloaded maximum functions and a variadic-argument example |
| [Virtual and pure virtual functions](VirtualPureVirtualFunctions/VirtualPureVirtualFunctions.sln) | [Main.cpp](VirtualPureVirtualFunctions/Main.cpp) | Shape, Circle, and Square interfaces |
| [Value, pointer, and reference passing](PassByValuePointerReference/PassByValuePointerReference.sln) | [Source.cpp](PassByValuePointerReference/PassByValuePointerReference/Source.cpp) | How function arguments affect caller-owned values |

## Build and explore

The checked-in project files use the Visual C++ `v140` toolset, associated with Visual Studio 2015. Open one of the solutions in a compatible Windows Visual Studio installation, choose a configuration, and build that exercise. A newer compiler may require retargeting.

Read the entry point alongside its related class or function definitions, then compare the console output after changing the dispatch or argument-passing behavior. These are learning exercises, not a general-purpose library.

## Project status

The repository preserves source and generated Visual Studio artifacts. Those IDE/build files are historical material, not verified releases. No automated tests or current compiler validation are recorded in this documentation review.

## License

No license file is included in this repository.
