#include <Atliac/minitest.h>

int main(int argc, char **argv) 
{
    MINITEST_RUN_TESTS(argc, argv);
    return 0;
}

TEST_CASE("Test case 1")
{
    ASSERT_TRUE(1 == 1);
}