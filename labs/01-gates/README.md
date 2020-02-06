![and_gates](/home/lab661/Documents/xhulaj/Digital-electronics-1/labs/01-gates/Screenshot_2020-02-06_08-47-38.png)


| **A** | **NOT** |
| :-: | :-: |
| 0 | 1 |
| 1 | 0 |

| **A** | **B** | **AND** | **NAND** |
| :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 1 |
| 0 | 1 | 0 | 1 |
| 1 | 0 | 0 | 1 |
| 1 | 1 | 1 | 0 |

| **A** | **B** | **OR** | **NOR** |
| :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 1 |
| 0 | 1 | 1 | 0 |
| 1 | 0 | 1 | 0 |
| 1 | 1 | 1 | 0 |

| **A** | **B** | **XOR** | **XNOR** |
| :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 1 |
| 0 | 1 | 0 | 1 |
| 1 | 0 | 0 | 1 |
| 1 | 1 | 0 | 1 |


##DeMorgans Law

![equation](https://latex.codecogs.com/gif.latex?f=a\cdot\overline{b}&plus;\overline{a}\cdot&space;b)
![equation](https://latex.codecogs.com/gif.latex?f_{AND}=\overline{\overline{a&space;\cdot\overline{b}}\cdot\overline{\overline{b}\cdot\overline{c}}})
![equation](https://latex.codecogs.com/gif.latex?f_{OR}=\overline{\overline{a}&plus;b}&plus;\overline{b&plus;c})

    | **A** | **B** |**C** | ![equation](https://latex.codecogs.com/gif.latex?f) | ![equation](https://latex.codecogs.com/gif.latex?f_%7BAND%7D) | ![equation](https://latex.codecogs.com/gif.latex?f_%7BOR%7D) |
    | :-: | :-: | :-: | :-: | :-: | :-: |
    | 0 | 0 | 0 |  | 1 | 0 |
    | 0 | 0 | 1 |  | 0 | 1 |
    | 0 | 1 | 0 |  | 0 | 1 |
    | 0 | 1 | 1 |  | 0 | 1 |
    | 1 | 0 | 0 |  | 1 | 0 |
    | 1 | 0 | 1 |  | 1 | 0 |
    | 1 | 1 | 0 |  | 0 | 1 |
    | 1 | 1 | 1 |  | 0 | 1 |
