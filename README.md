# This is term project for ECE/CS 5504 Computer Architecture 

In this term project we implement the L3 and L4 cache for Power 8 and 9 architectures and test the cache configurations with radix sort workload. 

The repo includes the prebuilt sources for gem5 for POWER ISA and includes the stat files and configurations 

To run this project, simply run the included run.sh file in the repo. 

To switch between Power8 and Power9 architectures, edit the run.sh file - change the last configuration parameter between power8.py and power9.py

To switch the workload that is being tested, edit the power9.py/power8.py to point to the appropriate workload