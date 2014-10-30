drupal project
======

Drupal project is for CodeSprintUA 2014

For obtaining development environment locally You should install vagrant and puppet and from console ran
```sh
vagrant up && vagrant ssh
```
afterwards.
You will be logged into virtual machine.

use 
```sh
sh reinstall.sh
```
for drupal reinstallation from scratch

Virtual host for accessing ppdorg drupal installation 

```
http://drupal.192.168.56.132.xip.io
```

Adminer for mysql administration (credentials drupal:drupal and root:root)

```
http://192.168.56.132.xip.io/adminer.php
```


If ```xip.io``` not working - create row with

```hosts
192.168.56.132 drupal.192.168.56.132.xip.io
```

in ```/etc/hosts```

## How to work with repository
* [How to work at CodeSprint](https://www.drupal.org/node/2366003)
* [Setup local environment](https://www.drupal.org/node/2365529)
  * [Windows users how-to start using vagrant](https://www.drupal.org/node/2366111)
* [How to make pull request from a custom branch to master branch](https://www.drupal.org/node/2366127)
* [Using CI bot](https://www.drupal.org/node/2366145)
* [How to fix merge conflicts](https://www.drupal.org/node/2366341)
* [How to make patch from Pull Request](https://www.drupal.org/node/2366379)
* [Use the issue queue on drupal.org](https://www.drupal.org/node/2366385)
