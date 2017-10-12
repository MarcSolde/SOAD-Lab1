void iowaSetup(int size, void (* proc)(int), int param);

void iowaRelinquish();

void iowaLaunchAndRelinquish(int i, void(* proc)(int), int v);
