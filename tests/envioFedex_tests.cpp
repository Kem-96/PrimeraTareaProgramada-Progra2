#include <gtest/gtest.h>
#include "../src/envioFedex.h"


namespace
{
    //Test para el constructor
    TEST(EnvioFedex_ObtenerCantKilometros_Test, Test_0__Retorna_true)
    {
        /// AAA

        // Arrange - configurar el escenario
        float km = 500.00;
        float peso = 5.00;
        EnvioFedex* envio1 = new EnvioFedex(km, peso);
        
        delete envio1;

        // Act - ejecute la operación
        float actual = envio1->ObtenerCantKilometros();
        float esperada = 500.00;

        // Assert - valide los resultados
       ASSERT_FLOAT_EQ(esperada, actual);
    }

    TEST(EnvioFedex_ObtenerPesoPaquete_Test, Test_1__Retorna_true)
    {
        /// AAA

        // Arrange - configurar el escenario
        float km = 500.00;
        float peso = 5.25;
        EnvioFedex* envio1 = new EnvioFedex(km, peso);
        
        delete envio1;

        // Act - ejecute la operación
        float actual = envio1->ObtenerPesoPaquete();
        float esperada = 5.25;

        // Assert - valide los resultados
       ASSERT_FLOAT_EQ(esperada, actual);
    }

    //Test para el calculo de los envios 
    TEST(EnvioFedex_CalculoEnvio_Test, Test_2_Distancia_Mayor500km_Retorna_50)
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
    
    TEST(EnvioFedex_CalculoEnvio_Test, Test_3_Distancia_Menor500km_Retorna_35)
    {
        /// AAA

        // Arrange - configurar el escenario
        float km = 200.00;
        float peso = 5.00;
        EnvioFedex* envio1 = new EnvioFedex(km, peso);
        
        delete envio1;

        // Act - ejecute la operación
        float actual = envio1->CalculoEnvio();
        float esperada = 35.00;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(EnvioFedex_CalculoEnvio_Test, Test_4_Peso_Mayor10kg_Retorna_45)
    {
        /// AAA

        // Arrange - configurar el escenario
        float km = 300.00;
        float peso = 15.00;
        EnvioFedex* envio1 = new EnvioFedex(km, peso);
        
        delete envio1;

        // Act - ejecute la operación
        float actual = envio1->CalculoEnvio();
        float esperada = 45.00;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(EnvioFedex_CalculoEnvio_Test, Test_5_Peso_Menor10kg_Retorna_35)
    {
        /// AAA

        // Arrange - configurar el escenario
        float km = 100.00;
        float peso = 5.15;
        EnvioFedex* envio1 = new EnvioFedex(km, peso);
        
        delete envio1;

        // Act - ejecute la operación
        float actual = envio1->CalculoEnvio();
        float esperada = 35.00;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    
}