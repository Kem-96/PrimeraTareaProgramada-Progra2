#include <gtest/gtest.h>
#include "../src/envioServicioPostal.h"

namespace
{
    TEST(CalculoEnvioFedex_Test, Test_0_Retorna_50)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioServicioPostal envio;

        // Act - ejecute la operación
        int actual = envio.CalculoEnvioServicioPostal();
        int esperada = 50;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(CalculoEnvioFedex_Test, Test_1_Retorna_1)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioServicioPostal envio;

        // Act - ejecute la operación
        int actual = envio.CalculoEnvioServicioPostal();
        int esperada = 50;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(CalculoEnvioFedex_Test, Test_2_Retorna_2)
    {
         /// AAA

        // Arrange - configurar el escenario
        EnvioServicioPostal envio;

        // Act - ejecute la operación
        int actual = envio.CalculoEnvioServicioPostal();
        int esperada = 50;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(CalculoEnvioFedex_Test, Test_3_Retorna_6)
    {
         /// AAA

        // Arrange - configurar el escenario
        EnvioServicioPostal envio;

        // Act - ejecute la operación
        int actual = envio.CalculoEnvioServicioPostal();
        int esperada = 50;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(CalculoEnvioFedex_Test, Test_4_Retorna_24)
    {
         /// AAA

        // Arrange - configurar el escenario
        EnvioServicioPostal envio;

        // Act - ejecute la operación
        int actual = envio.CalculoEnvioServicioPostal();
        int esperada = 50;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}