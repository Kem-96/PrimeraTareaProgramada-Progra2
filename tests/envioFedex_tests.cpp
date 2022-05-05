#include <gtest/gtest.h>
#include "../src/envioFedex.h"


namespace
{

    TEST(EnvioFedex_CalculoEnvio_Test, Test_0_Distancia_Mayor500km_Retorna_50)
    {
        /// AAA

        // Arrange - configurar el escenario
        float km = 500.00;
        float peso = 5.00;
        EnvioFedex* envio1 = new EnvioFedex(km, peso);
        
        delete envio1;

        // Act - ejecute la operación
        float actual = envio1->CalculoEnvio();
        float esperada = 50.00;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }

}