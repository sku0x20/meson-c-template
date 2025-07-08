# meson c template

- install watchdog (https://pypi.org/project/watchdog/)

- run this command in a separate terminal

```shell
python watch.py src test
```

```shell
meson setup buildDir
```

---

```shell
meson compile -C buildDir
```

OR

```shell
cd buildDir
meson compile
```

---

```shell
meson test -C buildDir
```

OR

```shell
cd buildDir
meson test
```