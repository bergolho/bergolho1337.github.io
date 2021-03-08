---
layout: page
title: Projects
---

Here is a list of the projects that I work with.

## MonoAlg3D

The MonoAlg3D is a program for solving the 3D monodomain model. It is given by a reaction-diffusion equation and is numeracally solved by applying the Finite Volume Method. The program is implemented in C and maintained by the FISIOCOMP research group. A main advantage of the solver is that not only is able to solve the monodomain equations and simulate the action potential propagation in heterogeneous tissue using both the CPU and GPU computing power, but can also handle non-uniform and non-conforming adaptive meshes. 

In particular, my role in this project was to implement all the functions that enables the coupling of the Purkinje fibers in the ventricular tissue. The Purkinje fibers are basically the structure in the cardiac conduction system which are responsible for stimulating the ventricular cells in endocardium.

Monodomain model:

{% include monoalg.html %}

### How to cite:
----

Oliveira RS, Rocha BM, Burgarelli D, Meira Jr W, Constantinides C, dos Santos RW. Performance evaluation of GPU parallelization, space‐time adaptive algorithms, and their combination for simulating cardiac electrophysiology. Int J Numer Meth Biomed Engng. 2018;34:e2913. https://doi.org/10.1002/cnm.2913

Lawson, B. A., Oliveira, R. S., Berg, L. A., Silva, P. A., Burrage, K., & Dos Santos, R. W. (2020). Variability in electrophysiological properties and conducting obstacles controls re-entry risk in heterogeneous ischaemic tissue. Philosophical Transactions of the Royal Society A, 378(2173), 20190341. https://doi.org/10.1098/rsta.2019.0341

## Purkinje network generator

Another project which I am currently working with is in the implementation of different algorithms to automatically generate Purkinje fibers in any endocardium surface. 

{% include purkinje.html %}