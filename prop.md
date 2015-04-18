# ECSE-4965 Term Project
### Dan Foster


**Title**
	cuxz

**Team members**
    Dan Foster - *fosted3@rpi.edu*

**Proposal**
    Implement LZMA2 (Lempel-Ziv-Markov chain algorithm) using both
    multiple CPU threads (OpenMP/pthread) and Thrust/CUDA, in the xz
    file container.

**Motivation**
    Data compression is widely used as a method of saving disk space or
    reducing the time needed to transfer data between machines. Current
    compressors like gzip (using DEFLATE) provide fast compression
    speed, but do not compress data very well; alternative compressors
    like bzip2 (using the Burrows-Wheeler transform) provide a better
    data compression at the expense of slower compression speed. xz
    (using LZMA / LZMA2) provides a very good compression ratio, but is
    slower than bzip2 and gzip. With the goal of having the best
    compression ratio, a multi-threaded Thrust/CUDA implementation of
    the LZMA2 algorithm will provide an excellent compression ratio with
    an improved compression speed.


