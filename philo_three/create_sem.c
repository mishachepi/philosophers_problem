#include "philo_three.h"

void	create_sem_start(t_params *par)
{
	sem_unlink("/start");
	par->start = sem_open("/start", O_CREAT, 0666, 1);
	sem_wait(par->start);
}

void	create_sem_stop(t_params *par)
{
	sem_unlink("/stop");
	par->stop = sem_open("/stop", O_CREAT, 0666, 1);
	sem_wait(par->stop);
}
