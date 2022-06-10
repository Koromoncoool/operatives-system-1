using System;
using static System.Console;

namespace Dataset
{
    public class Program
    {
        //  Listas de las coordenadas
        List<Dataset> listaDataset = new List<Dataset>();
        List<double> datasetX = new List<double>();
        List<double> datasetY = new List<double>();
        double W;
        double ResultadoDeriva;
        double ResultadoCosto;
        //  Url Del Archivo
        public string dirArchivo;
        //public string urlFile = "C:\Users\Juan\Desktop\itgam\6to smestre\taller de investigacion\dataset.csv";
        //C:\Users\huevo\OneDrive\Documents\neurona\dataset.csv
        //C:\Users\huevo\OneDrive\Documents\neurona\dataset2.csv
        public List<Dataset> leerArchivo(string dirArchivo)
        {
            int iteraciones;
            System.IO.StreamReader archivo = new System.IO.StreamReader(dirArchivo);
            string separador = ",";
            string linea;
            //  Esta linea lee la primera fila pero se descartará dado que es el encabezado
            while ((linea = archivo.ReadLine()) != null)
            {
                string[] fila = linea.Split(separador);
                double x = double.Parse(fila[0]);
                double y = double.Parse(fila[1]);
                //  Esta linea guarda los datos en un objeto de tipo Dataset
                listaDataset.Add(new Dataset
                {
                    X = Convert.ToDouble(fila[0]),
                    Y = Convert.ToDouble(fila[1])
                });
            }
            //  Retorna dataset
            return listaDataset;
        }

        private void separador(string titulo)
        {
            WriteLine("\n------------------------------------");
            WriteLine(titulo);

        }

        private bool extraerValores(List<Dataset> dataset)
        {
            int tamañoDataset = dataset.Count;
            int Tam = 0;
            while(Tam < dataset.Count)
            {
                datasetX.Add(dataset[Tam].X);
                datasetY.Add(dataset[Tam].Y);
                Tam++;
            }
            int x = datasetX.Count;
            int y = datasetY.Count;
            bool res = true;
            //valida si es dataset x y dataset y son iguales
            if (x == tamañoDataset && y == tamañoDataset)
            {
                res = true;
            }
            else
            {
                res = false;
            }
            return res;
        }

        static void Main(string[] args)
        {
            //  Se crea una objeto de la clase Program
            var programa = new Program();
            //  Se crea una obejto de tipo operaciones
            var neurona = new Operaciones();

            WriteLine("Ingrese la direccion del archivo dataset");
            programa.dirArchivo = Convert.ToString(ReadLine());
            //  Se accede al metodo para leer un archivo CSV y se guardan los valores
            programa.listaDataset = programa.leerArchivo(programa.dirArchivo);
            //  Se extraen los valores de datasetList en listas de X y Y
            bool ExtraerResultado = programa.extraerValores(programa.listaDataset);

            WriteLine("¿Que metodo desea utilizar?");
            WriteLine("1. manual");
            WriteLine("2. automatico");
            int metodoR = int.Parse(ReadLine());

            switch (metodoR)
            {
                case 1:
                    WriteLine("Ingrese el valor de w");
                    programa.W = double.Parse(ReadLine());

                    WriteLine("Ingrese el valor de b");
                    double b = double.Parse(ReadLine());

                    WriteLine("Ingrese el metodo con el que se resolvera: ");
                    WriteLine("1. Rangos");
                    WriteLine("2. Iteraciones");
                    double metodo = int.Parse(ReadLine());
                    if (metodo == 1)
                    {
                        WriteLine("Selecciono Rangos");
                        WriteLine("Ingresa el rango 1: ");
                        double rango1 = double.Parse(ReadLine());
                        WriteLine("Ingresa el rango 2: ");
                        double rango2 = double.Parse(ReadLine());
                        int conta = 1;
                        do
                        {
                            if (ExtraerResultado)
                            {
                                //  Se crea la variable derivada y se llama el metodo de dicha funcion
                                programa.ResultadoDeriva = neurona.Derivada(programa.W, b, programa.datasetX, programa.datasetY);
                                //  Se crea la variable derivada y se llama el metodo de dicha funcion
                                programa.ResultadoCosto = neurona.ResolverCosto(programa.W, b, programa.datasetX, programa.datasetY);
                                //  Se imprimen los resultados
                                programa.separador("Iteracion: " + conta);
                                Write("Resultado de derivada: ");
                                //se catea el decimal y lo pone en dos decimales
                                WriteLine(decimal.Round((decimal)programa.ResultadoDeriva, 2));
                                Write("Resultado de w: ");
                                WriteLine(decimal.Round((decimal)programa.W, 2));
                                Write("Resultado de costo: ");
                                WriteLine(decimal.Round((decimal)programa.ResultadoCosto, 2));
                                // Se crea la variable W y se llama el metodo de calculo de W
                                programa.W = neurona.resolverW(programa.W, programa.ResultadoDeriva);
                            }
                            conta++;
                            //si rango 1 es menor  resultado del costo o rango 2 es mayor a costo se va a detener
                        } while (rango1 < programa.ResultadoCosto || rango2 > programa.ResultadoCosto);
                    }
                    else
                    {/*
                        WriteLine("Selecciono Iteraciones");
                        WriteLine("Ingrese el numero de iteraciones: ");
                        iteraciones = Convert.ToInt32(ReadLine());
                        Clear();
                        for (int i = 0; i <= iteraciones; i++)
                        {
                            if (ExtraerResultado)
                            {
                                //  Se crea la variable derivada y se llama el metodo de dicha funcion
                                programa.ResultadoDeriva = neurona.Derivada(programa.W, b, programa.datasetX, programa.datasetY);
                                //  Se crea la variable derivada y se llama el metodo de dicha funcion
                                programa.ResultadoCosto = neurona.ResolverCosto(programa.W, b, programa.datasetX, programa.datasetY);
                            }
                            programa.separador("Iteracion: " + i);
                            Write("Resultado de la derivada: ");
                            WriteLine(decimal.Round((decimal)programa.ResultadoDeriva, 2));
                            Write("Resultado de w: ");
                            WriteLine(decimal.Round((decimal)programa.W, 2));
                            Write("Resultado de costo: ");
                            WriteLine(decimal.Round((decimal)programa.ResultadoCosto, 2));
                            // Se crea la variable W y se llama el metodo de calculo de W
                            programa.W = neurona.resolverW(programa.W, programa.ResultadoDeriva);
                        }
                        */
                    }
                    break;
                case 2:
                    var CalculoAuto = new CalculosAutomaticos();
                    //Generador de numeros aleatorios y agarra el temporizador 
                    var random = new Random();
                    //estoa selecciona un rago del minimo a maximo
                    float W0 = 0;// (float)(random.Next(-5000, 5000));
                    float W1 = 30;//(float)(random.Next(-5000, 5000));
                    float J = 0.0f;
                    int x = 0;
                    WriteLine("El valor que tomo w0 es = "+W0);
                    WriteLine("El valor que tomo w1 es = " + W1);
                    WriteLine("Seleccione metodo");
                    WriteLine("1.magnitud");
                    WriteLine("2.diferencia magnitud");
                    int seleM = int.Parse(ReadLine());
                    float magnitude = 0.00f;
                    switch(seleM)
                    {
                        case 1:
                            bool Igual=true;
                            do
                            {
                                // WriteLine("Ingrese el numero de iteraciones: ");
                                //int iteraciones = Convert.ToInt32(ReadLine());
                                // Clear();

                                float nuevaJ = CalculoAuto.obtenercosto(W1, W0, programa.datasetX, programa.datasetY);
                                float nuevaW0 = CalculoAuto.aproximadoW0(W0, W1, programa.datasetX, programa.datasetY);
                                float nuevaW1 = CalculoAuto.aproximadoW1(W0, W1, programa.datasetX, programa.datasetY);
                                float nuevaMag = CalculoAuto.magnitud(W1,J);
                                programa.separador("Iteracion: " + x);
                                WriteLine("W0 = " + W0);
                                WriteLine("W1 = " + W1);
                                WriteLine("J = " + J);
                                if(magnitude==nuevaMag)
                                {
                                    Igual = false;
                                }
                                else
                                {
                                    magnitude = nuevaMag;
                                }
                                W0 = nuevaW0;
                                W1 = nuevaW1;
                                J = nuevaJ;
                                x++;

                            } while (Igual);
                            WriteLine("ingrese valor en celcius");
                            float celcius = Convert.ToSingle(ReadLine());
                            float farenheit;
                            farenheit = (celcius * W1) + W0;
                            WriteLine("El valor de fanrehiet es: " + farenheit);
                            break;

                        case 2:
                            bool Igual2 = true;
                            do
                            {
                                // WriteLine("Ingrese el numero de iteraciones: ");
                                //int iteraciones = Convert.ToInt32(ReadLine());
                                // Clear();

                                float nuevaJ = CalculoAuto.obtenercosto(W1, W0, programa.datasetX, programa.datasetY);
                                float nuevaW0 = CalculoAuto.aproximadoW0(W0, W1, programa.datasetX, programa.datasetY);
                                float nuevaW1 = CalculoAuto.aproximadoW1(W0, W1, programa.datasetX, programa.datasetY);
                                float nuevaDifMag = CalculoAuto.difmagnitud(W1, W0);
                                programa.separador("Iteracion: " + x);
                                WriteLine("W0 = " + W0);
                                WriteLine("W1 = " + W1);
                                WriteLine("J = " + J);
                                if (magnitude == nuevaDifMag)
                                {
                                    Igual2 = false;
                                }
                                else
                                {
                                    magnitude = nuevaDifMag;
                                }
                                W0 = nuevaW0;
                                W1 = nuevaW1;
                                J = nuevaJ;
                                x++;

                            } while (Igual2);
                            WriteLine("ingrese valor en celcius");
                            float celcius2 = Convert.ToSingle(ReadLine());
                            float farenheit2;
                            farenheit2 = (celcius2 * W1) + W0;
                            WriteLine("El valor de fanrehiet es: " + farenheit2);
                            break;

                        default:
                            break;
                    }
                    

                    break;
                default:
                    WriteLine("No se detecto el metodo vuelva a intentarlo");
                    break;
            }            
        }
    }
}