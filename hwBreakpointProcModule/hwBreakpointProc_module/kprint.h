#ifndef KPRINT_H_
#define KPRINT_H_

#define KP_SOH      "[+] KPM " /* ASCII Start Of Header */
#define KP_EMERG   KP_SOH "M " /* system is unusable */
#define KP_ALERT   KP_SOH "A " /* action must be taken immediately */
#define KP_CRIT    KP_SOH "C " /* critical conditions */
#define KP_ERR     KP_SOH "E " /* error conditions */
#define KP_WARNING KP_SOH "W " /* warning conditions */
#define KP_NOTICE  KP_SOH "N " /* normal but significant condition */
#define KP_INFO    KP_SOH "I " /* informational */
#define KP_DEBUG   KP_SOH "D " /* debug-level messages */

#define kp_fmt(fmt) fmt
#define kp_emerg(fmt, ...)  printk(KP_EMERG   kp_fmt(fmt), ##__VA_ARGS__)
#define kp_alert(fmt, ...)  printk(KP_ALERT   kp_fmt(fmt), ##__VA_ARGS__)
#define kp_crit(fmt, ...)   printk(KP_CRIT    kp_fmt(fmt), ##__VA_ARGS__)
#define kp_err(fmt, ...)    printk(KP_ERR     kp_fmt(fmt), ##__VA_ARGS__)
#define kp_warn(fmt, ...)   printk(KP_WARNING kp_fmt(fmt), ##__VA_ARGS__)
#define kp_notice(fmt, ...) printk(KP_NOTICE  kp_fmt(fmt), ##__VA_ARGS__)
#define kp_info(fmt, ...)   printk(KP_INFO    kp_fmt(fmt), ##__VA_ARGS__)
#define kp_cont(fmt, ...)   printk(KP_CONT    fmt, ##__VA_ARGS__)


#endif /* KPRINT_H_ */