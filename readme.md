# meson c template

- setup build dir

```shell
meson setup buildDir
```

---

- compile

```shell
meson compile -C buildDir
```

OR

```shell
cd buildDir
meson compile
```

---

- run test

```shell
meson test -C buildDir
```

OR

```shell
cd buildDir
meson test
```

---

- watching file changes (https://mesonbuild.com/FAQ.html#but-i-really-want-to-use-wildcards)
- install watchdog (https://pypi.org/project/watchdog/)
- run this command in a separate terminal

```shell
python watch.py src test
```