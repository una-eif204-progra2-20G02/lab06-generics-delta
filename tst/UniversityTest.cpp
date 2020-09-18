#include <University.h>
#include "gtest/gtest.h"


TEST(UniversityTestSuite, addProfessor) {
    University university;
    Professor professor("Mike","Guzman",1234567890,1575000.00,0.05);

    university.Add_Professor(professor);
    EXPECT_EQ(university.get_Professor_List().size(),1);
    ASSERT_EQ(university.get_Professor_List().returnElement(0).to_string(),professor.to_string());
}