/*******************************************************************************************/
/* Title: Part Bins in Warehouse                                                           */
/* Desc: Creates a table that outputs the into of what's in each bin in a warehouse        */
/* Notes: I've gone ahead and added macros to make it way quicker to add new bins, because */
/*   it's more realistic to do it that way.                                                */
/*******************************************************************************************/

#include <stdio.h>

/* Create a Macro to print Rows quicker on the table */
#define TAB_ROW(x, y, z) printf("%s\t%d\t%d\n",x,y,z)

struct bin {
  char name[20];  /* Name of Parts in bin */
  int  quantity;  /* quantity of parts in bin */
  int  cost;      /* Cost of single part */
};

/* For the bins, they'll be item_type_bin, flat_screw_bin, ribbon_cable_bin, etc */
struct bin hdmi_cable_bin = { /* Create the bin that contains the HDMI cables */
  "HDMI Cables",
  0,
  1295,
};
struct bin network_cable_bin = { /* Create the bin that contains the HDMI cables */
  "Network Cables",
  12,
  5995,
};
struct bin flat_screw_bin = { /* Create the bin that contains the HDMI cables */
  "Flat Screws",
  0,
  1295,
};

/* Create shortnames for all bins to write less code */
#define hdmi hdmi_cable_bin
#define net network_cable_bin
#define flat flat_screw_bin

int main() {

  /* hdmi = hdmi_cable_bin; */
  //TODO: Find ways to shorten the call like in ruby and other langs

  printf("Bins in the warehouse... \n\n");
  printf("Name\t\tQty\tCost\n"); //Setup Table

  TAB_ROW(hdmi.name,
          hdmi.quantity,
          hdmi.cost);
  TAB_ROW(net.name,
          net.quantity,
          net.cost);
  TAB_ROW(flat.name,
          flat.quantity,
          flat.cost);

  return 0;
}
