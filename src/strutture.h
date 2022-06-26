/*
 * strutture.h
 *
 *  Created on: 9 giu 2022
 *      Author: ranieromito
 */

#ifndef STRUTTURE_H_
#define STRUTTURE_H_

#define CARATTERI 50
#define LUNG_CODICE 6
#define MAX_ART_ORDINE 10


typedef struct
{
	char ragione_sociale[CARATTERI];
	char piva[CARATTERI];
	char citta[CARATTERI];
	char email[CARATTERI];

	char username[CARATTERI];
	char pass[CARATTERI];

	float valutazione;

}cliente_t;

typedef struct
{
	char cod_gadget[LUNG_CODICE];
	char nome_gadget[CARATTERI];
	char desc[CARATTERI];
	char colore[CARATTERI];
	//Tipologia
	float prezzo;
	int quantita;
	int venduti;

}gadget_t;

typedef struct
{
	char cod_gadget[LUNG_CODICE];
	int quantita;
	float prezzo_CAD;

}articoli_ordine_t;

typedef struct
{
	char cod_ordine[LUNG_CODICE];
	articoli_ordine_t articoli_ordine[MAX_ART_ORDINE];
	int n_gadget;
	int stato;  //0 non confermata 1 confermata
	float totale;
	char commento[CARATTERI];
	char username_cliente[CARATTERI];

}ordine_t;





#endif /* STRUTTURE_H_ */
