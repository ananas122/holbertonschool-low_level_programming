#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content)
{
	int o;        /* descripteur de fichier*/
	ssize_t w;    /*Résultat de la fonction write*/

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	/* O_WRONLY : Ouverture en mode écriture seulement*/
	/* O_CREAT : Création du fichier s'il n'existe pas*/
	/* O_TRUNC : Tronquer le fichier si déjà existant*/
	/* 0600 : Permissions rw-------*/
	if (o == -1)
		return (-1);

	if (text_content != NULL)
	{
		int i = 0;
		while (text_content[i] != '\0')
			i++;
		w = write(o, text_content, i);
		if (w == -1)
		{
			close(o);
			return (-1);
		}
	}

	close(o);
	return (1);
}

