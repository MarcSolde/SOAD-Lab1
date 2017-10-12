#include "threads.h"

void iowaSetup(int size, void(* proc)(int), int param) {
	thread_manager_init();
	thread_startup_report(); /***********/
	thread_launch( size, proc, param );
        thread_manager_start();
}

void iowaRelinquish(){
	thread_relinquish();
}

void iowaLaunchAndRelinquish(int i, void(* proc)(int), int v) {
	if (v > 1) thread_launch(i, proc, v-1);
	iowaRelinquish();
}
