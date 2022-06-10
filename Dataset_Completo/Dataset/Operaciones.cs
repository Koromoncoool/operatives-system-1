using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dataset
{
    public class Operaciones
    {
        const double alfa = 0.002f;
        

        public double resolverW(double w, double resultado)
        {
            //  Calcula la nueva W
            return w - (alfa * resultado);
        }

        public double Derivada(double w, double b, List<double> valoresx, List<double> valoresy)
        {
            double suma = 0.0f;
            for (int i = 0; i < valoresx.Count; i++)
            {
                suma = suma + (valoresx[i] * (valoresx[i] * w + b - valoresy[i]));
            }
            
            string p1 = Convert.ToString(valoresx.Count);
            double numerador = 1 / double.Parse(p1);
            /*
             * error
            double p1 = valoresx.Count;
            double numerador = 1 / p1;
            */


            double resultado = numerador * suma;
            return resultado;
        }

        public double ResolverCosto(double w, double b, List<double> valoresx, List<double> valorexy)
        {
            double suma = 0.0f;
            for (int i = 0; i < valoresx.Count; i++)
            {
                double cuadrado = (valorexy[i] - ((w * valoresx[i]) + b));
                string valor = Convert.ToString(Math.Pow(cuadrado, 2));
                suma = suma + double.Parse(valor);
            }
            double p1 = (2 * valoresx.Count);
            double numerador = 1 / p1;
            double resultado = numerador * suma;
            return resultado;
        }
    }
}
