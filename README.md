This is a script which can be run to automatically arrange your Xfce Desktop icons ever 1 second, performance is usually 1.2M/1.4M of RAM in my experience.

<img src="promo.gif" type="image/gif"></img>

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

FreeBSD/OpenBSD/NetBSD:

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
