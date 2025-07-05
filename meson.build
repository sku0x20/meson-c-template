project('spiking', 'c')

custom_target(
    'grabfiles',
    build_always_stale: true,
    build_by_default: true,
    output: 'files.txt',
    command: ['python3', meson.project_source_root() + '/grab_files.py', meson.project_source_root()],
    capture: false,
    install: false
)

c = run_command(['python3', '-c', 'print(open("files.txt").read())'], check: true)
sources = c.stdout().strip().split('\n')
executable('spike', sources)
