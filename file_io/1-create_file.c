#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text
 * Return: 1 - success, -1 error
 */

int create_file(const char *filename, char *text_content)
{
	int file, num;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	/* O_WRONLY : Ouverture en mode écriture seulement*/
	/* O_CREAT : Création du fichier s'il n'existe pas*/
	/* O_TRUNC : Tronquer le fichier si déjà existant*/
	/* 0600 : Permissions rw-------*/

	if (file == -1)
		return (-1);
	if (text_content)
	{
		num = write(file, text_content, strlen(text_content));
		if (num == -1)
			return (-1);
	}
	return (1);
}
