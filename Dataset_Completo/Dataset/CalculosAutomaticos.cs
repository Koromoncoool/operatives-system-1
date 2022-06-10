using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dataset
{
    public class CalculosAutomaticos
    {

        private double alfa = 0.002;

        public float obtenercosto(float W, float B, List<double> X, List<double> Y)
        {
            double Resultado = 0.0f;
            int i = 0;
            while (i < X.Count)
            {
                Resultado = Resultado + Math.Pow(Y[i] - (W * X[i] + B), 2);
                i++;
            }
            String Tam = (X.Count).ToString();
            float Numerador = 1 / (float.Parse(Tam) * 2);
            return Convert.ToSingle(Numerador * Resultado);
        }

        public float aproximadoW0(float W0, float W1, List<double> X, List<double> Y)
        {
            var i = 0;
            double sumatoria = 0.0;
            while (i < X.Count)
            {
                sumatoria = sumatoria + (W0 + (W1 * X[i]) - Y[i]);
                i++;
            }
            String Tam = X.Count.ToString();
            double numerador = (1/Convert.ToSingle(Tam));
            return (float)(W0 - alfa * (numerador * sumatoria));
        }

        public float aproximadoW1(float W0, float W1, List<double> X, List<double> Y)
        {
            int i = 0;
            double sumatoria = 0.0;
            while (i < X.Count)
            {
                sumatoria += X[i] * ((W1 * X[i]) + W0 - Y[i]);
                i++;
            }
            String Tam = X.Count.ToString();
            double numerador = (1 / Convert.ToSingle(Tam));
            double resul = (W1 - alfa * (numerador * sumatoria));
            return (float)resul;
        }
        public float magnitud(float W1, float J )
        {
            return Convert.ToSingle(Math.Sqrt(Convert.ToDouble(J)+Convert.ToDouble(W1)));
        }
        public float difmagnitud(float W1, float W0)
        {
            return W0-W1;
        }
    }
}
