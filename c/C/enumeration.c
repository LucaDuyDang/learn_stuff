// tuỳ chỉnh gán giá trị
enum Status
{
    PENDING = 1,
    IN_PROGRESS = 3,
    COMPLETED = 5
};

int main()
{
    enum Status taskStatus = IN_PROGRESS;
    printf("Task status code: %d\n", taskStatus); // Kết quả: 3
}