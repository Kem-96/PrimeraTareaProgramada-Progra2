#include <gtest/gtest.h>
#include "../src/envioServicioPostal.h"

namespace
{

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_0_PrimeraClase_PesoEntre0y3_Retorna_15)
    {
        
        /// AAA

        // Arrange - configurar el escenario
        float km = 50.00;
        int peso = 3;
        int clase = 0; // 0 equivale a primera clase
        EnvioServicioPostal* envio1 = new EnvioServicioPostal(clase, peso, km);
        
        delete envio1;

        // Act - ejecute la operación
        float actual = envio1->CalculoEnvio();
        float esperada = 15.00;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_1_PrimeraClase_Peso_Entre4y8_Retorna_31)
    {
        
        /// AAA

        // Arrange - configurar el escenario
        float km = 70.00;
        int peso = 6;
        int clase = 0; // 0 equivale a primera clase
        EnvioServicioPostal* envio1 = new EnvioServicioPostal(clase, peso, km);
        
        delete envio1;

        // Act - ejecute la operación
        float actual = envio1->CalculoEnvio();
        float esperada = 31.5;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }


    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_2_PrimeraClase_Peso_mayor9_Retorna_24)
    {
        
        /// AAA

        // Arrange - configurar el escenario
        float km = 40.00;
        int peso = 12;
        int clase = 0; // 0 equivale a primera clase
        EnvioServicioPostal* envio1 = new EnvioServicioPostal(clase, peso, km);
        
        delete envio1;

        // Act - ejecute la operación
        float actual = envio1->CalculoEnvio();
        float esperada = 24.00;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }


    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_3_SegundaClase_Peso_Entre0y3_Retorna_081)
    {
        
        /// AAA

        // Arrange - configurar el escenario
        float km = 30.00;
        int peso = 2;
        int clase = 1; // 1 equivale a Segunda clase
        EnvioServicioPostal* envio1 = new EnvioServicioPostal(clase, peso, km);
        
        delete envio1;

        // Act - ejecute la operación
        float actual = envio1->CalculoEnvio();
        float esperada = 0.84;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_4_SegundaClase_Peso_Entre4y8_Retorna_477)
    {
        
        /// AAA

        // Arrange - configurar el escenario
        float km = 90.00;
        int peso = 5;
        int clase = 1; // 1 equivale a Segunda clase
        EnvioServicioPostal* envio1 = new EnvioServicioPostal(clase, peso, km);
        
        delete envio1;

        // Act - ejecute la operación
        float actual = envio1->CalculoEnvio();
        float esperada = 4.77;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_5_SegundaClase_Peso_Mayor9_Retorna_1125)
    {
        
        /// AAA

        // Arrange - configurar el escenario
        float km = 150.00;
        int peso = 15;
        int clase = 1; // 1 equivale a Segunda clase
        EnvioServicioPostal* envio1 = new EnvioServicioPostal(clase, peso, km);
        
        delete envio1;

        // Act - ejecute la operación
        float actual = envio1->CalculoEnvio();
        float esperada = 11.25;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_6_TerceraClase_Peso_Entre4y8_Retorna_096)
    {
        
        /// AAA

        // Arrange - configurar el escenario
        float km = 80.00;
        int peso = 7;
        int clase = 2; // 2 equivale a Tercera clase
        EnvioServicioPostal* envio1 = new EnvioServicioPostal(clase, peso, km);
        
        delete envio1;

        // Act - ejecute la operación
        float actual = envio1->CalculoEnvio();
        float esperada = 0.96;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }

}