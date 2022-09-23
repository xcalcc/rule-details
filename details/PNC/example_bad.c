#include <stdio.h>
#include \"case.h\"

static int sunxi_keyboard_startup(struct sunxi_key_data *key_data,
                                struct platform_device *pdev)
{
        struct device_node *np = NULL;
        int ret = 0;

        key_data->reg_base = of_iomap(np, 0);
        if (key_data->reg_base == 0) {
                pr_err("%s:Failed to ioremap() io memory region.", __func__);
                ret = -1;
        }

        key_data->irq_num = irq_of_parse_and_map(np, 0);
        if (key_data->irq_num == 0) {
                pr_err("%s:Failed to map irq.", __func__);
                ret = -1;
        }

        key_data->mclk = of_clk_get(np, 0);
        if (IS_ERR_OR_NULL(key_data->mclk)) {
                pr_debug("%s: keyboard has no clk.", __func__);
        } else{
                if (clk_prepare_enable(key_data->mclk)) {
                        pr_err("%s enable apb1_keyadc clock failed!", __func__);
                        return -1;
                }
        }
        
        return ret;
}