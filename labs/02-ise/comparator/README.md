# Lab 2: Xilinx ISE Design Suite

#### Contents

## Lab prerequisites

| **A** | **B** | **A>B** | **A=B** | **A<B** |
| :-: | :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 1 | 0 |
| 0 | 1 | 0 | 0 | 1 |
| 1 | 0 | 1 | 0 | 0 |
| 1 | 1 | 0 | 1 | 0 |

According to the truth table, create canonical SoP (Sum of Product) or PoS (Product of Sum) output forms as follows:

&nbsp;

![equation](https://latex.codecogs.com/gif.latex?y_%7BA%3CB%7D%5E%7BSoP%7D%3DA%5Ccdot%20%5Coverline%7BB%7D)

&nbsp;

![equation](https://latex.codecogs.com/gif.latex?y_%7BA%3DB%7D%5E%7BSoP%7D%3D%5Coverline%7BA%7D%5Ccdot%20%5Coverline%7BB%7D&plus;A%5Ccdot%20B)

&nbsp;

![equation](https://latex.codecogs.com/gif.latex?y_%7BA%3CB%7D%5E%7BPoS%7D%3D%28A&plus;B%29%5Ccdot%28%5Coverline%7BA%7D&plus;B%29%5Ccdot%28%5Coverline%7BA%7D&plus;%5Coverline%7BB%7D%29)

&nbsp;

Create K-maps for all three functions.

&nbsp;

| **¬A** | **A** |  |                
| :-: | :-: | :-: | 
| 0 | 0 | **¬B** |        
| 0 | 1 | **B** |   

| **¬A** | **A** |  |      
| :-: | :-: | :-: |
| 1 | 0 | **¬B** |
| 0 | 1 | **B** |

| **¬A** | **A** |  |      
| :-: | :-: | :-: |
| 0 | 0 | **¬B** |
| 1 | 0 | **B** |

&nbsp;

Use the K-map to create the minimum ![equation](https://latex.codecogs.com/gif.latex?y_%7BA%3CB%7D%5E%7BPoS%2Cmin%7D) function.

&nbsp;

![equation](https://latex.codecogs.com/gif.latex?y_%7BA%3CB%7D%5E%7BPoS%2Cmin%7D%3D%5Coverline%7BA%7D%5Ccdot%20B)
    
&nbsp;
