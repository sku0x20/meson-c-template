project('spiking', 'c')

c = run_command(['python3', 'grab_files.py', 'src'], check: true)
sources = c.stdout().strip().split('\n')
executable('spike', sources)

test_files = run_command(['python3', 'grab_files.py', 'test'], check: true)
tests = test_files.stdout().strip().split('\n')
foreach t: tests
    name = t.replace('/', '_').replace('.c', '')
    exe = executable(name, t)
    test(name, exe)
endforeach