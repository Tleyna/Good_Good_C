int main(void)
{
    unsigned short time_h = 10; // часы
    unsigned short time_m = 33; // минуты
    unsigned short time_s = 5; // секунды

    unsigned short h, m, s; // добавляемое время: h - часы; m - минуты; s - секунды
    scanf("%hu; %hu; %hu", &h, &m, &s);

    // здесь продолжайте программу

    int res_time_s = (time_s + s) % 60;
    int carry_m = (time_s + s) / 60;

    int res_time_m = (time_m + m + carry_m) % 60;
    int carry_h = (time_m + m + carry_m) / 60;

    int res_time_h = (time_h + h + carry_h) % 24;

    printf("%.2d:%.2d:%.2d", res_time_h, res_time_m, res_time_s);

    return 0;
}
