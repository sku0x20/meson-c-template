project('spiking', 'c')
executable('spike', 'src/main.c')


custom_target(
    'grabfiles',
    build_always_stale: true,
    build_by_default: true,
    output: 'files.txt',
    command: ['python3', meson.project_source_root() + '/grab_files.py', meson.project_source_root()],
    capture: false,
    install: false
)
