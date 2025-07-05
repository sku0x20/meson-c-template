project('spiking', 'c')

c = run_command(['python3', 'grab_files.py', 'src'], check: true)
sources = c.stdout().strip().split('\n')
executable('spike', sources)
