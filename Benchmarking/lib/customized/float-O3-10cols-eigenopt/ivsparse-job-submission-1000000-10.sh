#!/bin/bash
#SBATCH --job-name=float-O3-10cols-eigenopt-1000000-10
#SBATCH -p bigmem
#SBATCH --nodes=1
#SBATCH --tasks-per-node=1
#SBATCH -o results-float-O3-10cols-eigenopt/output/1000000_10.out
#SBATCH -e results-float-O3-10cols-eigenopt/output/1000000_10.err
#SBATCH --time=5-00:00:00
#SBATCH --mail-type=begin
#SBATCH --mail-type=end
#SBATCH --mail-type=fail
#SBATCH --mail-user=wolfgans@mail.gvsu.edu
#SBATCH --mem=0
#SBATCH --exclusive
source ~/.bashrc
workon vcsc
srun python mat-gen-mem-calc.py 1000000 10 results-float-O3-10cols-eigenopt/1000000_10_ customized/float-O3-10cols-eigenopt/simulatedBench_COO_1000000_10.cpp all
rm customized/float-O3-10cols-eigenopt/simulatedBench_COO_1000000_10.cpp
rm customized/float-O3-10cols-eigenopt/simulatedBench_COO_1000000_10.out
rm customized/float-O3-10cols-eigenopt/ivsparse-job-submission-1000000-10.sh
