workspace(name = "onedal")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
http_archive(
  name = "bazel_skylib",
  urls = [
    "https://mirror.bazel.build/github.com/bazelbuild/bazel-skylib/releases/download/1.0.2/bazel-skylib-1.0.2.tar.gz",
    "https://github.com/bazelbuild/bazel-skylib/releases/download/1.0.2/bazel-skylib-1.0.2.tar.gz",
  ],
  sha256 = "97e70364e9249702246c0e9444bccdc4b847bed1eb03c5a3ece4f83dfe6abc44",
)

load("@onedal//build/bazel/toolchains:configure_auto.bzl", "onedal_cc_toolchain")
onedal_cc_toolchain(
    name = "onedal_cc_toolchain",
)

register_toolchains(
    "@onedal_cc_toolchain//:cc_toolchain_linux"
)
