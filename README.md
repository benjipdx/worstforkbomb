worstforkbomb
=============

an attempt at creating the most destructive fork bomb for testing limits of productions servers

Goals:

* kill networking so cant ping host (require a physical reboot)
* destroy disk io
* steal all process space
* allocate all the memory
* generally make things useless

The idea is that an unprivileged user should be able to run this, and the system should be able to mitigate the attack without completely failing. 
