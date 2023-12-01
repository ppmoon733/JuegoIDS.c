#include <stdio.h>
#include <stdlib.h>

int main(){
     char x;
     int y=0, hum=1;
     do{
        system("cls");
        printf("Has escojido Humano\n\nEstas seguro?(y/n):\t\t");
        scanf(" %c", &x );
        if (x == 'n'){
          y++; 
        }
        else if (x == 'y'){
            int cam;
            system("cls");
            printf("Has escojido Humano\n\n");
            system("pause");
            system("cls");
            //Escena 1
            printf("Naces en un peque%co poblado, tienes una familia muy cari%cosa, no tienes una vida mala. Pero pasa el tiempo y ya tienes 18 a%cos, te das cuenta que la vida aqui no va a ningun lado, y debes de decidir, que quieres hacer de tu vida?, has demostrado tus capacidades para el combate y la magia, pero muy dentro de ti crees que la vida aqui, no esta tan mal.\n", 164, 164, 164);
            system("pause");
            printf("\nQue vas a hacer?\n1)\tIr a la academia de Guerreros\n2)\tIr a la capital a estudiar magia\n3)\tQuedarte aqui\n\n");
            scanf(" %d", &cam);
            //Escena 2
            if(cam == 1){
                hum+=1;
                system("cls");
                printf("Ir a la academia representa dejar atras todo y a todos...\n");
                system("pause");
                system("cls");
                printf("Pero tu lo sabes, sabes que si te quedas aqui, fracasaras. Quieres que el reino te reconozca, quieres que todos conozcan tus talentos, es un peque%co costo por la grandeza, verdad?\n",164);
                system("pause");
                system("cls");
                printf("Decides emprender tu viaje hacia la capital, pero hay tres caminos, cada uno diferente, pero solo puedes escojer 1.\n\n\n1)\tLa ruta facil\n2)\tEl camino que pasa por el bosque\n3)\tUn camino monta%coso\n\n",164);
                printf(" %d", hum);
                scanf(" %d", &cam);
                //Escena 10
                if (cam == 1){
                    hum+=8;
                    system("cls");
                    printf("Has escojido el camino facil\n\n");
                    system("pause");
                    system("cls");
                    printf("En la salida del pueblo piensas que si realmente vale la pena arriesgar tu buena vida por algo como la guerra, la muerte, la desesperacion \ny te das cuenta que esa vida no es para ti.\n\n");
                    system("pause");
                    system("cls");
                    printf("Regresas a tu casa, donde tus papas te reciben con los brazos abiertos, la cena lista y  empiezan a hablar sobre tu futuro aqui en el pueblo.\n");
                    printf("Tu pap%c dice algo de casarse pero tu realmente no le presetas atencion, piensas que aun estas muy chico para casarte, que aun no es el momento para tener esta conversaci%cn.\n\n",160,162);
                    system("pause");
                    system("cls");
                    system("pause");
                    system("cls");
                    printf("\n\n\n7 a%cos despues. . .\n\n\n", 164);
                    system("pause");
                    system("cls");
                    printf("La palabra casarse ha estado pasando por tu cabeza ultimamente, pues claro ya tienes 25 a%cos, con la experincia que has obtenido\nte sientes lo sucicientemente capaz de poder hacer una familia.\n\n", 164);
                    system( "pause" );
                    system("cls");
                    printf("Has conocido a una mujer maravillosa, que se dedica a la floreria, le encanta, lo practica desde peque%ca, y tu sientes que es la indicada,\ntu corazon te grita que es ella; y por eso la has invitado a cenar.\n",164);
                    system("pause");
                    system("cls");
                    printf(" %d", hum);
                    printf("Te has decidido, vas a pedirle matrimonio, pero debes de escojer el lugar perfecto, de esto depende tu futuro.\n\n1)\tCena en una terraza al aire libre, con los mejores platillos\n2)\tUn restaurant con acabado de madera, techo cerrado, con los mejores cortes\n\n");
                    scanf("%d", &cam);
                    //Escena 15
                    if(cam == 1) {
                        system("cls");
                        printf("\n\n\n\n=====Felicidades=====\n\n\n\n");
                        system("pause");
                        system("cls");
                        printf("Ha dicho que si, te sientes realizado, el hombre mas feliz del mundo, pero por un momento fugaz pasa por tu cabeza\nel que hubiera pasado si te hubieras ido a la academia de guerreros\n\n");
                        system("pause");
                        system("cls");
                        printf("\n\n\n30 a%cos despues\n\n\n",164);
                        system("pause");
                        system( "cls" );
                        printf("Abres los ojos y ves a tu alrededor que te rodean tus dos hijos, acompa%cados de sus esposas, y ves a tu hija sosteniendoa  tu primer nieto.\n",164);
                        printf("Sientes que tu tiempo se esta acabando, agarras la mano de tu mujer, y con tu ultimo aliento le dices\n==Si pudiera cambiar algo de mi vida, no lo haria, porque si no, no te hubiera conocido. Gracias por estar siempre a mi lado==\n");
                        hum=18;
                        system("pause");
                    }
                    //Escena 16 
                    if (cam == 2) {
                        system("cls");
                        printf("\n\n\n==A todos nos alcanza la vejez==\n\n\n");
                        system("pause");
                        system("cls");
                        printf("Fallaste, dijo que apreciaba tus sentimientos, pero la verdad es que siempre te vio como un amigo, destrosado y sin rumbo, no sabes que hacer, es un sentimiento que nunca habias sentido, el rechazo.\nDeprimido sientes que todo se acabo, pero no es asi, tus negocios crecen, vives una excelente vejez\ny cuadno ya vas a partir decides dejarle todo a tu cuidadora\n\n");
                        system("pause");
                        system("cls");
                        printf("La gente falla dependiendo de como lo vea, tu. . . no lo hiciste, aun puedes volver a intentarlo\n\n");
                        system("pause");
                        hum=18;
                    }
                }
                
                //Escena 5
                if (cam == 2){
                    system("cls");
                    printf("Has escojido El camino que pasa por el Bosque\n\n");
                    system("pause");
                    system("cls");
                    printf("A lo largo de tu camino conoces a una aventurera novata.\nEntablan una conversacion y coincidieron que ambos se dirijen a la capital.\nTe platica que es una elfa muy habil con el arco tiene, 118 a%cos y le encantan las aventuras.\nAl llegar a la capital se separan y te despides diciendo que esperas que se vuelvan a encontrar\n\n", 164);
                    system("pause");
                    system("cls");
                    printf("Ya en la capital, buscas un lugar donde quedarte, la academia y la ruta mas rapida hacia ella.\nAplicas el examen de admision y quedas admitido. Te enteras que el hijo del rey esta en tu clase.\nDespues de un intercambio de palabras te das cuenta que no te cae bien pero no dices nada, si lo hicieras verias tu cabeza rodar\n\n");
                    system("pause");
                    system("cls");
                    printf("Ahora tu objetivo es ser el mejor de tu clase, el mas apto en combate, el mejor estratega,\nen pocas palabras,\'el mejor\'\n\n");
                    system("pause");
                    system("cls");
                    printf("\n\n\n5 a%cos despues . . .\n\n\n", 164);
                    system("pause");
                    system("cls");
                    printf("Acostado en tu cuarto, a altas horas de la noche escuchas que tocan a tu dormitorio,\n te estan buscando, abres la puerta y ves a unos guardias preguntando por ti\n que vas a hacer?\n\n1)\tAbrir la puerta y decir que eres tu\n2)\tMentir\n");
                    scanf("%d", &cam);
                    system("cls");
                    //Escena 19
                    if (cam == 2){
                        printf("Convenciste a los guardias, a lo lejos ves como se retiran, y tu vas a dormir.\nA la ma%cana siguiente pasan buscando a todos en la academia, te informan que a ti y a tu grupo los van a mandar al campo de batalla\n te sientes asustado pero confias en tus habilidades.\n",164);
                        system("pause");
                        system("cls");
                        printf("\n\n\n==MUERTO EN SERVICIO==\n\n\n");
                        system("pause");
                        system("cls");
                        printf("Hiciste lo que podias, peliaste como un guerrero, lo diste todo de ti, y entendiste que en el\njuego de la guerra, no fuiste mas que un peon.\nA lo lejos ves al ultimo de tus aliados caer, sabes que se acabo, sabes que esto de la guerra,\n==realmente, no vale la pena==\n\n");
                        system("pause");
                        system("cls");                    
                    }

                    //Escena 11
                    if(cam == 1){//si
                        system("cls");
                        printf("Conoces a la princesa, entablan una bonita conversacion, descubren que tienen mucho en comun, y te pregunta que por que quieres ir a la academia\n le dices que es para demostrarle al mundo lo que vales, la princesa suelta una pequeña risa\nburlona, ella te propone que porque no te vuelves su caballero una vez acabada la academia.\nInmediatamente aceptas, sabes que este golpe de suerte no se repetira, te ofrece un\n cuarto en el castillo y tambien te invita a conocer la capital. Cuando estan a punto de salir conoces al principe, desde el inicio sabes que no le caes bien, te ve de manera desagradable . . .\n");
                        system("pause");
                        system("cls");
                        printf("Durmiendo en el castillo, sientes algo, no sabes que es, te sientes en peligro.\nVas al cuarto de la princesa y ves a alguien entrando por la ventana de la princesa, sabes a lo que viene.\n Que vas a hacer?\n\n1)\tDefenderla\n");
                        scanf("%d", &cam);
                        //Escena 18
                        if(cam == 1){
                            system("cls");
                            printf("\n\n\n==Una muerte digna==\n\n\n");
                            system("pause");
                            system("cls");
                            printf("El asesino era mucho para ti, te vas a ir pero con la frente en alto, lograste proteger\n a la princesa, a un alto costo y crees con todo tu corazon que valio la pena\n");
                            system("pause");
                            system("cls");
                        }
                    }
                }
                
                //Escena 6
                if (cam == 3){
                    system("cls");
                    printf("Has escojido el camino monta%coso\n",164);
                    system("pause");
                    system("cls");
                    printf("En medio del camino te encuentras en peligro, no sabes que se escucha, pero viene por ti, el polvo generado\n por los fuertes vientos, disminuye la visibilidad, a lo lejos escuchas \'CORRE\'\n");
                    system("pause");
                    system("cls");
                    printf("Corres lo mas rapido que puedes, cuando crees que ya estas fuera de peligro\n volteas para ver si de verdad te estan siguiendo, pero solo ancanzas a ver a un gran orco peliando contra una bestia blanca\n decides seguir corriendo.\n");
                    system("pause");
                    system("cls");
                    printf("Tus piernas no te responden, sientes que tu corazon se te va a salir, te falta el aire, pero por fin te sientes seguro y a punto de llegar.\nA tu derecha ves y carruaje muy costoso pasar, de repente se para y ves que es la hija del rey y te\npregunta si estas bien, de alguna forma logras decirle que si, pero de repente sientes que se apagan las luces,\n pero te mantienes de pie y la hija te invita a descansar en el castillo, aceptas?\n\n1)\tSi\n2)\tNo\n");
                    scanf("%d", &cam);

                    //Escena11
                    if(cam == 1){//si
                        system("cls");
                        printf("Conoces a la princesa, entablan una bonita conversacion, descubren que tienen mucho en comun, y te pregunta que por que quieres ir a la academia\n le dices que es para demostrarle al mundo lo que vales, la princesa suelta una pequeña risa\nburlona, ella te propone que porque no te vuelves su caballero una vez acabada la academia.\nInmediatamente aceptas, sabes que este golpe de suerte no se repetira, te ofrece un\n cuarto en el castillo y tambien te invita a conocer la capital. Cuando estan a punto de salir conoces al principe, desde el inicio sabes que no le caes bien, te ve de manera desagradable . . .\n");
                        system("pause");
                        system("cls");
                        printf("Durmiendo en el castillo, sientes algo, no sabes que es, te sientes en peligro.\nVas al cuarto de la princesa y ves a alguien entrando por la ventana de la princesa, sabes a lo que viene.\n Que vas a hacer?\n\n1)\tDefenderla\n");
                        scanf("%d", &cam);
                        //Escena 18
                        if(cam == 1){
                            system("pause");
                            system("cls");
                            printf("\n\n\n==Una muerte digna==\n\n\n");
                            system("pause");
                            system("cls");
                            printf("El asesino era mucho para ti, te vas a ir pero con la frente en alto, lograste proteger\n a la princesa, a un alto costo y crees con todo tu corazon que valio la pena\n");
                            system("pause");
                            system("cls");

                        }

                    }
                    //Escena12
                    if(cam ==2){//no
                        system("cls");
                        system("pause");
                        system("cls");
                        printf("La princesa insiste en que vayan al castillo, y debido a esto aceptas, algo tiene en su voz que te calma.\nPlatican y te cuenta que ella nacio con un don magico, una voz especial, que dependiendo\n de como la entone cambia el estado de la gente. . .\n Al llegar al castillo te dice que si sabes usar la magia, le comentas que sabes muy poco, pero \nes algo que te gustaria aprender, ella te dice que salgan al patio, la sigues y te ensaña \n lo que ella sabia hacer con la magia de tipo agua, te quedas tan maravillado que le pides mas y mas y mas tanto que decides estudiar magia.\n\n" );
                        system("cls");
                        system("pause");
                        printf("La princesa te invita a vivir en el castillo como su subordinado, y inmediatamente\naceptas, esta oportunidad nunca se va a repetir.\n Y asi empiezas a ir a la academia de magia.\nUn dia por la noche decides develarte estudiando los hechizos apendidos,\n y de repente sientes que algo esta mal, y decides ir al cuarto de la princesa para revisar que todo\n este en orden y piensas que deberias llevar tu libro de hechizos pero crees que eso haria sentir preocupada a la princesa\n si es que esta despierta.\nQue vas a hacer?\n1)\tNo llevarlo\n2)\tLlevarlo\n");
                        scanf("%d",&cam);

                        //Escena 18
                        if (cam == 1){//no llevarlo
                         system("cls");
                         printf("\n\n\n==Una muerte digna==\n\n\n");
                         system("pause");
                         system("cls");
                         printf("El asesino era mucho para ti, te vas a ir pero con la frente en alto, lograste proteger\n a la princesa, a un alto costo y crees con todo tu corazon que valio la pena\n");
                         system("pause");
                         system("cls");
                        }
                        //Escena 17
                        if (cam == 2){//Llevarlo
                         system("cls");
                         printf("Tu sentido estaba bien.\n Cuando entras al cuarto de la princesa ves a alguien queriendo\n entrar por la ventana, de inmediato lanzas un hechizo \n y el intruso cae, al quitarle la mascar descubren que es el principe\n y en su cintura trae una daga envenenada, pero aunque no admita nada\n tu sabes a lo que viene.\n\n");
                         system("pause");
                         system("cls");
                         printf("Desde ese dia la princesa te confio su vida, llegando incluso a un trato intimo.\n\n");
                         system("pause");
                         system("cls");
                         printf("\n\n\n==QUE VIVA EL REY==\n\n\n");
                         system("pause");
                         system("cls");
                         printf("Te graduaste, vas a ser el proximo rey y practicamente tu vida esta resuelta que mas puedes pedir\n");
                         system("pause");
                        }
                    }

                }
            }
            //Escena 3
            if (cam == 2){//Magia
                system("cls");
                printf("La magia nunca es sencilla, todo el mundo lo sabe, debes de saber que va a ser algo muy complicado pero lo podras conseguir\n");
                system("pause");
                system("cls");
                printf("Se te presentan dos caminos, el primero es un camino monta%coso donde se han visto recientemente apariciones de orcos y el segundo es el camino normal no sucedere nada especial aqui. . .\n1)\tCamino Monta%coso\n2)\tCamino Normal\n3)\tEvento especial\n\n ",164,164);
                scanf("%d",&cam);
                hum+=2;
                
                //Escena 6
                if (cam == 1){
                    system("cls");
                    printf("Has escojido el camino monta%coso\n",164);
                    system("pause");
                    system("cls");
                    printf("En medio del camino te encuentras en peligro, no sabes que se escucha, pero viene por ti, el polvo generado\n por los fuertes vientos, disminuye la visibilidad, a lo lejos escuchas \'CORRE\'\n");
                    system("pause");
                    system("cls");
                    printf("Corres lo mas rapido que puedes, cuando crees que ya estas fuera de peligro\n volteas para ver si de verdad te estan siguiendo, pero solo ancanzas a ver a un gran orco peliando contra una bestia blanca\n decides seguir corriendo.\n");
                    system("pause");
                    system("cls");
                    printf("Tus piernas no te responden, sientes que tu corazon se te va a salir, te falta el aire, pero por fin te sientes seguro y a punto de llegar.\nA tu derecha ves y carruaje muy costoso pasar, de repente se para y ves que es la hija del rey y te\npregunta si estas bien, de alguna forma logras decirle que si, pero de repente sientes que se apagan las luces,\n pero te mantienes de pie y la hija te invita a descansar en el castillo, aceptas?\n\n1)\tSi\n2)\tNo\n");
                    scanf("%d", &cam);

                    //Escena11
                    if(cam == 1){//si
                        system("cls");
                        printf("Conoces a la princesa, entablan una bonita conversacion, descubren que tienen mucho en comun, y te pregunta que por que quieres ir a la academia\n le dices que es para demostrarle al mundo lo que vales, la princesa suelta una pequeña risa\nburlona, ella te propone que porque no te vuelves su caballero una vez acabada la academia.\nInmediatamente aceptas, sabes que este golpe de suerte no se repetira, te ofrece un\n cuarto en el castillo y tambien te invita a conocer la capital. Cuando estan a punto de salir conoces al principe, desde el inicio sabes que no le caes bien, te ve de manera desagradable . . .\n");
                        system("pause");
                        system("cls");
                        printf("Durmiendo en el castillo, sientes algo, no sabes que es, te sientes en peligro.\nVas al cuarto de la princesa y ves a alguien entrando por la ventana de la princesa, sabes a lo que viene.\n Que vas a hacer?\n\n1)\tDefenderla\n");
                        scanf("%d", &cam);
                        //Escena 18
                        if(cam == 1){
                            system("pause");
                            system("cls");
                            printf("\n\n\n==Una muerte digna==\n\n\n");
                            system("pause");
                            system("cls");
                            printf("El asesino era mucho para ti, te vas a ir pero con la frente en alto, lograste proteger\n a la princesa, a un alto costo y crees con todo tu corazon que valio la pena\n");
                            system("pause");
                            system("cls");

                        }

                    }
                    //Escena12
                    if(cam ==2){//no
                        system("cls");
                        system("pause");
                        system("cls");
                        printf("La princesa insiste en que vayan al castillo, y debido a esto aceptas, algo tiene en su voz que te calma.\nPlatican y te cuenta que ella nacio con un don magico, una voz especial, que dependiendo\n de como la entone cambia el estado de la gente. . .\n Al llegar al castillo te dice que si sabes usar la magia, le comentas que sabes muy poco, pero \nes algo que te gustaria aprender, ella te dice que salgan al patio, la sigues y te ensaña \n lo que ella sabia hacer con la magia de tipo agua, te quedas tan maravillado que le pides mas y mas y mas tanto que decides estudiar magia.\n\n" );
                        system("cls");
                        system("pause");
                        printf("La princesa te invita a vivir en el castillo como su subordinado, y inmediatamente\naceptas, esta oportunidad nunca se va a repetir.\n Y asi empiezas a ir a la academia de magia.\nUn dia por la noche decides develarte estudiando los hechizos apendidos,\n y de repente sientes que algo esta mal, y decides ir al cuarto de la princesa para revisar que todo\n este en orden y piensas que deberias llevar tu libro de hechizos pero crees que eso haria sentir preocupada a la princesa\n si es que esta despierta.\nQue vas a hacer?\n1)\tNo llevarlo\n2)\tLlevarlo\n");
                        scanf("%d",&cam);

                        //Escena 18
                        if (cam == 1){//no llevarlo
                         system("cls");
                         printf("\n\n\n==Una muerte digna==\n\n\n");
                         system("pause");
                         system("cls");
                         printf("El asesino era mucho para ti, te vas a ir pero con la frente en alto, lograste proteger\n a la princesa, a un alto costo y crees con todo tu corazon que valio la pena\n");
                         system("pause");
                         system("cls");
                        }
                        //Escena 17
                        if (cam == 2){//Llevarlo
                         system("cls");
                         printf("Tu sentido estaba bien.\n Cuando entras al cuarto de la princesa ves a alguien queriendo\n entrar por la ventana, de inmediato lanzas un hechizo \n y el intruso cae, al quitarle la mascar descubren que es el principe\n y en su cintura trae una daga envenenada, pero aunque no admita nada\n tu sabes a lo que viene.\n\n");
                         system("pause");
                         system("cls");
                         printf("Desde ese dia la princesa te confio su vida, llegando incluso a un trato intimo.\n\n");
                         system("pause");
                         system("cls");
                         printf("\n\n\n==QUE VIVA EL REY==\n\n\n");
                         system("pause");
                         system("cls");
                         printf("Te graduaste, vas a ser el proximo rey y practicamente tu vida esta resuelta que mas puedes pedir\n");
                         system("pause");
                        }
                    }

                }
                //Escena 7
                if (cam == 2){
                    system("cls");
                    printf("El camino normal, es un poco largo, pero nada fuera de lo comun.\nA mitad del camino escuchas un carruaje a lo lejos, es el carruaje real\nte haces a un lado para que pasen y de repente se frenan en frente de ti.\nVes que la princesa se asoma y te pregunta que si vas a la capital que ella te lleva\n Aceptas el aventon pero a punto de llegar te invita a ir al castillo.\nAceptas?\n1)\tSi\n2)\tNo\n");
                    scanf("%d",&cam);
                    if(cam ==2){//no
                        system("cls");
                        system("pause");
                        system("cls");
                        printf("La princesa insiste en que vayan al castillo, y debido a esto aceptas, algo tiene en su voz que te calma.\nPlatican y te cuenta que ella nacio con un don magico, una voz especial, que dependiendo\n de como la entone cambia el estado de la gente. . .\n Al llegar al castillo te dice que si sabes usar la magia, le comentas que sabes muy poco, pero \nes algo que te gustaria aprender, ella te dice que salgan al patio, la sigues y te ensaña \n lo que ella sabia hacer con la magia de tipo agua, te quedas tan maravillado que le pides mas y mas y mas tanto que decides estudiar magia.\n\n" );
                        system("cls");
                        system("pause");
                        printf("La princesa te invita a vivir en el castillo como su subordinado, y inmediatamente\naceptas, esta oportunidad nunca se va a repetir.\n Y asi empiezas a ir a la academia de magia.\nUn dia por la noche decides develarte estudiando los hechizos apendidos,\n y de repente sientes que algo esta mal, y decides ir al cuarto de la princesa para revisar que todo\n este en orden y piensas que deberias llevar tu libro de hechizos pero crees que eso haria sentir preocupada a la princesa\n si es que esta despierta.\nQue vas a hacer?\n1)\tNo llevarlo\n2)\tLlevarlo\n");
                        scanf("%d",&cam);

                        //Escena 18
                        if (cam == 1){//no llevarlo
                         system("cls");
                         printf("\n\n\n==Una muerte digna==\n\n\n");
                         system("pause");
                         system("cls");
                         printf("El asesino era mucho para ti, te vas a ir pero con la frente en alto, lograste proteger\n a la princesa, a un alto costo y crees con todo tu corazon que valio la pena\n");
                         system("pause");
                         system("cls");
                        }
                        //Escena 17
                        if (cam == 2){//Llevarlo
                         system("cls");
                         printf("Tu sentido estaba bien.\n Cuando entras al cuarto de la princesa ves a alguien queriendo\n entrar por la ventana, de inmediato lanzas un hechizo \n y el intruso cae, al quitarle la mascar descubren que es el principe\n y en su cintura trae una daga envenenada, pero aunque no admita nada\n tu sabes a lo que viene.\n\n");
                         system("pause");
                         system("cls");
                         printf("Desde ese dia la princesa te confio su vida, llegando incluso a un trato intimo.\n\n");
                         system("pause");
                         system("cls");
                         printf("\n\n\n==QUE VIVA EL REY==\n\n\n");
                         system("pause");
                         system("cls");
                         printf("Te graduaste, vas a ser el proximo rey y practicamente tu vida esta resuelta que mas puedes pedir\n");
                         system("pause");
                        }
                    }

                    //Escena 13
                    if (cam == 1){//si
                        system("cls");
                        printf("Te subes al carruaje y entablas una conversacion con la princesa\ndescubriendo que tienen mucho en comun y algo paso en ti que decides seguirla a todos lados, luego te enterarias\nque tiene un don con su voz, asi logra influenciar en las personas \n\n");
                        system("pause");
                        system("cls");
                        printf("Pasaste tus dias viviendo como subordinado del castillo,\n asisitiendo a la academia de magia, una buena vida, y tanto como tu como la princesa empezaron a sentir algo el uno por el otro\ny un dia decide expresarte sus sentimientos, los aceptas?\n1)\tSi\n");
                        scanf("%d",&cam);

                        //Escena 17
                        if (cam == 1){
                            system("cls");
                            printf("\n\n\n==QUE VIVA EL REY==\n\n\n");
                            system("pause");
                            system("cls");
                            printf("Te graduaste, vas a ser el proximo rey y practicamente tu vida esta resuelta que mas puedes pedir\n");
                            system("pause");
                        }


                    }

                }

                //Escena 8
                if (cam == 3){//Evento especial
                    system("cls");
                    printf("Decides quedarte algo mas de tiempo, quieres estar seguro de esto\nPasaron dos dias y de repente la gente empieza a gritar . . . es el carruaje real, de repente se detiene el carruaje, se asoma la princesa\ny te pregunta a ti si les podrias dar algunas indicaciones para llegar al camino hacia la capital\ny te propone subir al carruaje, aceptas?\n1)\tSi\n2)\tNo");
                    scanf("%d",&cam);
                    
                    //Escena 13
                    if(cam == 1){
                         system("cls");
                        printf("Te subes al carruaje y entablas una conversacion con la princesa\ndescubriendo que tienen mucho en comun y algo paso en ti que decides seguirla a todos lados, luego te enterarias\nque tiene un don con su voz, asi logra influenciar en las personas \n\n");
                        system("pause");
                        system("cls");
                        printf("Pasaste tus dias viviendo como subordinado del castillo,\n asisitiendo a la academia de magia, una buena vida, y tanto como tu como la princesa empezaron a sentir algo el uno por el otro\ny un dia decide expresarte sus sentimientos, los aceptas?\n1)\tSi\n");
                        scanf("%d",&cam);

                        //Escena 17
                        if (cam == 1){
                            system("cls");
                            printf("\n\n\n==QUE VIVA EL REY==\n\n\n");
                            system("pause");
                            system("cls");
                            printf("Te graduaste, vas a ser el proximo rey y practicamente tu vida esta resuelta que mas puedes pedir\n");
                            system("pause");
                        }

                    }

                    //Escena 14
                    if(cam == 2){
                        system("cls");
                        printf("\n\n\n==SOLEDAD==\n\n\n");
                        system("pause");
                        system("cls");
                        printf("Mueres solo");
                    }

                }

            }
            //Escena 4
            if (cam == 3){
                system("cls");
                printf("Decides quedarte\n\n");

                hum+=3;
                //Escena 8 falta el if
                 system("cls");
                    printf("Decides quedarte algo mas de tiempo, quieres estar seguro de esto\nPasaron dos dias y de repente la gente empieza a gritar . . . es el carruaje real, de repente se detiene el carruaje, se asoma la princesa\ny te pregunta a ti si les podrias dar algunas indicaciones para llegar al camino hacia la capital\ny te propone subir al carruaje, aceptas?\n1)\tSi\n2)\tNo");
                    scanf("%d",&cam);
                    
                    //Escena 13
                    if(cam == 1){
                         system("cls");
                        printf("Te subes al carruaje y entablas una conversacion con la princesa\ndescubriendo que tienen mucho en comun y algo paso en ti que decides seguirla a todos lados, luego te enterarias\nque tiene un don con su voz, asi logra influenciar en las personas \n\n");
                        system("pause");
                        system("cls");
                        printf("Pasaste tus dias viviendo como subordinado del castillo,\n asisitiendo a la academia de magia, una buena vida, y tanto como tu como la princesa empezaron a sentir algo el uno por el otro\ny un dia decide expresarte sus sentimientos, los aceptas?\n1)\tSi\n");
                        scanf("%d",&cam);

                        //Escena 17
                        if (cam == 1){
                            system("cls");
                            printf("\n\n\n==QUE VIVA EL REY==\n\n\n");
                            system("pause");
                            system("cls");
                            printf("Te graduaste, vas a ser el proximo rey y practicamente tu vida esta resuelta que mas puedes pedir\n");
                            system("pause");
                //Escena 9
                //Escena 10
                if (cam == 1){
                    hum+=8;
                    system("cls");
                    printf("Has escojido el camino facil\n\n");
                    system("pause");
                    system("cls");
                    printf("En la salida del pueblo piensas que si realmente vale la pena arriesgar tu buena vida por algo como la guerra, la muerte, la desesperacion \ny te das cuenta que esa vida no es para ti.\n\n");
                    system("pause");
                    system("cls");
                    printf("Regresas a tu casa, donde tus papas te reciben con los brazos abiertos, la cena lista y  empiezan a hablar sobre tu futuro aqui en el pueblo.\n");
                    printf("Tu pap%c dice algo de casarse pero tu realmente no le presetas atencion, piensas que aun estas muy chico para casarte, que aun no es el momento para tener esta conversaci%cn.\n\n",160,162);
                    system("pause");
                    system("cls");
                    system("pause");
                    system("cls");
                    printf("\n\n\n7 a%cos despues. . .\n\n\n", 164);
                    system("pause");
                    system("cls");
                    printf("La palabra casarse ha estado pasando por tu cabeza ultimamente, pues claro ya tienes 25 a%cos, con la experincia que has obtenido\nte sientes lo sucicientemente capaz de poder hacer una familia.\n\n", 164);
                    system( "pause" );
                    system("cls");
                    printf("Has conocido a una mujer maravillosa, que se dedica a la floreria, le encanta, lo practica desde peque%ca, y tu sientes que es la indicada,\ntu corazon te grita que es ella; y por eso la has invitado a cenar.\n",164);
                    system("pause");
                    system("cls");
                    printf(" %d", hum);
                    printf("Te has decidido, vas a pedirle matrimonio, pero debes de escojer el lugar perfecto, de esto depende tu futuro.\n\n1)\tCena en una terraza al aire libre, con los mejores platillos\n2)\tUn restaurant con acabado de madera, techo cerrado, con los mejores cortes\n\n");
                    scanf("%d", &cam);
                    //Escena 15
                    if(cam == 1) {
                        system("cls");
                        printf("\n\n\n\n=====Felicidades=====\n\n\n\n");
                        system("pause");
                        system("cls");
                        printf("Ha dicho que si, te sientes realizado, el hombre mas feliz del mundo, pero por un momento fugaz pasa por tu cabeza\nel que hubiera pasado si te hubieras ido a la academia de guerreros\n\n");
                        system("pause");
                        system("cls");
                        printf("\n\n\n30 a%cos despues\n\n\n",164);
                        system("pause");
                        system( "cls" );
                        printf("Abres los ojos y ves a tu alrededor que te rodean tus dos hijos, acompa%cados de sus esposas, y ves a tu hija sosteniendoa  tu primer nieto.\n",164);
                        printf("Sientes que tu tiempo se esta acabando, agarras la mano de tu mujer, y con tu ultimo aliento le dices\n==Si pudiera cambiar algo de mi vida, no lo haria, porque si no, no te hubiera conocido. Gracias por estar siempre a mi lado==\n");
                        hum+=8;
                        printf(" %d", hum);
                        system("pause");
                    }
                    //Escena 16 
                    if (cam == 2) {
                        system("cls");
                        printf("\n\n\n==Nadie sabe consolar un corazon partido==\n\n\n");
                        system("pause");
                        system("cls");
                        printf("Fallaste, dijo que apreciaba tus sentimientos, pero la verdad es que siempre te vio como un amigo, destrosado y sin rumbo, no sabes que hacer, es un sentimiento que nunca habias sentido, el rechazo.\nDeprimido sientes que todo se acabo, pero no es asi, tus negocios crecen, vives una excelente vejez\ny cuadno ya vas a partir decides dejarle todo a tu cuidadora\n\n");
                        system("pause");
                        system("cls");
                        printf("La gente falla dependiendo de como lo vea, tu. . . no lo hiciste, aun puedes volver a intentarlo\n\n");
                        system("pause");
                    }
                }

            }
        }
     }
        }
}while(y!=1 || hum != 18);
}