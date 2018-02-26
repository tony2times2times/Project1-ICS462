#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/slab.h>

/*initialize birthday_list*/
static LIST_HEAD(birthday_list);

struct birthday {
  int day;
  int month;
  int year;
  struct list_head list;
}

/*birthday con-stuct-or*/
birthday _birthday_new(int day, int month, int year){
  person = kmalloc(sizeof(*person), GFP_KERNEL);
  person->day = day;
  person->month= month;
  person->year = year;
  INIT_LIST_HEAD(&person->list);
  return person;
}

int birthday_init(void){
  /*instantiate birthdays and add them to birthday_list*/
  JimButcher = _birthday_new(26, 10, 1971);
  list_add_tail(&JimButcher->list, &birthday_list);
  PatrickRothfuss = _birthday_new(6, 6, 1973);
  list_add_tail(&PatrickRothfuss->list, &birthday_list);
  ScottLynch = _birthday_new(2, 4, 1978);
  list_add_tail(&ScottLynch->list, &birthday_list);
  BrandonSanderson = _birthday_new(19, 12, 1975);
  list_add_tail(&BrandonSanderson->list, &birthday_list);
  PerterClines = _birthday_new(31, 5, 1969);
  list_add_tail(&PerterClines->list, &birthday_list);
  struct birthday *ptr;
  list_for_each_entry(ptr, &birthday_list, list) {
    printk(KERN_INFO "Birthday: ", day, "/", month, "/" year);
  }

  return 0;
}


void birthday_exit(void){
  struct birthday *ptr, *next
  list_for_each_entry_safe(ptr, next, &birthday_list, list) {
    list_del(&ptr->list);
    kfree(ptr);
  }
  printk(KERN_INFO "Removing Birthdays from birthday_list\n");
}

static LIST_HEAD(birthday_list);
Module_init(birthday_init);
Module_exit(birthday_exit);
MODULE_LICENSE("MIT");
MODULE_DESCRIPTION("Project_one");
MODULE_AUTHOR("TRP");
