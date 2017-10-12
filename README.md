# Optimized Real Time Disk Scheduling
A New and Optimized Disk Scheduling Algorithm which intends to reduce number of head movements while disk operations.

> **Based on the Research Paper:**
> ## A New Optimized Real-Time Scheduling Algorithm 
> - Dayashankar Singh
> - Nidhi

### Implementation of the Above Paper.
Language used for implementation: **C**

> Implemented By:
> - Arpit Jain
> - Gautam Yadav

## Abstract
In this proposed algorithm, initially the disk head is at the disk start position and has the direction towards the final disk position. It means initial head position and direction of head is always same. First we sort all the cylinders input blocks by using any sorting algorithm. Initially the head is at position 0 and sequentially moves and reached from this block to the highest input block number, servicing all the input request blocks in front of the head immediately. 

## Conclusions
In this paper, a new real-time optimized disk scheduling has been implemented which imposes almost no performance penalty over the non-real time optimal schedulers, when have sufficient slack time. With the help of our simulation and comparison of this proposed algorithm with existing algorithms, it is clear that the proposed algorithm reduces the total head movements. In this algorithm, sometimes the number of head movements is equal to SSTF or LOOK scheduling but it occurs very rarely. Worst case occurs when all the input blocks are concentrated near the extreme position or at the extreme position.  In this paper a lot of efforts have been done to improve the performance of disk I/O access, even there are tremendous scope for the improvement of disk I/O access. 

## References
[Link to the Paper]( http://research.ijcaonline.org/volume93/number18/pxc3896046.pdf )
