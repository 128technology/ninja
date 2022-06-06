# Ninja

This is a forked repo of [ninja](https://github.com/ninja-build/ninja), for use by [Juniper Networks](https://www.juniper.net).

Branches in this fork are as follows:

* `master` and `release` belong to the [upstream repo](https://github.com/ninja-build/ninja), and are not modified by Juniper.
* `master-jnpr` is Juniper's development branch for `ninja`, and is branched off of `master`. Changes should branch off of that, and PRs target it.
* `release-jnpr` is Juniper's "released" version used by developers and CI, from which the internal RPM is built for a given `git` `tag`.


## Background

(_this section is from the upstream original repo_)

Ninja is a small build system with a focus on speed.
https://ninja-build.org/

See [the manual](https://ninja-build.org/manual.html) or
`doc/manual.asciidoc` included in the distribution for background
and more details.

Run `./ninja -h` for Ninja help.

Installation is not necessary because the only required file is the
resulting ninja binary. However, to enable features like Bash
completion and Emacs and Vim editing modes, some files in misc/ must be
copied to appropriate locations.


## Building Ninja locally

If you are in Juniper, you can build Ninja via CMake locally on a dev VM, by turning the `JUNIPER` option on.

```
cmake -Bbuild-ninja -DJUNIPER=ON
cmake --build build-ninja
```

The `ninja` binary will now be inside the `build-ninja` directory (you can
choose any other name you like).

To run the unit tests:

```
./build-ninja/ninja_test
```
