@@ -384,6 +384,14 @@ int main(int argc, char** argv) {
        }

        memset(uuid, '\0', 41);
+       if (list[0])
+         {
+           memcpy(uuid, list[0], 40);
+         }
+       else
+         {
+           fprintf(stderr, "ERROR: Cannot retrieve device list\n");
+           return -1;
+         }
        idevice_device_list_free(list);

        printf("INFO: Opening device\n");
