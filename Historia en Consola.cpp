// Historia en Consola.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int anios = 0;
    int decisiones = 0;
    int decisiones2 = 0;

    cout << "Hola amigo viajero del tiempo!\nYo se que te preguntaras por que estas aqui, te lo explicare poco a poco." << endl;
    system("pause");
    system("cls");
    cout << "Como sabras en el 2020 sucedieron una serie de eventos que alteraron el curso de la historia\nBueno ahora por algun motivo extraordinario el Cruz Azul es campeon" << endl;
    cout << "Aun nadie comprende como fue que sucedio pero esto podria llevarnos a la destruccion mundial y tu aventurero seras el \nencargado de conseguir que el Cruz Azul consiga algun campeonato antes de este para corregir la historia" << endl;
    system("pause");
    system("cls");
    cout << "Comencemos, a donde te gustaria ir primero?" << endl;
    cout << "1. 1999" << endl;
    cout << "2. 2001" << endl;
    cout << "3. 2008" << endl;
    cout << "4. 2009" << endl;
    cout << "5. 2013" << endl;
    cout << "6. 2018" << endl;
    cin >> anios;
    system("cls");
    switch (anios)
    {
        case 1:
        {
            cout << "Esto esta facil, tienes a la generacion dorada ademas Pachuca no es taaaaaaaaaaan complicado" << endl;
            cout << "Bien hecho, le has dado algunos años mas al mundo, quieres ir por otro campeonato?" << endl;
            cout << "1. Si" << endl;
            cout << "2. No" << endl;
            cin >> decisiones;
            system("cls");
                switch (decisiones)
                {
                    case 1:
                    {
                        cout << "Bien hermano esta decision es complicada, por razones de tiempo iras directo al 2013." << endl;
                        cout << "Tu trabajo es evitar que Castro este en el campo, pero en ese entonces habia 2, tendras que improvisar porque ni yo recuerdo quien se equivoco :(" << endl;
                        cout << "A cual Castro sacaras?" << endl;
                        cout << "1. Israel Castro" << endl;
                        cout << "2. Alejandro Castro" << endl;
                        cin >> decisiones;
                        system("cls");
                        switch (decisiones)
                        {
                            case 1:
                            {
                                cout << "CABEZAZO DE MOISES... GOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOL" << endl;
                                cout << "Oh no, nos quedan pocos minutos amigo, ya no hay vuelta atras :( adios." << endl;
                            }
                            case 2:
                            {
                                cout << "Vamoooooooooooooooooooooooos, Cruz Azul gano, Corona pudo para el cabezazo de Moises, gracias por salvar al mundo hermano, te queremos :)" << endl;
                            }
                        }
                    }
                    case 2:
                    {
                        cout << "Entendible, tambien creo que el mundo estara mejor con un Cruz Azul de 10 titulos, gracias por tu ayuda" << endl;
                    }
                }
        }
        //Final Caso 1
        case 2:
        {
            cout << "Buena decision, esta Copa Libertadores bastara, pero dime te gustaria por otro titulo?" << endl;
            cout << "1. Si" << endl;
            cout << "2. No" << endl;
            cin >> decisiones;
            switch (decisiones)
            {
                case 1:
                {
                    cout << "Bien hermano esta decision es complicada, por razones de tiempo iras directo al 2013." << endl;
                    cout << "Tu trabajo es evitar que Castro este en el campo, pero en ese entonces habia 2, tendras que improvisar porque ni yo recuerdo quien se equivoco :(" << endl;
                    cout << "A cual Castro sacaras?" << endl;
                    cout << "1. Israel Castro" << endl;
                    cout << "2. Alejandro Castro" << endl;
                    cin >> decisiones;
                    system("cls");
                    switch (decisiones)
                    {
                        case 1:
                        {
                            cout << "CABEZAZO DE MOISES... GOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOL" << endl;
                            cout << "Oh no, nos quedan pocos minutos amigo, ya no hay vuelta atras :( adios." << endl;
                            break;
                        }
                        case 2:
                        {
                            cout << "Entendible, tambien creo que el mundo estara mejor con un Cruz Azul de 10 titulos, gracias por tu ayuda" << endl;
                            break;
                        }
                    }
                    break;
                }
                case 2:
                {
                    cout << "Has ganado suficiente tiempo amigo, gracias por tu ayuda" << endl;
                    break;
                }
            }
            break;
        }
        //Final Caso 2
        case 3:
        {
            cout << "Amigo este año fue complicado, en el 2008 deberas escoger entre 2 posibilidades, a donde te gustaria ir primero?" << endl;
            cout << "1. Final contra Santos" << endl;
            cout << "2. Final contra Toluca" << endl;
            cin >> decisiones;
            system("cls");
                switch (decisiones)
                {
                    case 1:
                    {
                        cout << "Nada raro paso contra Santos pero Ludueña fue maravilloso este dia" << endl;
                        cout << "Para comenzar evitemos que Ludueña meta el gol con el que Santos ganara" << endl;
                        cout << "Te gustaria darle otro gol a Cruz Azul o te la juegas a los tiempos extra?" << endl;
                        cout << "1. Un gol mas, vamos" << endl;
                        cout << "2. Que emocionante, tiempos extra" << endl;
                        cin >> decisiones;
                        if (decisiones == 1)
                        {
                            cout << "Bien hecho! Cruz Azul gano el campeonato con un final dramatico y el orden fue restaurado" << endl;
                        }
                        else
                        {
                            cout << "Oh no, de ultimo minuto en los tiempos extras perdio Cruz Azul otra vez pero aun tenemos una oportunidad vamos a la final contra Toluca" << endl;
                            cout << "Aqui Cesar Villaluz casi muere de una falta y ni penal marcaron y Yosgart metio un penal fallado con su espalda :(" << endl;
                            cout << "Que te gustaria evitar?" << endl;
                            cout << "1. Quiero el penal de Villaluz" << endl;
                            cout << "2. Que el balon no le rebote en la espalda a Yosgart" << endl;
                            cin >> decisiones;
                            switch (decisiones)
                            {
                                case 1:
                                {
                                    cout << "Se marco penal y Sabah lo anoto, buen trabajo, restauraste el orden del universo" << endl;
                                    break;
                                }
                                case 2:
                                {
                                    cout << "Bueno perdimos a Villaluz pero la victoria se dio en penales, bien hecho!" << endl;
                                }
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        cout << "Esta si que fue una final una tragica" << endl;
                        cout << "Aqui Cesar Villaluz casi muere de una falta y ni penal marcaron y Yosgart metio un penal fallado con su espalda :(" << endl;
                        cout << "Que te gustaria evitar?" << endl;
                        cout << "1. Quiero el penal de Villaluz" << endl;
                        cout << "2. Que el balon no le rebote en la espalda a Yosgart" << endl;
                        cin >> decisiones;
                        switch (decisiones)
                        {
                            case 1:
                            {
                                cout << "Se marco penal y Sabah lo anoto, buen trabajo, restauraste el orden del universo" << endl;
                                break;
                            }
                            case 2:
                            {
                                cout << "Bueno perdimos a Villaluz pero la victoria se dio en penales, bien hecho!" << endl;
                                break;
                            }
                        }
                    }
                }
                break;
        }
        //Final Caso 3
        case 4:
        {
            cout << "Estas en el 2009 el partido es contra Monterrey, claramente otra vez Cruz Azul era el favorito" << endl;
            cout << "Que te parece si somos malvados esta vez? Lesionamos a Suazo que le metio 2 goles a Cruz Azul?" << endl;
            cout << "1. Si" << endl;
            cout << "2. No" << endl;
            cin >> decisiones;
            if (decisiones == 1)
            {
                cout << " Bien, con esta decision se pudo conseguir el campeonato, aunque la lesion de Suazo fue desafortunada" << endl;
            }
            else
            {
                cout << "Bueno, a lo mejor si fue muy malvado, entonces vistamos al Tito Villa de heroe y que haga un hat trick?" << endl;
                cout << "1. Si" << endl;
                cout << "2. No" << endl;
                cin >> decisiones2;
                if (decisiones2 == 1)
                {
                    cout << "Esto bastara deberiamos volver a nuestro tiempo antes de que se de cuenta de ese boost :p" << endl;
                }
                else
                {
                    cout << "Te has tardado demasiado con una decision, hemos perdido al mundo :(" << endl;
                }
            }
            break;
        }
        //Final Caso 4
        case 5:
        {
            cout << "No creo tener que explicarte lo que paso en 2013 pero si necesitas una pista, tiene que ver con el cabezazo de Moises" << endl;
            cout << "Tengo 2 opciones que podrian funcionar para que esto no pase\nPodemos sacar a Castro o que le den roja a Aquivaldo y que marquen el penal de Cruz Azul que no marcaron" << endl;
            cout << "Que te gustaria hacer?" << endl;
            cout << "1. Sacar a Castro" << endl;
            cout << "2. Roja a Aquivaldo" << endl;
            cin >> decisiones;
            system("cls");
            if (decisiones == 1)
            {
                cout << "Tenemos un problema, habia 2 Castro, te tocara echar una moneda al aire a ver cual se equivoco :(" << endl;
                cout << "1. Alejandro Castro" << endl;
                cout << "2. Israel Castro" << endl;
                cin >> decisiones2;
                if (decisiones2 == 1)
                {
                    cout << "Bien hecho, el cabezazo de Moises fue directo a Corona y el Cruz Azul gano gracias a eso, te debemos una amigo, has salvado el mundo" << endl;
                }
                else
                {
                    cout << "Oh no, ese no era el Castro que debiamos sacar :( ya es muy tarde, tienes que escapar" << endl;
                }
            }
            else
            {
                cout << "Bien hecho, ni el cabezazo de Moises pudo frenar la victoria despues de que el Chaco metiera ese penal, tu ayuda fue invaluable, gracias :D" << endl;
            }
            break;
        }
        //Final Caso 5
        case 6:
        {
            cout << "Si te decidiste por este caso, no hay mucho que hacer" << endl;
            system("pause");
            cout << "Aqui no paso nada raro, pero podemos esperar a ver que pasa" << endl;
            cout << "Supongo que nada, este año en realidad no afecto intentemos algo mas" << endl;
            system("pause");
            cout << "Bueno parece que exageramos, nada pasa si no tocas ningun titulo, bueno... Gracias" << endl;
        }
    }
}