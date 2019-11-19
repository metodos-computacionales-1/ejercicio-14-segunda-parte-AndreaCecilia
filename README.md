# ejercicio-14-segunda-parte-AndreaCecilia

Cuando lambda es igual a 1 se obtiene ña ecuación correspondiente a un oscilador armonico. Como se trata d una ecuación ordinaria de segundo orden (igual a la del oscidalor) espero obtener un comportamiento sinusoidal. 

El resultado de x con relación al tiempo presenta un comportamiento sinusoidal, tal como se esperaba (especificamente paraece un coseno debido a la condicion inicial).

Al plotear tanto la implementación del Método de Euler como el método de Runge kutta se encuentra resultados similares, sin embargo se sabe de antemano que si se aumenta el tamañodel paso en el método de Euler este tendera a volverse inestable  y que el método de Runge Kutta es mas estable y permite obtener resultados mas cercanos a la realidad y con mayor estabilidad. 

Al realizar el diagrama de Fase (x vs v) se encuentra una elipse, lo que es logico dado que en el movimiento armonico simple, al no incluir la parte del amortiguamiento, se debe conservar la energia. Al generarse un camino cerado (elipse) se muestra que hay una conservación de la energia. 

Cuando se agrega el termino de amortiguamiento, se ve que a medida que parsa el tiempo la amplitud de l oscilación disminuye, y el diagrama de fase se convierte en una espiral, es decir, ya no es un camino cerrao, lo que implica que existe una perdida de la energía. 

Al probarlo con otros valores de lambda, el programa no me funciona. Cuando Lambda es mayor a 1 los resultados tienden a -inf, y en menores que 1 tiende a nan
