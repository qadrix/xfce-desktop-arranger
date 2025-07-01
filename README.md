This is a script which can be run to automatically arrange your Xfce Desktop icons ever 1 second, performance is usually 1.2M of RAM in my experience.

First of all ensure that you have a C compiler, pick GCC or Clang.

Ubuntu/Debian based:

GCC

```
sudo apt-get install gcc
```

Clang

```
sudo apt-get install clang
````

Fedora

GCC

```
sudo dnf install gcc
```

Clang

```
sudo dnf install clang
```

Gentoo:

GCC

```
sudo emerge --ask gcc
```

or

```
doas emerge --ask gcc
```

Clang

```
sudo emerge --ask clang
```

or

```
doas emerge --ask clang
```

FreeBSD/OpenBSD/NetBSD:

GCC

```
sudo pkg install gcc
```

or

```
doas pkg install gcc
```

Clang

```
sudo pkg install clang
```

or

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
