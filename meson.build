project('spiking', 'c')

src_files = run_command(['python3', 'grab_files.py', 'src'], check: true)
sources = src_files.stdout().strip().split('\n')
executable(
    'spike',
    'main.c',sources,
    include_directories: ['src']
)

test_files = run_command(['python3', 'grab_files.py', 'test'], check: true)
tests = test_files.stdout().strip().split('\n')
foreach t: tests
    name = t.replace('/', '_').replace('.c', '')
    exe = executable(
        name,
        t, sources,
        include_directories: ['src']
    )
    test(name, exe)
endforeach