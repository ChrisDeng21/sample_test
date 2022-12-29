#include <pthread.h>
#include <stdio.h>

pthread_mutex_t mlock;

int count = 0;

void f(pthread_mutex_t* mutex)
{
    int i;

    pthread_mutex_lock(mutex);

    /* access shared resource */
    for (i = 0; i < 5; i++) {
        printf("[%#lx]value of count: %d\n", pthread_self(), ++count);
    }

    pthread_mutex_unlock(mutex);
}

void* thread_run(void* arg)
{
    (void)(arg);

    f(&mlock);
}

int rct1(void)
{
    pthread_t thread1, thread2, thread3;
    pthread_mutex_init(&mlock, 0);
    pthread_create(&thread1, NULL, thread_run, 0);
    pthread_create(&thread2, NULL, thread_run, 0);
    pthread_create(&thread3, NULL, thread_run, 0);
    pthread_join(thread1, 0);
    pthread_join(thread2, 0);
    pthread_join(thread3, 0);
    pthread_mutex_destroy(&mlock);
    return 0;
}
