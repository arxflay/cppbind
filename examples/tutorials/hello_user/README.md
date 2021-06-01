## Hello user tutorial.

This is a small hello user library.

Here we have a c++ source code(under cxx directory) and generated bindings for swift, kotlin and python.

You can find generated code for each language under a folder named by the language.
This is configured in **iegen_config.cfg** file.

In this example we use bazel for build.

To generate the wrappers yourself use the following command:
 ```bash
 iegen kotlin swift python
 ```

For iegen installation and configuration check the documentation [iegen docs](https://iegen.picsart.com).

**NOTE**

To be able to run the above command on Mac OS X you need to pass **--target** and **--sysroot** to clang.
To do that use **clang_args** property in **iegen_config.cfg** file. It's a comma separated string.

In this example we have a small usage program for each language which creates some users and greets them.
You can find them under usage directory.

To run the program for three languages run the following command:
 ```bash
 bazel run hello_user_swift hello_user_python hello_user_kotlin
 ```