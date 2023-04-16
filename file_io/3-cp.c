#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of the arguments
 * Return: 0 if success, -1 if it fails
 *
 */
int main(int argc, char **argv)
{
	if (argc != 3) 
	{ 
		/* Vérifier le nombre d'arguments*/
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", exit(97);
	}

 from_fd = open(argv[1], O_RDONLY); 
/* Ouvrir le fichier source en lecture seule*/

	if (fd_from == -1) 
	{ 
		/* Vérifier si l'ouverture a échoué*/
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

/* Ouvrir le fichier destination en écriture avec les permissions rw-rw-r--*/
int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1) 
	{
	/* Vérifier si l'ouverture a échoué*/
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
/*Copier le contenu du fichier src vers le fichier de dest*/
char buffer[BUFFER_SIZE]; 
/* Déclarer un tampon pour la R/W du fichier*/
ssize_t bytes_read, bytes_written; 
/* Déclarer des variables pour stocker le nombre d'octets R/W */
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) 
	{
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1) 
	{
            print_error_and_exit(99, "Error: Can't write to %s\n", argv[2]);
        }
	
	}

    /* Check for read error*/
    if (bytes_read == -1) {
        print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
    }

    /* Close file descriptors*/
	if (close(fd_from) == -1) 
    	{
        print_error_and_exit(100, "Error: Can't close fd %d\n", fd_from);
    }
    if (close(fd_to) == -1) {
        print_error_and_exit(100, "Error: Can't close fd %d\n", fd_to);
    }

    return 0;
}
