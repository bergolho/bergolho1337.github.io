---
layout: post
title: Maratona UFJF 2014
---

Solução dos exercícios da Maratona de Programação - UFJF 2014.

- Problema A

some text and [here is possible to download the file in input][1]

[1]:{{ site.url }}/_downloads/maratona-2014.pdf

```cpp
#include <iostream> 
#include <stack> 

 using namespace std; 

 int main () 
{ 
    int N, aux=0, oper1, oper2, result; 
    string Morse; 
    stack <int> pila1; 
    stack <char> pila2; 

    cin>> N; 
    cin.ignore(); 
    getline (cin, Morse); 
    for (int i = 0; i < Morse.size(); i++) 
    { 
       switch (Morse[i]) 
       { 
          case '.': aux+=1; 
          break; 
          case ':': aux+=2; 
          break; 
          case '-': aux+=5; 
          break; 
          case '=': aux+=10; 
          break; 
          default: 
          
	  if (Morse[i]=='+' || Morse [i]=='*') 
	  { 
                if (pila2.empty()) 
		{ 
                   pila1.push (aux); 
                   pila2.push (Morse[i]); 
                   aux=0; 
                } 
	  else 
	  { 
                if ((Morse[i]=='+') || (Morse[i]=='*' && pila2.top()=='*')) 
		{ 
                      pila1.push (aux); 
                      oper1=pila1.top(); 
                      pila1.pop();
                      oper2=pila1.top(); 
                      pila1.pop(); 
                     
                     if (pila2.top()=='+') 
		     {
                        result=oper1+oper2; 
                     } 
		     else 
		     { 
                        result=oper1*oper2; 
                     } 
                     pila1.push(result); 
                     pila2.pop(); 
                     pila2.push (Morse[i]); 
                     aux=0; 
                 } 
		 else 
		 { 
                     pila1.push (aux); 
                     pila2.push (Morse[i]); 
                     aux=0; 
                 } 
              }
           } 
        } 
        if (i == Morse.size()-1) 
	{ 
           pila1.push (aux); 
        } 
     } 
     while (!pila2.empty()) 
     { 
        oper1=pila1.top(); 
        pila1.pop(); 
        oper2=pila1.top(); 
        pila1.pop(); 
        if (pila2.top()=='+') 
	{ 
           result=oper1+oper2; 
        } else 
	{ 
           result=oper1*oper2; 
        }
        pila1.push(result); 
        pila2.pop(); 
     } 
     cout << pila1.top() << endl; 
     //cin.get(); 
     return 0; 
}
```
- Problema B

```

```