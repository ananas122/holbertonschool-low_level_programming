#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters to read and print.
 * Return: If function ok, it returns the actual num of bytes read and printed.
 * else it returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o; /* Descripteur de fichier*/
	char *buff;/* Tampon pour lire les données du fichier*/
	ssize_t r, w = 0; /*Résultats des fonctions read et write*/

	if (filename == NULL)
		return (0); /* Si le nom de fichier est NULL, retourne 0*/

	o = open(filename, O_RDONLY);
	/*O_RDONLY : Ouverture en mode lecture seulement*/
	if (o == -1)
		return (0); /*Si l'ouverture du fichier échoue, retourne 0*/

	buff = (char *)malloc(letters * sizeof(char));
	if (buff == NULL)
	{
		close(o);
		return (0); /*Si l'allocation du tampon échoue, retourne 0*/
	}

	r = read(o, buff, letters);
	if (r == -1)
	{
		free(buff);
		close(o);
		return (0); /* Si la lecture du fichier échoue, retourne 0*/
	}

	w = write(STDOUT_FILENO, buff, r);
	if (w == -1 || w != r)
	{
		free(buff);
		close(o);
		return (0); /*Si l'affichage des données échoue, retourne 0*/
	}

	free(buff);
	close(o);
	return (w); /* Retourne le nombre d'octets lus et affichés*/
}

