/* BL702 Driver*/
#include <bflb_platform.h>
#include <bl702_glb.h>
#include <hal_gpio.h>
/* USB STDIO */
#include <usb_stdio.h>
#include <stdlib.h>
#include <string.h>

#include "io_def.h"
#include "mcu_lcd.h"

int main(void)
{
	char	buf[128] = {0}, buf2[16];
	
    bflb_platform_init(0);
    MSG_DBG(
        "Now can use MSG_xxx, LOG_xxx and bflb_platform_printf on uart.\r\n");  // just appear on uart unless use printf

#ifdef M0SENSE_USE_USBSTDIO
    usb_stdio_init();                                        // MUST be called before any call to printf or puts
    printf("Now can use printf, puts on usb_cdc_acm.\r\n");  // on usb, ttyACMx on Linux or COMx on Windows.
#endif

    GLB_GPIO_Type gpios[] = {LCD_SCK_PIN, LCD_SDA_PIN};
    GLB_GPIO_Func_Init(GPIO_FUN_SPI, gpios, sizeof(gpios) / sizeof(GLB_GPIO_Type));
    gpio_set_mode(BTN_PIN, GPIO_INPUT_PP_MODE);
    printf("[init] goio set mode complete.\r\n");

    if (lcd_init()) {
        printf("[init] lcd init err \r\n");
    }
    lcd_set_dir(3, 0);
//    lcd_clear(0xffff);
    lcd_clear(0x0000);
	
	for (int i = 1; i <= 26; i++) {
		if (i % 3 == 0) strcat(buf, "Fizz");
		if (i % 5 == 0) strcat(buf, "Buzz");
		if (i % 3 && i % 5) {
			itoa(i, buf2, 10);
			strcat(buf, buf2);
		}
		strcat(buf, " ");
	}
	
    lcd_draw_str_ascii16(0, 0, 0xffff, 0x0000, buf, 100);

    while (1) {
#if 0
        uint16_t color = rand() & 0xffff;
        printf("lcd flush: (%#04x)\r\n", color);
        lcd_clear(color);
        lcd_draw_str_ascii16(34, 0, rand() & 0xffff, color, "M 0 S E N S E", 13);
        lcd_draw_str_ascii16(0, 16, rand() & 0xffff, color, "TinyML & MaixHUB", 16);
        mtimer_delay_ms(2000);
#endif
    }
}
