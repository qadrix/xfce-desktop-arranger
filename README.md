This is a script which can be run to automatically arrange your Xfce Desktop icons ever 1 second, performance is usually 1.2M to 1.4M of RAM in my experience.

<img src="promo.gif" type="image/gif"></img>

You can pick between using the C compiled version, or the Bash version if you want to use it even faster for whatever reason.

First of all ensure that you have a C compiler, pick GCC or Clang.

<h2>Ubuntu/Debian based:</h2>

GCC

```
sudo apt-get install gcc
```

Clang

```
sudo apt-get install clang
````

<h2>Fedora</h2>

GCC

```
sudo dnf install gcc
```

Clang

```
sudo dnf install clang
```

<h2>Gentoo:</h2>

GCC for sudo

```
sudo emerge --ask gcc
```

GCC for doas

```
doas emerge --ask gcc
```

Clang for sudo

```
sudo emerge --ask clang
```

Clang for doas

```
doas emerge --ask clang
```

<h2>Linux From Scratch (LFS)</h2>

GCC Source: https://gcc.gnu.org/git/gcc.git

<br>

Clang Source: https://clang.llvm.org/

<h2>FreeBSD/OpenBSD/NetBSD:</h2>

GCC for sudo

```
sudo pkg install gcc
```

GCC for doas

```
doas pkg install gcc
```

Clang for sudo

```
sudo pkg install clang
```

Clang for doas

```
doas pkg install clang
```

Compilation:

```
gcc <path to arrange.c> -o arrange
```

or

```
clang <path to arrange.c> -o arrange
```

Then just place arrange file wherever you want it to be.

To get it to start automatically:

To go: Applications > Settings > Settings Menu > Session and Startup > Application Autostart > + Add

Name: Arrange Desktop Icons
Description: A script to automatically arrange your Desktop icons for Xfce.
Command: <path>
Trigger: on login
