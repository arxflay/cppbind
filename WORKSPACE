load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "rules_python",
    sha256 = "778197e26c5fbeb07ac2a2c5ae405b30f6cb7ad1f5510ea6fdac03bded96cc6f",
    url = "https://github.com/bazelbuild/rules_python/releases/download/0.2.0/rules_python-0.2.0.tar.gz",
)

# ----------------------------------------------pybind---------------------------------------------------
rules_pybind_sha = "26973c0ff320cb4b39e45bc3e4297b82bc3a6c09"

http_archive(
    name = "pybind11_bazel",
    strip_prefix = "pybind11_bazel-%s" % rules_pybind_sha,
    urls = ["https://github.com/pybind/pybind11_bazel/archive/%s.zip" % rules_pybind_sha],
)

pybind_version = "2.6.2"

http_archive(
    name = "pybind11",
    build_file = "@pybind11_bazel//:pybind11.BUILD",
    strip_prefix = "pybind11-%s" % pybind_version,
    urls = ["https://github.com/pybind/pybind11/archive/v%s.tar.gz" % pybind_version],
)

load("@pybind11_bazel//:python_configure.bzl", "python_configure")

python_configure(name = "local_config_python")

# ----------------------------------------------swift---------------------------------------------------

http_archive(
    name = "build_bazel_rules_swift",
    sha256 = "d0e5f888b2ccce42c92e6d4686b5507b4230462627f965f9d39862e11ae9fb35",
    url = "https://github.com/bazelbuild/rules_swift/releases/download/0.18.0/rules_swift.0.18.0.tar.gz",
)

load(
    "@build_bazel_rules_swift//swift:repositories.bzl",
    "swift_rules_dependencies",
)

swift_rules_dependencies()

load(
    "@build_bazel_rules_swift//swift:extras.bzl",
    "swift_rules_extra_dependencies",
)

swift_rules_extra_dependencies()

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# ----------------------------------------------python---------------------------------------------------

http_archive(
    name = "rules_python",
    sha256 = "778197e26c5fbeb07ac2a2c5ae405b30f6cb7ad1f5510ea6fdac03bded96cc6f",
    url = "https://github.com/bazelbuild/rules_python/releases/download/0.2.0/rules_python-0.2.0.tar.gz",
)

# ----------------------------------------------pybind---------------------------------------------------
rules_pybind_sha = "26973c0ff320cb4b39e45bc3e4297b82bc3a6c09"

http_archive(
    name = "pybind11_bazel",
    strip_prefix = "pybind11_bazel-%s" % rules_pybind_sha,
    urls = ["https://github.com/pybind/pybind11_bazel/archive/%s.zip" % rules_pybind_sha],
)

pybind_version = "2.6.2"

http_archive(
    name = "pybind11",
    build_file = "@pybind11_bazel//:pybind11.BUILD",
    strip_prefix = "pybind11-%s" % pybind_version,
    urls = ["https://github.com/pybind/pybind11/archive/v%s.tar.gz" % pybind_version],
)

load("@pybind11_bazel//:python_configure.bzl", "python_configure")

python_configure(name = "local_config_python")

# ----------------------------------------------kotlin---------------------------------------------------
rules_kotlin_version = "legacy-1.3.0"

rules_kotlin_sha = "4fd769fb0db5d3c6240df8a9500515775101964eebdf85a3f9f0511130885fde"

http_archive(
    name = "io_bazel_rules_kotlin",
    sha256 = rules_kotlin_sha,
    strip_prefix = "rules_kotlin-%s" % rules_kotlin_version,
    type = "zip",
    urls = ["https://github.com/bazelbuild/rules_kotlin/archive/%s.zip" % rules_kotlin_version],
)

load("@io_bazel_rules_kotlin//kotlin:kotlin.bzl", "kotlin_repositories", "kt_register_toolchains")

kotlin_repositories()  # if you want the default. Otherwise see custom kotlinc distribution below

kt_register_toolchains()  # to use the default toolchain, otherwise see toolchains below

# ----------------------------------------------swift---------------------------------------------------

http_archive(
    name = "build_bazel_rules_swift",
    sha256 = "d0e5f888b2ccce42c92e6d4686b5507b4230462627f965f9d39862e11ae9fb35",
    url = "https://github.com/bazelbuild/rules_swift/releases/download/0.18.0/rules_swift.0.18.0.tar.gz",
)

load(
    "@build_bazel_rules_swift//swift:repositories.bzl",
    "swift_rules_dependencies",
)

swift_rules_dependencies()

load(
    "@build_bazel_rules_swift//swift:extras.bzl",
    "swift_rules_extra_dependencies",
)

swift_rules_extra_dependencies()

# ----------------------------------------------kotlin---------------------------------------------------
rules_kotlin_version = "legacy-1.3.0"

rules_kotlin_sha = "4fd769fb0db5d3c6240df8a9500515775101964eebdf85a3f9f0511130885fde"

http_archive(
    name = "io_bazel_rules_kotlin",
    sha256 = rules_kotlin_sha,
    strip_prefix = "rules_kotlin-%s" % rules_kotlin_version,
    type = "zip",
    urls = ["https://github.com/bazelbuild/rules_kotlin/archive/%s.zip" % rules_kotlin_version],
)

load("@io_bazel_rules_kotlin//kotlin:kotlin.bzl", "kotlin_repositories", "kt_register_toolchains")

kotlin_repositories()  # if you want the default. Otherwise see custom kotlinc distribution below

kt_register_toolchains()  # to use the default toolchain, otherwise see toolchains below

# examples
local_repository(
    name = "examples",
    path = "./examples/primitives",
)

# iegen requirements
load("@rules_python//python:pip.bzl", "pip_install")

# Create a central repo that knows about the dependencies needed for
# requirements.txt.
pip_install(
    name = "reqs",
    requirements = "//src:requirements.txt",
)