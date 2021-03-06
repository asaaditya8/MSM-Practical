void get_data(char file_name[], double coeff[6], int n);
void write_data(char file_name[], double data[40][20][20], int XN, int TN);
//reads n no of data points from the file file_name and stores in the array coeff
void get_data(char file_name[], double coeff[6], int n)
{
        int i = 0;
        FILE *fp;
        fp = fopen(file_name, "r"); //Openining the file for reading purpose
        for (i = 0; i < n; i = i + 1)
        {
                fscanf(fp, "%lf", &coeff[i]); //Reading the data from the file and storing
        }
        fclose(fp); //Closing the file opened
}

//writes n no of data points to the file file_name from the two dimensional array data
void write_data(char file_name[], double data[40][20][20], int XN, int TN)
{
        int i = 0, j = 0;
        FILE *fp;
        fp = fopen(file_name, "w"); //Openining the file for writing purpose
        // for(t=0; t<=TN; t++){
        for (i = 0; i < XN + 2; i++)
        {
                for (j = 0; j < XN + 2; j++)
                {
                        fprintf(fp, "%lf ", data[TN - 2][i][j]); //Writing the data to the file
                }
                fprintf(fp, "\n");
        }
        // fprintf(fp, "\n");
        // }
        fclose(fp); //Closing the file opened
}